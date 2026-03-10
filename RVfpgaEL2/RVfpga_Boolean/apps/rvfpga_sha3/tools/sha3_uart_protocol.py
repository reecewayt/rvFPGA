#!/usr/bin/env python3
"""Shared UART protocol logic for SHA3 interface."""

import threading
import time
import re
from typing import Optional, Callable, Any
from dataclasses import dataclass
import serial

from sha3_uart_config import (
    CMD_STREAM,
    CMD_DATASTR,
    CMD_END,
    RESP_STREAM_START,
    RESP_DATASTR_ACK,
    compute_max_chunk_size,
)


@dataclass
class HashRateMetrics:
    """Hash rate metrics for a single operation (STREAM -> END cycle).
    
    Tracks timing from the initial STREAM command to the final hash response,
    along with the data size processed.
    """
    data_size_bytes: int = 0          # Total bytes of data sent
    duration_seconds: float = 0.0     # Total time from STREAM to hash response
    
    @property
    def hash_rate_bytes_sec(self) -> float:
        """Calculate hash rate in bytes per second."""
        if self.duration_seconds <= 0:
            return 0.0
        return self.data_size_bytes / self.duration_seconds
    
    def __str__(self) -> str:
        """Format metrics as human-readable string."""
        if self.hash_rate_bytes_sec == 0:
            return f"{self.data_size_bytes} bytes in {self.duration_seconds:.3f}s (rate: N/A)"
        return f"{self.data_size_bytes} bytes in {self.duration_seconds:.3f}s @ {self.hash_rate_bytes_sec:.2f} B/s"


class HashRateAccumulator:
    """Accumulates hash rate metrics across multiple operations.
    
    Provides global statistics across all test runs while tracking individual
    operation metrics. Thread-safe for concurrent access.
    """
    
    def __init__(self):
        """Initialize accumulator."""
        self.lock = threading.Lock()
        self.operations: list[HashRateMetrics] = []
        self.total_data_bytes = 0
        self.total_duration_seconds = 0.0
    
    def add_operation(self, metrics: HashRateMetrics) -> None:
        """Record a completed operation.
        
        Args:
            metrics: HashRateMetrics instance for the operation
        """
        with self.lock:
            self.operations.append(metrics)
            self.total_data_bytes += metrics.data_size_bytes
            self.total_duration_seconds += metrics.duration_seconds
    
    @property
    def operation_count(self) -> int:
        """Get number of recorded operations."""
        with self.lock:
            return len(self.operations)
    
    @property
    def global_hash_rate_bytes_sec(self) -> float:
        """Get global hash rate across all operations."""
        with self.lock:
            if self.total_duration_seconds <= 0:
                return 0.0
            return self.total_data_bytes / self.total_duration_seconds
    
    @property
    def average_duration_seconds(self) -> float:
        """Get average operation duration."""
        with self.lock:
            if not self.operations:
                return 0.0
            return self.total_duration_seconds / len(self.operations)
    
    @property
    def average_data_size_bytes(self) -> float:
        """Get average data size per operation."""
        with self.lock:
            if not self.operations:
                return 0.0
            return self.total_data_bytes / len(self.operations)
    
    def get_summary(self) -> str:
        """Get formatted summary of all metrics.
        
        Returns:
            Multi-line summary string with operation count, totals, and rates
        """
        with self.lock:
            if not self.operations:
                return "No operations recorded"
            
            summary = (
                f"Operations: {len(self.operations)}\n"
                f"Total Data: {self.total_data_bytes} bytes\n"
                f"Total Time: {self.total_duration_seconds:.3f}s\n"
                f"Global Rate: {self.global_hash_rate_bytes_sec:.2f} B/s\n"
                f"Avg Data/Op: {self.average_data_size_bytes:.1f} bytes\n"
                f"Avg Time/Op: {self.average_duration_seconds:.3f}s"
            )
            return summary
    
    def get_last_operation_metrics(self) -> Optional[HashRateMetrics]:
        """Get metrics from the most recent operation.
        
        Returns:
            HashRateMetrics from last operation, or None if no operations
        """
        with self.lock:
            if not self.operations:
                return None
            return self.operations[-1]
    
    def reset(self) -> None:
        """Clear all recorded metrics."""
        with self.lock:
            self.operations.clear()
            self.total_data_bytes = 0
            self.total_duration_seconds = 0.0


