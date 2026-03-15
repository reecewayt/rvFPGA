#!/usr/bin/env python3
"""
sha3_uart_protocol.py - Shared UART protocol and GUI-base primitives for SHA3 host tools

    Authors: Copilot and Truong Le (tnl3@pdx.edu)

How this module works:
- ProtocolHandler provides thread-safe UART command/response primitives for
    MODE/STATUS/PING/ABORT and STREAM transfers.
- STREAM transfers support two modes:
    - line mode: STREAM + DATASTR chunks + END.
    - binary mode: STREAM ... BINARY + raw bytes + END.
- HashRateMetrics and HashRateAccumulator track transfer-level and aggregate
    throughput statistics.
- Sha3GUIBase centralizes common GUI behavior shared by both GUI applications
    (reader loop, digest extraction, chunk controls, status parsing, connect/
    disconnect lifecycle helpers, LIMITS negotiation, and close handling).

Config knobs consumed from sha3_uart_config:
- Protocol tokens: CMD_STREAM/CMD_DATASTR/CMD_END and response prefixes.
- Stream mode defaults and chunk-size constraints.
- Host-side fallback logic via compute_max_chunk_size().

Class overview:
- HashRateMetrics: per-transfer byte/time rate object.
- HashRateAccumulator: thread-safe aggregate metrics store.
- ProtocolHandler: UART protocol engine used by GUI and stress tool.
- Sha3GUIBase: reusable mixin-style base for GUI transport/status behaviors.

Note: This code was generated using Copilot using prompting.

"""

import hashlib
import threading
import time
import re
from typing import Optional, Callable, Any
from dataclasses import dataclass
import serial
import serial.tools.list_ports

from sha3_uart_config import (
    CMD_STREAM,
    CMD_DATASTR,
    CMD_END,
    DEFAULT_CHUNK_SIZE,
    MIN_CHUNK_SIZE,
    RESP_DATASTR_ACK,
    STREAM_MODE_BINARY,
    DEFAULT_STREAM_MODE,
    compute_max_chunk_size,
)


