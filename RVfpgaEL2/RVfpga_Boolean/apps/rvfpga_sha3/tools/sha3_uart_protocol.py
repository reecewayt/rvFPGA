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
    RESP_DATASTR_ACK,
    STREAM_MODE_LINE_BASED,
    STREAM_MODE_BINARY,
    DEFAULT_STREAM_MODE,
    compute_max_chunk_size,
)


@dataclass
class HashRateMetrics:
    """Communication metrics for a single stream transfer."""
    data_size_bytes: int = 0
    duration_seconds: float = 0.0
    
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
    
    Thread-safe for concurrent access.
    """
    
    def __init__(self):
        self.lock = threading.Lock()
        self.operations: list[HashRateMetrics] = []
        self.total_data_bytes = 0
        self.total_duration_seconds = 0.0
    
    def add_operation(self, metrics: HashRateMetrics) -> None:
        """Record a completed operation."""
        with self.lock:
            self.operations.append(metrics)
            self.total_data_bytes += metrics.data_size_bytes
            self.total_duration_seconds += metrics.duration_seconds
    
    @property
    def operation_count(self) -> int:
        """Number of recorded operations."""
        with self.lock:
            return len(self.operations)
    
    @property
    def global_hash_rate_bytes_sec(self) -> float:
        """Global hash rate across all operations (bytes/sec)."""
        with self.lock:
            if self.total_duration_seconds <= 0:
                return 0.0
            return self.total_data_bytes / self.total_duration_seconds
    
    @property
    def average_duration_seconds(self) -> float:
        """Average operation duration (seconds)."""
        with self.lock:
            if not self.operations:
                return 0.0
            return self.total_duration_seconds / len(self.operations)
    
    @property
    def average_data_size_bytes(self) -> float:
        """Average data size per operation (bytes)."""
        with self.lock:
            if not self.operations:
                return 0.0
            return self.total_data_bytes / len(self.operations)
    
    def get_summary(self) -> str:
        """Get formatted summary of all metrics."""
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
        """Get metrics from the most recent operation."""
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
                 log_callback: Optional[Callable[[str], None]] = None,
                 stream_mode: str = DEFAULT_STREAM_MODE):
        """Initialize protocol handler.
        
        Args:
            ser: Serial port instance
            tx_lock: Thread lock for transmissions
            log_callback: Optional callback for logging (receives formatted message)
            stream_mode: "line" (DATASTR chunks) or "binary" (raw bytes)
        """
        self.ser = ser
        self.tx_lock = tx_lock
        self.log_callback = log_callback
        self.stream_mode = stream_mode
        
        self.response_event = threading.Event()
        self.last_response: Optional[dict[str, Any]] = None
        self.awaiting_response = False
        
        self.metrics_accumulator = HashRateAccumulator()
    
    def set_stream_mode(self, mode: str) -> None:
        """Update streaming mode without reconnecting.
        
        Args:
            mode: "line" or "binary"
        """
        self.stream_mode = mode
    
    def send_line(self, cmd: str) -> None:
        """Send a command line (adds newline and flushes)."""
        with self.tx_lock:
            self.ser.write((cmd + "\n").encode())
            self.ser.flush()
        
        if self.log_callback:
            self.log_callback(f"-> {cmd[:80]}{'...' if len(cmd) > 80 else ''}")
    
    def wait_for_response(self, send_func: Callable[[], None], timeout: float) -> bool:
        """Send command and wait for firmware response.
        
        Returns True if response received within timeout.
        """
        self.response_event.clear()
        self.awaiting_response = True
        
        send_func()
        
        received = self.response_event.wait(timeout=timeout)
        self.awaiting_response = False
        return received
    
    def handle_response_line(self, line: str) -> bool:
        """Process received line and update response state.
        
        Returns True if line was recognized as a response.
        """
        if not self.awaiting_response:
            return False
        
        # Check for response types and set event
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
        elif line.startswith("OK STREAM"):
            # Handles "OK STREAM START" and "OK STREAM BINARY_DATA_RECEIVED"
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
        
        # Extract consecutive hex characters
        hex_chars = ''.join(c for c in tail if c in '0123456789abcdefABCDEF')
        if len(hex_chars) >= 56:  # Minimum for SHA3-224
            return hex_chars
        return None
    
    def send_stream_data(self, payload: str, chunk_size: int, timeout: float,
                         abort_check: Optional[Callable[[], bool]] = None,
                         progress_callback: Optional[Callable[[int], None]] = None) -> tuple[bool, str]:
        """Send data using configured streaming mode.
        
        Dispatches to line-based or binary implementation based on stream_mode.
        Returns (success: bool, error_message: str).
        """
        if self.stream_mode == STREAM_MODE_BINARY:
            return self.send_stream_data_binary(payload, timeout, abort_check, progress_callback)
        else:
            return self.send_stream_data_line(payload, chunk_size, timeout, abort_check, progress_callback)
    
    def send_stream_data_line(self, payload: str, chunk_size: int, timeout: float,
                              abort_check: Optional[Callable[[], bool]] = None,
                              progress_callback: Optional[Callable[[int], None]] = None) -> tuple[bool, str]:
        """Send data using STREAM/DATASTR/END protocol with per-chunk ACK.
        
        Returns (success: bool, error_message: str).
        """
        total_len = len(payload.encode("utf-8"))
        comm_start_time = time.time()
        
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
        
        # Progress tracking for throttled updates
        bytes_sent = 0
        last_progress_time = time.time()
        progress_update_interval = 0.1  # 100ms
        progress_byte_threshold = 10240  # 10KB

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
            
            bytes_sent += chunk_len
            
            # Update progress (throttled to 100ms or 10KB intervals)
            current_time = time.time()
            if progress_callback and (
                (current_time - last_progress_time >= progress_update_interval) or
                (bytes_sent >= progress_byte_threshold)
            ):
                progress_callback(bytes_sent)
                last_progress_time = current_time
            
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
        
        # Send final progress update
        if progress_callback:
            progress_callback(total_len)

        # Record full communication round-trip metrics (send + receive hash).
        comm_duration = max(0.0, time.time() - comm_start_time)
        metrics = HashRateMetrics(data_size_bytes=total_len, duration_seconds=comm_duration)
        self.metrics_accumulator.add_operation(metrics)
        
        return True, ""
    
    def send_stream_data_binary(self, payload: str, timeout: float,
                                abort_check: Optional[Callable[[], bool]] = None,
                                progress_callback: Optional[Callable[[int], None]] = None) -> tuple[bool, str]:
        """Send data using binary streaming (raw bytes after STREAM BINARY).
        
        Protocol: STREAM <len> BINARY → raw bytes → END → hash response
        Returns (success: bool, error_message: str).
        """
        payload_bytes = payload.encode("utf-8")
        total_len = len(payload_bytes)
        comm_start_time = time.time()

        # Send STREAM BINARY command
        if not self.wait_for_response(lambda: self.send_line(f"{CMD_STREAM} {total_len} BINARY"), timeout):
            if abort_check and abort_check():
                return False, "ABORTED"
            return False, "Timeout in STREAM BINARY command"
        
        if self.last_response and self.last_response.get("type") == "abort":
            return False, "ABORTED"
        
        if self.last_response and self.last_response.get("type") == "error":
            return False, f"STREAM BINARY failed: {self.last_response.get('data')}"
        
        # Send raw binary data with progress updates
        with self.tx_lock:
            try:
                if abort_check and abort_check():
                    return False, "ABORTED"
                
                # Small payloads: send directly
                if total_len <= 10240:
                    self.ser.write(payload_bytes)
                    self.ser.flush()
                    if progress_callback:
                        progress_callback(total_len)
                else:
                    # Large payloads: send in chunks with throttled progress updates
                    chunk_size = 10240
                    bytes_sent = 0
                    last_progress_time = time.time()
                    progress_update_interval = 0.1
                    
                    for i in range(0, total_len, chunk_size):
                        if abort_check and abort_check():
                            return False, "ABORTED"
                        
                        chunk = payload_bytes[i:i + chunk_size]
                        self.ser.write(chunk)
                        bytes_sent += len(chunk)

                        # Update progress (throttled to 100ms intervals)
                        current_time = time.time()
                        if progress_callback and (current_time - last_progress_time >= progress_update_interval):
                            progress_callback(bytes_sent)
                            last_progress_time = current_time
                    
                    self.ser.flush()
                    if progress_callback:
                        progress_callback(total_len)
            except Exception as e:
                return False, f"Error sending binary data: {str(e)}"
        
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

        # Record full communication round-trip metrics (send + receive hash).
        comm_duration = max(0.0, time.time() - comm_start_time)
        metrics = HashRateMetrics(data_size_bytes=total_len, duration_seconds=comm_duration)
        self.metrics_accumulator.add_operation(metrics)
        
        return True, ""
    
    def query_limits(self, timeout: float = 2.0) -> Optional[int]:
        """Query firmware LIMITS and return negotiated max chunk size.
        
        Returns max chunk size in bytes, or None if negotiation failed.
        """
        if not self.wait_for_response(lambda: self.send_line("LIMITS"), timeout):
            return None
        
        if not self.last_response or self.last_response.get("type") != "limits":
            return None

        # Prefer exact datastr_payload_max reported by firmware
        line = self.last_response.get("data", "")
        datastr_match = re.search(r'datastr_payload_max=(\d+)', line)
        if datastr_match:
            return int(datastr_match.group(1))

        # Fallback: derive from uart_cmd_max using host-side calculation
        match = re.search(r'uart_cmd_max=(\d+)', line)
        if not match:
            return None
        
        uart_cmd_max = int(match.group(1))
        return compute_max_chunk_size(uart_cmd_max)
    
    def handle_limits_response(self, line: str) -> bool:
        """Handle LIMITS response line. Returns True if handled."""
        if not line.startswith("OK LIMITS "):
            return False
        
        if self.awaiting_response:
            self.last_response = {"type": "limits", "data": line}
            self.response_event.set()
        
        return True