class ProtocolHandler:
    """Common protocol handling for UART communication with SHA3 firmware."""
    
    def __init__(self, ser: serial.Serial, tx_lock: threading.Lock, 
                 log_callback: Optional[Callable[[str], None]] = None):
        """Initialize protocol handler.
        
        Args:
            ser: Serial port instance
            tx_lock: Thread lock for serial transmission
            log_callback: Optional callback for logging TX messages (called with formatted message)
        """
        self.ser = ser
        self.tx_lock = tx_lock
        self.log_callback = log_callback
        
        # Response tracking for synchronous operations
        self.response_event = threading.Event()
        self.last_response: Optional[dict[str, Any]] = None
        self.awaiting_response = False
        self.response_deadline = 0.0
        
        # UART burst throttling parameters
        self.uart_delay_threshold = 100  # Start throttling above this size
        self.uart_burst_size = 16        # Bytes per burst
        self.uart_burst_delay_ms = 2     # Delay between bursts
        
        # Hash rate metrics tracking
        self.metrics_accumulator = HashRateAccumulator()
        self.current_operation_start_time: Optional[float] = None
    
    def send_line(self, cmd: str) -> None:
        """Send a command line to the UART with burst throttling.
        
        Args:
            cmd: Command string (without newline)
        """
        with self.tx_lock:
            if len(cmd) > self.uart_delay_threshold:
                cmd_bytes = cmd.encode()
                for i in range(0, len(cmd_bytes), self.uart_burst_size):
                    burst = cmd_bytes[i:i + self.uart_burst_size]
                    self.ser.write(burst)
                    if i + self.uart_burst_size < len(cmd_bytes):
                        time.sleep(self.uart_burst_delay_ms / 1000.0)
                self.ser.write(b"\n")
            else:
                self.ser.write((cmd + "\n").encode())
        
        # Log transmitted command
        if self.log_callback:
            self.log_callback(f"-> {cmd[:80]}{'...' if len(cmd) > 80 else ''}")
    
    def wait_for_response(self, send_func: Callable[[], None], timeout: float) -> bool:
        """Send a command and wait for firmware response.
        
        Args:
            send_func: Function to call to send the command
            timeout: Maximum wait time in seconds
        
        Returns:
            True if response received within timeout, False otherwise
        """
        self.response_event.clear()
        self.awaiting_response = True
        self.response_deadline = time.time() + timeout
        
        send_func()
        
        received = self.response_event.wait(timeout=timeout)
        self.awaiting_response = False
        return received
    
    def handle_response_line(self, line: str) -> bool:
        """Process a received line and update response state.
        
        Args:
            line: Received line from firmware
        
        Returns:
            True if this line was a response (sets response_event), False otherwise
        """
        if not self.awaiting_response:
            return False
        
        # Check for various response types
        if "OK HASH" in line.upper():
            # Extract digest if present
            digest = self._extract_digest_from_line(line)
            self.last_response = {"type": "hash", "data": digest if digest else line}
            self.response_event.set()
            return True
        elif line.startswith("OK MODE "):
            self.last_response = {"type": "mode", "data": line[len("OK MODE "):].strip()}
            self.response_event.set()
            return True
        elif line.startswith("OK STATUS "):
            self.last_response = {"type": "status", "data": line[len("OK STATUS "):].strip()}
            self.response_event.set()
            return True
        elif line.startswith("OK PONG") or line.startswith("PONG"):
            self.last_response = {"type": "pong", "data": True}
            self.response_event.set()
            return True
        elif line.startswith("OK ABORT"):
            self.last_response = {"type": "abort", "data": line}
            self.response_event.set()
            return True
        elif line.startswith(RESP_STREAM_START):
            self.last_response = {"type": "stream_start", "data": line}
            self.response_event.set()
            return True
        elif line.startswith(RESP_DATASTR_ACK):
            self.last_response = {"type": "datastr_ack", "data": line}
            self.response_event.set()
            return True
        elif line.startswith("ERR"):
            self.last_response = {"type": "error", "data": line}
            self.response_event.set()
            return True
        
        return False
    
    def _extract_digest_from_line(self, line: str) -> Optional[str]:
        """Extract hex digest from a hash response line."""
        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            tail = line[idx + len("OK HASH"):].strip()
        else:
            tail = line.strip()
        
        # Extract hex characters
        hex_chars = ''.join(c for c in tail if c in '0123456789abcdefABCDEF')
        if len(hex_chars) >= 56:  # Minimum for SHA3-224
            return hex_chars
        return None
    
    def send_stream_data(self, payload: str, chunk_size: int, timeout: float,
                         abort_check: Optional[Callable[[], bool]] = None) -> tuple[bool, str]:
        """Send data using STREAM/DATASTR/END protocol with ACK flow control.
        
        Automatically collects hash rate metrics for the operation.
        
        Args:
            payload: Message payload to send
            chunk_size: Maximum chunk size in bytes
            timeout: Timeout for each command response
            abort_check: Optional function that returns True if operation should abort
        
        Returns:
            Tuple of (success: bool, error_message: str)
        """
        # Start timing the operation (from STREAM command)
        operation_start_time = time.time()
        self.current_operation_start_time = operation_start_time
        
        total_len = len(payload.encode("utf-8"))
        
        # Send STREAM command
        if not self.wait_for_response(lambda: self.send_line(f"{CMD_STREAM} {total_len}"), timeout):
            if abort_check and abort_check():
                return False, "ABORTED"
            return False, "Timeout starting stream"
        
        if self.last_response and self.last_response.get("type") == "abort":
            return False, "ABORTED"
        
        if self.last_response and self.last_response.get("type") == "error":
            return False, f"STREAM failed: {self.last_response.get('data')}"
        
        if self.last_response and self.last_response.get("type") != "stream_start":
            return False, f"Unexpected STREAM response: {self.last_response.get('type')}"
        
        # Send DATASTR chunks with per-chunk ACK
        idx = 0
        while idx < len(payload):
            if abort_check and abort_check():
                return False, "ABORTED"
            
            remaining = len(payload) - idx
            take = min(chunk_size, remaining)
            chunk_text = payload[idx:idx + take]
            chunk_len = len(chunk_text.encode("utf-8"))
            
            # Send chunk and wait for ACK
            if not self.wait_for_response(
                lambda s=f"{CMD_DATASTR} {chunk_len}:{chunk_text}": self.send_line(s),
                timeout
            ):
                if abort_check and abort_check():
                    return False, "ABORTED"
                return False, f"Timeout waiting for DATASTR ACK at offset {idx}"
            
            if self.last_response and self.last_response.get("type") == "abort":
                return False, "ABORTED"
            
            if self.last_response and self.last_response.get("type") == "error":
                return False, self.last_response.get("data", "DATASTR error")
            
            idx += take
        
        # Send END command
        if not self.wait_for_response(lambda: self.send_line(CMD_END), timeout):
            if abort_check and abort_check():
                return False, "ABORTED"
            return False, "Timeout waiting for END/hash"
        
        if self.last_response is None:
            return False, "No response after END"
        
        if self.last_response.get("type") == "abort":
            return False, "ABORTED"
        
        if self.last_response.get("type") == "error":
            return False, self.last_response.get("data", "END error")
        
        if self.last_response.get("type") != "hash":
            return False, f"Expected hash, got: {self.last_response.get('type')}"
        
        # Record operation metrics (from STREAM to hash response)
        operation_end_time = time.time()
        duration = operation_end_time - operation_start_time
        metrics = HashRateMetrics(data_size_bytes=total_len, duration_seconds=duration)
        self.metrics_accumulator.add_operation(metrics)
        
        return True, ""
    
    def query_limits(self, timeout: float = 2.0) -> Optional[int]:
        """Query firmware LIMITS and return negotiated max chunk size.
        
        Args:
            timeout: Timeout for LIMITS query
        
        Returns:
            Negotiated max chunk size in bytes, or None if negotiation failed
        """
        if not self.wait_for_response(lambda: self.send_line("LIMITS"), timeout):
            return None
        
        if not self.last_response or self.last_response.get("type") != "limits":
            return None
        
        # Parse uart_cmd_max from response data
        line = self.last_response.get("data", "")
        match = re.search(r'uart_cmd_max=(\d+)', line)
        if not match:
            return None
        
        uart_cmd_max = int(match.group(1))
        return compute_max_chunk_size(uart_cmd_max)
    
    def handle_limits_response(self, line: str) -> bool:
        """Handle LIMITS response line.
        
        Args:
            line: Response line starting with "OK LIMITS"
        
        Returns:
            True if handled as LIMITS response
        """
        if not line.startswith("OK LIMITS "):
            return False
        
        if self.awaiting_response:
            self.last_response = {"type": "limits", "data": line}
            self.response_event.set()
        
        return True