@dataclass
class HashRateMetrics:
    """Per-transfer communication metrics with computed bytes/sec helper."""
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
    """
    Thread-safe collector for HashRateMetrics across many transfers.

    Supports operation counting, global/average throughput summaries, retrieval
    of latest metrics, and reset for a fresh measurement window.
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
    """UART protocol engine used by both GUI applications.

    Supported function groups:
    - Command TX/RX synchronization: send_line, wait_for_response,
      handle_response_line.
    - Streaming: send_stream_data (dispatch), send_stream_data_line,
      send_stream_data_binary.
    - Capability negotiation: query_limits, handle_limits_response.
    - Runtime mode control: set_stream_mode.
    """

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
        """
        Updates streaming mode for transaction
        
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
        """
        Send command and wait for firmware response.
        
        Returns True if response received within timeout.
        """
        self.response_event.clear()
        self.awaiting_response = True
        
        send_func()
        
        received = self.response_event.wait(timeout=timeout)
        self.awaiting_response = False
        return received
    
    def handle_response_line(self, line: str) -> bool:
        """
        Process received line and update response state.
        
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
        """
        Send data using configured streaming mode
        
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
        """
        Send data using STREAM/DATASTR/END protocol with per-chunk ACK
        
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
        """
        Send data using binary streaming (raw bytes after STREAM BINARY)
        
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
        """
        Query firmware LIMITS and return negotiated max chunk size
        
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
        """
        Handle LIMITS response line from FPGA
        
        Returns True if handled.
        """
        if not line.startswith("OK LIMITS "):
            return False
        
        if self.awaiting_response:
            self.last_response = {"type": "limits", "data": line}
            self.response_event.set()
        
        return True


class Sha3GUIBase:
    """
    Shared GUI behavior for SHA3 UART application classes.

    Both Sha3UartGui and Sha3StressTest inherit from this class.
    Subclasses must provide these instance attributes:
      - ser, stop_event, rx_queue, rx_partial  (serial reader loop)
      - pending_digest_chars  (str, digest accumulation buffer)
      - negotiated_max_chunk, max_datastr_payload_chars  (chunk size limits)
      - chunk_size_var  (tk.StringVar for chunk size entry)
      - Status display widgets: status_idle, status_busy, status_done,
        status_in_empty, status_in_full, status_out_empty, status_out_full,
        status_err_ill, status_err_uf, status_err_of
      - status_raw_var  (tk.StringVar for raw status text)

        Subclasses must implement/define:
            - _expected_digest_len(self) -> int (mode-specific digest width)
            - GUI-specific attributes/widgets consumed by helper methods

        Common functions provided:
            - Reader/poll loop helpers (_reader_loop, _poll_rx_queue hooks)
            - Digest handling helpers (_extract_digest, _accumulate_digest_chars)
            - Chunk sizing helpers (_chunk_size_step_up/down, _effective_chunk_size)
            - Connection lifecycle helpers (_connect_with_protocol,
                _post_connect_setup, _post_disconnect_cleanup)
            - LIMITS negotiation and status parse/display helpers
    """

    def _expected_digest_len(self) -> int:
        """Return expected digest length in hex chars. Override in subclass."""
        return 64

    def _log_sys(self, msg: str) -> None:
        """Log a system-level message via available GUI logger."""
        if hasattr(self, "_log"):
            self._log(msg, "sys")
            return
        if hasattr(self, "_log_uart"):
            self._log_uart(msg, "sys")

    def _connect_with_protocol(self, protocol_log_callback: Callable[[str], None]) -> Optional[tuple[str, int]]:
        """Open serial + ProtocolHandler and run shared post-connect setup."""
        from tkinter import messagebox

        port = self.port_var.get().strip()
        if not port:
            messagebox.showerror("Connect", "Select a serial port first")
            return None

        try:
            baud = int(self.baud_var.get().strip())
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.1)
            self.protocol = ProtocolHandler(
                self.ser,
                self.tx_lock,
                log_callback=protocol_log_callback,
                stream_mode=self.stream_mode_var.get(),
            )
        except Exception as exc:
            messagebox.showerror("Connect", f"Failed to open serial port:\n{exc}")
            return None

        self._post_connect_setup()
        return port, baud

    def _refresh_ports(self) -> None:
        """Refresh serial port combo choices."""
        ports = [p.device for p in serial.tools.list_ports.comports()]
        self.port_combo["values"] = ports
        if ports and not self.port_var.get():
            self.port_var.set(ports[0])

    def _apply_default_fonts(self) -> None:
        """Apply shared default Tk font sizing for stable UI layout."""
        try:
            import tkinter as tk
            import tkinter.font as tkfont
        except Exception:
            return

        for name in ("TkDefaultFont", "TkTextFont", "TkMenuFont", "TkHeadingFont"):
            try:
                tkfont.nametofont(name).configure(size=self.default_font_size)
            except tk.TclError:
                pass

    def _set_connection_controls(self, connected: bool) -> None:
        """Set common connect/disconnect button states."""
        self.connect_btn.configure(state="disabled" if connected else "normal")
        self.disconnect_btn.configure(state="normal" if connected else "disabled")
        if hasattr(self, "abort_btn"):
            self.abort_btn.configure(state="normal" if connected else "disabled")

    def _post_connect_setup(self) -> None:
        """Start reader loop, toggle UI state, and negotiate LIMITS."""
        self.stop_event.clear()
        self.reader_thread = threading.Thread(target=self._reader_loop, daemon=True)
        self.reader_thread.start()
        self._set_connection_controls(True)
        self._start_limits_negotiation()

    def _post_disconnect_cleanup(self) -> None:
        """Stop reader, close serial, and reset shared connection state."""
        self.stop_event.set()

        if self.reader_thread and self.reader_thread.is_alive():
            self.reader_thread.join(timeout=0.5)

        if self.ser:
            try:
                self.ser.close()
            except Exception:
                pass
            self.ser = None

        self._set_connection_controls(False)
        self.negotiated_max_chunk = None
        self.protocol = None
        self.rx_partial.clear()

    def _start_limits_negotiation(self) -> None:
        """Query LIMITS asynchronously and update negotiated chunk size."""
        def limits_worker() -> None:
            negotiated = None
            try:
                if self.protocol:
                    negotiated = self.protocol.query_limits(timeout=2.0)
            except Exception as exc:
                self.root.after(0, lambda e=exc: self._log_sys(f"LIMITS query failed: {e}; using default"))

            if negotiated is not None:
                self.negotiated_max_chunk = negotiated
                self.root.after(0, lambda n=negotiated: self.max_chunk_label.config(text=f"(max: {n})"))
                self.root.after(0, lambda n=negotiated: self._log_sys(f"LIMITS negotiated: chunk_max={n}"))
            else:
                self.negotiated_max_chunk = self.max_datastr_payload_chars
                self.root.after(
                    0,
                    lambda m=self.max_datastr_payload_chars: self.max_chunk_label.config(text=f"(max: {m})")
                )
                self.root.after(0, lambda: self._log_sys("LIMITS unavailable; using default max"))

        threading.Thread(target=limits_worker, daemon=True).start()

    def _drain_rx_queue(self) -> None:
        """Drain queued RX lines and dispatch to handler."""
        while True:
            try:
                line = self.rx_queue.get_nowait()
            except Exception:
                break
            self._handle_rx_line(line)

    def _poll_interval_ms(self) -> int:
        """Polling interval in ms. Override as needed."""
        return 100

    def _handle_poll_timeout(self) -> None:
        """Subclass-specific poll-timeout logic."""

    def _poll_rx_queue(self) -> None:
        """Common RX polling loop with subclass timeout hook."""
        self._drain_rx_queue()
        self._handle_poll_timeout()
        self.poll_after_id = self.root.after(max(1, self._poll_interval_ms()), self._poll_rx_queue)

    def _before_close(self) -> bool:
        """Hook to veto/prepare close. Return False to cancel close."""
        return True

    def _on_close(self) -> None:
        """Common close handler for GUI apps."""
        if not self._before_close():
            return

        if self.poll_after_id is not None:
            try:
                self.root.after_cancel(self.poll_after_id)
            except Exception:
                pass
            self.poll_after_id = None

        self._disconnect()
        self.root.quit()
        self.root.destroy()

    def _reader_loop(self) -> None:
        """Background thread for reading serial data."""
        while not self.stop_event.is_set():
            if not self.ser:
                time.sleep(0.05)
                continue
            try:
                n = self.ser.in_waiting or 1
                data = self.ser.read(n)
                if data:
                    self.rx_partial.extend(data)
                    while b"\n" in self.rx_partial:
                        raw, _, rest = self.rx_partial.partition(b"\n")
                        self.rx_partial = bytearray(rest)
                        line = raw.decode(errors="replace").rstrip("\r")
                        self.rx_queue.put(line)
            except Exception as exc:
                self.rx_queue.put(f"[error] Serial read error: {exc}")
                break

    def _extract_digest(self, line: str) -> Optional[str]:
        """Extract hex digest from a response line."""
        expected_len = self._expected_digest_len()

        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            tail = line[idx + len("OK HASH"):]
        else:
            tail = line

        # First try: extract consecutive hex chars from tail
        hex_only = "".join(ch for ch in tail.lower() if ch in "0123456789abcdef")
        if len(hex_only) >= expected_len:
            return hex_only[:expected_len]

        # Second try: regex search for hex substring of expected length
        m = re.search(rf"([0-9a-fA-F]{{{expected_len}}})", line)
        if m:
            return m.group(1).lower()

        return None

    def _accumulate_digest_chars(self, line: str) -> None:
        """Accumulate digest characters from fragmented responses."""
        expected_len = self._expected_digest_len()

        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            line = line[idx + len("OK HASH"):]

        token_matches = re.findall(r"[0-9a-fA-F]+", line)
        if not token_matches:
            return

        token = max(token_matches, key=len).lower()
        if len(token) < 8:
            return

        self.pending_digest_chars += token
        if len(self.pending_digest_chars) > expected_len * 2:
            self.pending_digest_chars = self.pending_digest_chars[-expected_len * 2:]

    @staticmethod
    def _compute_expected_digest(mode: str, msg: str) -> str:
        """Compute expected SHA3 digest for a message."""
        payload = msg.encode("utf-8")
        if mode == "224":
            return hashlib.sha3_224(payload).hexdigest()
        if mode == "256":
            return hashlib.sha3_256(payload).hexdigest()
        if mode == "384":
            return hashlib.sha3_384(payload).hexdigest()
        if mode == "512":
            return hashlib.sha3_512(payload).hexdigest()
        raise ValueError(f"Unsupported mode: {mode}")

    def _chunk_step_max(self) -> int:
        """Return highest power-of-two selectable size (one step above clamp limit)."""
        max_limit = self.negotiated_max_chunk
        if max_limit is None:
            max_limit = self.max_datastr_payload_chars
        max_limit = max(max_limit, MIN_CHUNK_SIZE)
        return 1 << max_limit.bit_length()

    def _chunk_size_step_up(self) -> None:
        """Increase chunk size to next power of two within negotiated limits."""
        try:
            value = int(self.chunk_size_var.get())
        except Exception:
            value = DEFAULT_CHUNK_SIZE

        value = max(value, MIN_CHUNK_SIZE)
        is_power_of_two = value > 0 and (value & (value - 1) == 0)
        next_value = value * 2 if is_power_of_two else (1 << value.bit_length())
        next_value = min(next_value, self._chunk_step_max())
        self.chunk_size_var.set(str(max(next_value, MIN_CHUNK_SIZE)))

    def _chunk_size_step_down(self) -> None:
        """Decrease chunk size to previous power of two within negotiated limits."""
        try:
            value = int(self.chunk_size_var.get())
        except Exception:
            value = DEFAULT_CHUNK_SIZE

        value = max(value, MIN_CHUNK_SIZE)
        if value <= MIN_CHUNK_SIZE:
            self.chunk_size_var.set(str(MIN_CHUNK_SIZE))
            return

        is_power_of_two = value > 0 and (value & (value - 1) == 0)
        next_value = value // 2 if is_power_of_two else (1 << (value.bit_length() - 1))
        self.chunk_size_var.set(str(max(next_value, MIN_CHUNK_SIZE)))

    def _effective_chunk_size(self) -> int:
        """Return the clamped chunk size for streaming operations."""
        try:
            chunk_size = int(self.chunk_size_var.get())
        except Exception:
            chunk_size = DEFAULT_CHUNK_SIZE

        if chunk_size < MIN_CHUNK_SIZE:
            chunk_size = DEFAULT_CHUNK_SIZE

        if self.negotiated_max_chunk is not None:
            if chunk_size > self.negotiated_max_chunk:
                self._log_sys(
                    f"chunk_size={chunk_size} exceeds negotiated max={self.negotiated_max_chunk}; clamping"
                )
                chunk_size = self.negotiated_max_chunk
        else:
            if chunk_size > self.max_datastr_payload_chars:
                self._log_sys(
                    f"chunk_size={chunk_size} exceeds datastr_max={self.max_datastr_payload_chars}; clamping"
                )
                chunk_size = self.max_datastr_payload_chars

        if chunk_size < MIN_CHUNK_SIZE:
            chunk_size = MIN_CHUNK_SIZE
        return chunk_size

    def _parse_and_display_status(self, status_line: str) -> None:
        """Parse STATUS register hex value and update individual flag indicators."""
        try:
            match = re.search(r'status=(0x[0-9a-fA-F]+)', status_line)
            if not match:
                status_hex = status_line.strip().lower()
                if status_hex.startswith("0x"):
                    status_hex = status_hex[2:]
                status_val = int(status_hex, 16)
            else:
                status_hex = match.group(1)
                status_val = int(status_hex, 16)

            self.status_raw_var.set(status_line.strip())

            idle = bool(status_val & (1 << 0))
            self.status_idle.config(fg="green" if idle else "gray")

            busy = bool(status_val & (1 << 1))
            self.status_busy.config(fg="orange" if busy else "gray")

            done = bool(status_val & (1 << 2))
            self.status_done.config(fg="blue" if done else "gray")

            in_empty = bool(status_val & (1 << 4))
            self.status_in_empty.config(fg="cyan" if in_empty else "gray")

            in_full = bool(status_val & (1 << 5))
            self.status_in_full.config(fg="red" if in_full else "gray")

            out_empty = bool(status_val & (1 << 6))
            self.status_out_empty.config(fg="cyan" if out_empty else "gray")

            out_full = bool(status_val & (1 << 7))
            self.status_out_full.config(fg="red" if out_full else "gray")

            err_ill = bool(status_val & (1 << 8))
            self.status_err_ill.config(fg="red" if err_ill else "gray")

            err_uf = bool(status_val & (1 << 9))
            self.status_err_uf.config(fg="red" if err_uf else "gray")

            err_of = bool(status_val & (1 << 10))
            self.status_err_of.config(fg="red" if err_of else "gray")

        except (ValueError, IndexError) as exc:
            self.status_raw_var.set(f"Parse error: {exc}")
