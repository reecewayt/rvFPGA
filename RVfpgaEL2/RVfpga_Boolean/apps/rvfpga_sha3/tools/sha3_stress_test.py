#!/usr/bin/env python3
"""Stress testing tool for SHA3 UART interface with incremental message sizes."""

import queue
import random
import string
import threading
import time
import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext
from dataclasses import dataclass
from typing import Optional
import hashlib
import re

import serial
import serial.tools.list_ports


@dataclass
class TestResult:
    """Single test result."""
    test_num: int
    mode: str
    msg_size: int
    success: bool
    error: Optional[str] = None
    duration_ms: float = 0.0
    expected_digest: str = ""
    actual_digest: str = ""


class Sha3StressTest:
    """Stress test GUI for SHA3 FPGA accelerator."""
    
    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("RVfpga SHA3 Stress Test")
        self.root.geometry("1000x750")
        
        self.ser = None
        self.reader_thread = None
        self.test_thread = None
        self.stop_event = threading.Event()
        self.test_stop_event = threading.Event()
        self.rx_queue: queue.Queue[str] = queue.Queue()
        self.rx_partial = bytearray()
        
        # Test state
        self.test_running = False
        self.current_mode = "256"
        self.awaiting_response = False
        self.response_deadline = 0.0
        self.pending_digest_chars = ""
        self.last_response = None
        self.response_event = threading.Event()
        
        # Test results
        self.results: list[TestResult] = []
        self.tests_passed = 0
        self.tests_failed = 0
        
        self._build_ui()
        self._refresh_ports()
        self.poll_after_id = self.root.after(50, self._poll_rx_queue)
        self.root.protocol("WM_DELETE_WINDOW", self._on_close)
    
    def _build_ui(self) -> None:
        """Build the GUI layout."""
        main_frame = ttk.Frame(self.root, padding=10)
        main_frame.pack(fill="both", expand=True)
        
        # Connection frame
        conn_frame = ttk.LabelFrame(main_frame, text="Connection", padding=8)
        conn_frame.pack(fill="x")
        
        ttk.Label(conn_frame, text="Port:").grid(row=0, column=0, sticky="w")
        self.port_var = tk.StringVar()
        self.port_combo = ttk.Combobox(conn_frame, textvariable=self.port_var, width=30, state="readonly")
        self.port_combo.grid(row=0, column=1, padx=6)
        
        ttk.Button(conn_frame, text="Refresh", command=self._refresh_ports).grid(row=0, column=2, padx=4)
        
        ttk.Label(conn_frame, text="Baud:").grid(row=0, column=3, sticky="w", padx=(16, 0))
        self.baud_var = tk.StringVar(value="115200")
        ttk.Entry(conn_frame, textvariable=self.baud_var, width=10).grid(row=0, column=4, padx=6)
        
        self.connect_btn = ttk.Button(conn_frame, text="Connect", command=self._connect)
        self.connect_btn.grid(row=0, column=5, padx=4)
        self.disconnect_btn = ttk.Button(conn_frame, text="Disconnect", command=self._disconnect, state="disabled")
        self.disconnect_btn.grid(row=0, column=6, padx=4)
        
        # Test configuration frame
        config_frame = ttk.LabelFrame(main_frame, text="Test Configuration", padding=8)
        config_frame.pack(fill="x", pady=(10, 0))
        
        ttk.Label(config_frame, text="Start Size:").grid(row=0, column=0, sticky="w")
        self.start_size_var = tk.StringVar(value="1")
        ttk.Entry(config_frame, textvariable=self.start_size_var, width=10).grid(row=0, column=1, padx=6)
        
        ttk.Label(config_frame, text="End Size:").grid(row=0, column=2, sticky="w", padx=(16, 0))
        self.end_size_var = tk.StringVar(value="1000")
        ttk.Entry(config_frame, textvariable=self.end_size_var, width=10).grid(row=0, column=3, padx=6)
        
        ttk.Label(config_frame, text="Step:").grid(row=0, column=4, sticky="w", padx=(16, 0))
        self.step_var = tk.StringVar(value="exponential")
        ttk.Combobox(
            config_frame,
            textvariable=self.step_var,
            values=["exponential", "50", "100", "200"],
            width=12,
            state="readonly"
        ).grid(row=0, column=5, padx=6)
        
        ttk.Label(config_frame, text="Iterations per size:").grid(row=1, column=0, sticky="w", pady=(8, 0))
        self.iterations_var = tk.StringVar(value="3")
        ttk.Entry(config_frame, textvariable=self.iterations_var, width=10).grid(row=1, column=1, padx=6, pady=(8, 0))
        
        ttk.Label(config_frame, text="SHA3 Modes:").grid(row=1, column=2, sticky="w", padx=(16, 0), pady=(8, 0))
        self.modes_var = tk.StringVar(value="256")
        ttk.Combobox(
            config_frame,
            textvariable=self.modes_var,
            values=["224", "256", "384", "512", "all"],
            width=12,
            state="readonly"
        ).grid(row=1, column=3, padx=6, pady=(8, 0))
        
        ttk.Label(config_frame, text="Timeout (s):").grid(row=1, column=4, sticky="w", padx=(16, 0), pady=(8, 0))
        self.timeout_var = tk.StringVar(value="15.0")
        ttk.Entry(config_frame, textvariable=self.timeout_var, width=10).grid(row=1, column=5, padx=6, pady=(8, 0))
        
        # Control buttons
        btn_frame = ttk.Frame(config_frame)
        btn_frame.grid(row=2, column=0, columnspan=6, pady=(10, 0))
        
        self.start_test_btn = ttk.Button(btn_frame, text="Start Test", command=self._start_test)
        self.start_test_btn.pack(side="left", padx=4)
        
        self.stop_test_btn = ttk.Button(btn_frame, text="Stop Test", command=self._stop_test, state="disabled")
        self.stop_test_btn.pack(side="left", padx=4)
        
        ttk.Button(btn_frame, text="Clear Results", command=self._clear_results).pack(side="left", padx=4)
        
        # Progress frame
        progress_frame = ttk.LabelFrame(main_frame, text="Test Progress", padding=8)
        progress_frame.pack(fill="x", pady=(10, 0))
        
        self.progress_bar = ttk.Progressbar(progress_frame, mode="determinate")
        self.progress_bar.pack(fill="x", pady=(0, 8))
        
        info_frame = ttk.Frame(progress_frame)
        info_frame.pack(fill="x")
        
        ttk.Label(info_frame, text="Current Test:").grid(row=0, column=0, sticky="w")
        self.current_test_var = tk.StringVar(value="Not started")
        ttk.Label(info_frame, textvariable=self.current_test_var, width=60).grid(row=0, column=1, sticky="w", padx=6)
        
        ttk.Label(info_frame, text="Status:").grid(row=1, column=0, sticky="w", pady=(4, 0))
        self.status_var = tk.StringVar(value="Idle")
        ttk.Label(info_frame, textvariable=self.status_var, width=60).grid(row=1, column=1, sticky="w", padx=6, pady=(4, 0))
        
        # Statistics frame
        stats_frame = ttk.LabelFrame(main_frame, text="Statistics", padding=8)
        stats_frame.pack(fill="x", pady=(10, 0))
        
        ttk.Label(stats_frame, text="Passed:").grid(row=0, column=0, sticky="w")
        self.passed_var = tk.StringVar(value="0")
        ttk.Label(stats_frame, textvariable=self.passed_var, foreground="green", font=("TkDefaultFont", 10, "bold")).grid(row=0, column=1, sticky="w", padx=6)
        
        ttk.Label(stats_frame, text="Failed:").grid(row=0, column=2, sticky="w", padx=(16, 0))
        self.failed_var = tk.StringVar(value="0")
        ttk.Label(stats_frame, textvariable=self.failed_var, foreground="red", font=("TkDefaultFont", 10, "bold")).grid(row=0, column=3, sticky="w", padx=6)
        
        ttk.Label(stats_frame, text="Success Rate:").grid(row=0, column=4, sticky="w", padx=(16, 0))
        self.success_rate_var = tk.StringVar(value="N/A")
        ttk.Label(stats_frame, textvariable=self.success_rate_var, font=("TkDefaultFont", 10, "bold")).grid(row=0, column=5, sticky="w", padx=6)
        
        ttk.Button(stats_frame, text="Ping", command=self._send_ping).grid(row=0, column=6, sticky="w", padx=(24, 0))
        ttk.Button(stats_frame, text="Query Status", command=self._query_status_manual).grid(row=0, column=7, sticky="w", padx=4)
        
        # Live controller status frame
        status = ttk.LabelFrame(main_frame, text="Live Controller Status", padding=8)
        status.pack(fill="x", pady=(10, 0))
        
        # FSM State row
        fsm_frame = ttk.Frame(status)
        fsm_frame.pack(fill="x", pady=2)
        ttk.Label(fsm_frame, text="FSM:", width=10, anchor="w").pack(side="left")
        self.status_idle = tk.Label(fsm_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_idle.pack(side="left")
        ttk.Label(fsm_frame, text="IDLE", width=7).pack(side="left")
        self.status_busy = tk.Label(fsm_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_busy.pack(side="left")
        ttk.Label(fsm_frame, text="BUSY", width=7).pack(side="left")
        self.status_done = tk.Label(fsm_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_done.pack(side="left")
        ttk.Label(fsm_frame, text="DONE", width=7).pack(side="left")
        
        # FIFO Status row
        fifo_frame = ttk.Frame(status)
        fifo_frame.pack(fill="x", pady=2)
        ttk.Label(fifo_frame, text="FIFO:", width=10, anchor="w").pack(side="left")
        self.status_in_empty = tk.Label(fifo_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_in_empty.pack(side="left")
        ttk.Label(fifo_frame, text="IN_EMPTY", width=10).pack(side="left")
        self.status_in_full = tk.Label(fifo_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_in_full.pack(side="left")
        ttk.Label(fifo_frame, text="IN_FULL", width=10).pack(side="left")
        self.status_out_empty = tk.Label(fifo_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_out_empty.pack(side="left")
        ttk.Label(fifo_frame, text="OUT_EMPTY", width=10).pack(side="left")
        self.status_out_full = tk.Label(fifo_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_out_full.pack(side="left")
        ttk.Label(fifo_frame, text="OUT_FULL", width=10).pack(side="left")
        
        # Error flags row
        err_frame = ttk.Frame(status)
        err_frame.pack(fill="x", pady=2)
        ttk.Label(err_frame, text="Errors:", width=10, anchor="w").pack(side="left")
        self.status_err_ill = tk.Label(err_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_err_ill.pack(side="left")
        ttk.Label(err_frame, text="ILL_WR", width=10).pack(side="left")
        self.status_err_uf = tk.Label(err_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_err_uf.pack(side="left")
        ttk.Label(err_frame, text="UNDERFLOW", width=10).pack(side="left")
        self.status_err_of = tk.Label(err_frame, text="●", font=("TkDefaultFont", 12), fg="gray")
        self.status_err_of.pack(side="left")
        ttk.Label(err_frame, text="OVERFLOW", width=10).pack(side="left")
        
        # Side-by-side log row for test results and UART trace.
        logs_row = ttk.Frame(main_frame)
        logs_row.pack(fill="both", expand=True, pady=(10, 0))
        logs_row.columnconfigure(0, weight=1)
        logs_row.columnconfigure(1, weight=1)
        logs_row.rowconfigure(0, weight=1)

        # Results frame with scrolled text
        results_frame = ttk.LabelFrame(logs_row, text="Test Results", padding=8)
        results_frame.grid(row=0, column=0, sticky="nsew", padx=(0, 5))

        self.results_text = scrolledtext.ScrolledText(results_frame, height=15, wrap="none", state="disabled")
        self.results_text.pack(fill="both", expand=True)

        # Configure text tags for colored output
        self.results_text.tag_config("pass", foreground="green")
        self.results_text.tag_config("fail", foreground="red")
        self.results_text.tag_config("header", font=("TkDefaultFont", 9, "bold"))

        # Raw UART frame with separate TX/RX/system trace.
        uart_frame = ttk.LabelFrame(logs_row, text="Raw UART Communication", padding=8)
        uart_frame.grid(row=0, column=1, sticky="nsew", padx=(5, 0))

        self.uart_text = scrolledtext.ScrolledText(uart_frame, height=15, wrap="none", state="disabled")
        self.uart_text.pack(fill="both", expand=True)
        self.uart_text.tag_config("tx", foreground="#1f6feb")
        self.uart_text.tag_config("rx", foreground="#0a7f2e")
        self.uart_text.tag_config("uart_error", foreground="#b00020")
        self.uart_text.tag_config("sys", foreground="#666666")

        # Digest comparison frame for detailed expected vs actual logging.
        digest_frame = ttk.LabelFrame(main_frame, text="Digest Comparison Log", padding=8)
        digest_frame.pack(fill="both", expand=True, pady=(10, 0))

        self.digest_text = scrolledtext.ScrolledText(digest_frame, height=10, wrap="none", state="disabled")
        self.digest_text.pack(fill="both", expand=True)
        self.digest_text.tag_config("match", foreground="green")
        self.digest_text.tag_config("mismatch", foreground="red")
        self.digest_text.tag_config("digest_info", foreground="#444444")
    
    def _refresh_ports(self) -> None:
        """Refresh list of serial ports."""
        ports = [p.device for p in serial.tools.list_ports.comports()]
        self.port_combo["values"] = ports
        if ports and not self.port_var.get():
            self.port_var.set(ports[0])
    
    def _connect(self) -> None:
        """Connect to serial port."""
        port = self.port_var.get().strip()
        if not port:
            messagebox.showerror("Connect", "Select a serial port first")
            return
        
        try:
            baud = int(self.baud_var.get().strip())
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.1)
        except Exception as exc:
            messagebox.showerror("Connect", f"Failed to open serial port:\n{exc}")
            return
        
        self.stop_event.clear()
        self.reader_thread = threading.Thread(target=self._reader_loop, daemon=True)
        self.reader_thread.start()
        
        self.connect_btn.configure(state="disabled")
        self.disconnect_btn.configure(state="normal")
        self._log_result("Connected to {} @ {}".format(port, baud), "header")
        self._log_uart(f"[sys] Connected to {port} @ {baud}", "sys")
    
    def _disconnect(self) -> None:
        """Disconnect from serial port."""
        self.stop_event.set()
        
        if self.reader_thread and self.reader_thread.is_alive():
            self.reader_thread.join(timeout=0.5)
        
        if self.ser:
            try:
                self.ser.close()
            except Exception:
                pass
            self.ser = None
        
        self.connect_btn.configure(state="normal")
        self.disconnect_btn.configure(state="disabled")
        self._log_result("Disconnected", "header")
        self._log_uart("[sys] Disconnected", "sys")
        self.rx_partial.clear()
    
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
    
    def _poll_rx_queue(self) -> None:
        """Poll receive queue and handle responses."""
        while True:
            try:
                line = self.rx_queue.get_nowait()
            except queue.Empty:
                break
            self._handle_rx_line(line)
        
        # Check for timeout
        if self.awaiting_response and time.time() > self.response_deadline:
            self.awaiting_response = False
            self.last_response = {"type": "timeout", "data": None}
            self.response_event.set()
        
        self.poll_after_id = self.root.after(50, self._poll_rx_queue)
    
    def _handle_rx_line(self, line: str) -> None:
        """Handle a received line from UART."""
        if not line:
            return

        self._log_uart(f"<- {line}", "rx")
        
        if line.startswith("[error]"):
            self.last_response = {"type": "error", "data": line}
            self.response_event.set()
            return
        
        if "OK HASH" in line.upper():
            digest = self._extract_digest(line)
            if digest:
                self.last_response = {"type": "hash", "data": digest}
                self.response_event.set()
                self.awaiting_response = False
                self.pending_digest_chars = ""
            else:
                self.awaiting_response = True
                self._accumulate_digest_chars(line)
        elif line.startswith("OK MODE "):
            self.last_response = {"type": "mode", "data": line[len("OK MODE "):].strip()}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("OK STATUS "):
            status_hex = line[len("OK STATUS "):].strip()
            self.last_response = {"type": "status", "data": status_hex}
            self.response_event.set()
            self.awaiting_response = False
            # Also update live status display
            self.root.after(0, lambda s=status_hex: self._parse_and_display_status(s))
        elif line.startswith("OK PONG") or line.startswith("PONG"):
            self.last_response = {"type": "pong", "data": True}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("ERR"):
            self.last_response = {"type": "error", "data": line}
            self.response_event.set()
            self.awaiting_response = False
        elif self.awaiting_response:
            self._accumulate_digest_chars(line)
            
            expected_len = self._expected_digest_len()
            if len(self.pending_digest_chars) >= expected_len:
                digest = self.pending_digest_chars[:expected_len]
                self.last_response = {"type": "hash", "data": digest}
                self.response_event.set()
                self.awaiting_response = False
                self.pending_digest_chars = ""
    
    def _expected_digest_len(self) -> int:
        """Get expected digest length based on current mode."""
        mode_lengths = {"224": 56, "256": 64, "384": 96, "512": 128}
        return mode_lengths.get(self.current_mode, 64)
    
    def _extract_digest(self, line: str) -> Optional[str]:
        """Extract digest from response line."""
        expected_len = self._expected_digest_len()
        
        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            tail = line[idx + len("OK HASH"):]
        else:
            tail = line
        
        hex_only = "".join(ch for ch in tail.lower() if ch in "0123456789abcdef")
        if len(hex_only) >= expected_len:
            return hex_only[:expected_len]
        
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
    
    def _send_line(self, cmd: str) -> None:
        """Send a command to the FPGA."""
        if not self.ser:
            raise RuntimeError("Not connected to serial port")
        self.ser.write((cmd + "\n").encode())
        self._log_uart(f"-> {cmd}", "tx")
    
    def _send_ping(self) -> None:
        """Send a PING command manually."""
        if not self.ser:
            messagebox.showerror("Ping", "Not connected to serial port")
            return
        if self.test_running:
            messagebox.showwarning("Ping", "Stop stress test before manual ping")
            return
        try:
            self._log_result("Sending PING...", "header")
            self.status_var.set("Waiting for PING ACK...")

            def ping_worker() -> None:
                ok = self._wait_for_response(lambda: self._send_line("PING"), 1.5)
                if not ok:
                    self.root.after(0, lambda: self._log_result("PING timeout (no ACK)", "fail"))
                    self.root.after(0, lambda: self.status_var.set("PING timeout"))
                    return

                if self.last_response and self.last_response.get("type") == "pong":
                    self.root.after(0, lambda: self._log_result("PING ACK received (OK PONG)", "pass"))
                    self.root.after(0, lambda: self.status_var.set("PING acknowledged by FPGA"))
                else:
                    detail = self.last_response["data"] if self.last_response else "unexpected response"
                    self.root.after(0, lambda d=detail: self._log_result(f"PING failed: {d}", "fail"))
                    self.root.after(0, lambda: self.status_var.set("PING failed"))

            threading.Thread(target=ping_worker, daemon=True).start()
        except Exception as exc:
            messagebox.showerror("Ping", f"Failed to send PING:\n{exc}")
    
    def _query_status_manual(self) -> None:
        """Query status manually."""
        if not self.ser:
            messagebox.showerror("Status", "Not connected to serial port")
            return
        try:
            self._send_line("STATUS")
            self._log_result("Querying controller status...", "header")
        except Exception as exc:
            messagebox.showerror("Status", f"Failed to query status:\n{exc}")
    
    def _parse_and_display_status(self, status_line: str) -> None:
        """Parse STATUS register hex value and update individual flag indicators."""
        try:
            # Extract status=0x... from response line
            # Format: "mode=256 status=0x13 idle=1 done=0 in_full=0 err=0x0"
            match = re.search(r'status=(0x[0-9a-fA-F]+)', status_line)
            if not match:
                # Try parsing whole string as hex (fallback)
                status_hex = status_line.strip().lower()
                if status_hex.startswith("0x"):
                    status_hex = status_hex[2:]
                status_val = int(status_hex, 16)
            else:
                status_hex = match.group(1)
                status_val = int(status_hex, 16)
            
            # Parse individual bits based on README register map
            # Bit 0: IDLE
            idle = bool(status_val & (1 << 0))
            self.status_idle.config(fg="green" if idle else "gray")
            
            # Bit 1: BUSY
            busy = bool(status_val & (1 << 1))
            self.status_busy.config(fg="orange" if busy else "gray")
            
            # Bit 2: DONE
            done = bool(status_val & (1 << 2))
            self.status_done.config(fg="blue" if done else "gray")
            
            # Bit 4: IN_EMPTY
            in_empty = bool(status_val & (1 << 4))
            self.status_in_empty.config(fg="cyan" if in_empty else "gray")
            
            # Bit 5: IN_FULL
            in_full = bool(status_val & (1 << 5))
            self.status_in_full.config(fg="red" if in_full else "gray")
            
            # Bit 6: OUT_EMPTY
            out_empty = bool(status_val & (1 << 6))
            self.status_out_empty.config(fg="cyan" if out_empty else "gray")
            
            # Bit 7: OUT_FULL
            out_full = bool(status_val & (1 << 7))
            self.status_out_full.config(fg="red" if out_full else "gray")
            
            # Bit 8: ERR_ILL (illegal write)
            err_ill = bool(status_val & (1 << 8))
            self.status_err_ill.config(fg="red" if err_ill else "gray")
            
            # Bit 9: ERR_UF (underflow)
            err_uf = bool(status_val & (1 << 9))
            self.status_err_uf.config(fg="red" if err_uf else "gray")
            
            # Bit 10: ERR_OF (overflow)
            err_of = bool(status_val & (1 << 10))
            self.status_err_of.config(fg="red" if err_of else "gray")
            
        except (ValueError, IndexError):
            pass  # Silently ignore parse errors during stress test
    
    def _compute_expected_digest(self, mode: str, msg: str) -> str:
        """Compute expected digest using Python hashlib."""
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
    
    def _generate_random_message(self, size: int) -> str:
        """Generate a random message of specified size."""
        chars = string.ascii_letters + string.digits + string.punctuation + " "
        return "".join(random.choice(chars) for _ in range(size))
    
    def _start_test(self) -> None:
        """Start the stress test."""
        if not self.ser:
            messagebox.showerror("Test", "Connect to serial port first")
            return
        
        if self.test_running:
            return
        
        try:
            start_size = int(self.start_size_var.get())
            end_size = int(self.end_size_var.get())
            iterations = int(self.iterations_var.get())
            timeout = float(self.timeout_var.get())
        except ValueError as exc:
            messagebox.showerror("Test", f"Invalid test parameters:\n{exc}")
            return
        
        if start_size < 1 or end_size < start_size or iterations < 1:
            messagebox.showerror("Test", "Invalid test parameters")
            return
        
        self.test_running = True
        self.test_stop_event.clear()
        self.start_test_btn.configure(state="disabled")
        self.stop_test_btn.configure(state="normal")
        
        self.test_thread = threading.Thread(
            target=self._run_tests,
            args=(start_size, end_size, iterations, timeout),
            daemon=True
        )
        self.test_thread.start()
    
    def _stop_test(self) -> None:
        """Stop the running test."""
        if self.test_running:
            self.test_stop_event.set()
            self.status_var.set("Stopping test...")
    
    def _run_tests(self, start_size: int, end_size: int, iterations: int, timeout: float) -> None:
        """Run stress tests in background thread."""
        try:
            # Determine test sizes
            step_val = self.step_var.get()
            if step_val == "exponential":
                sizes = []
                size = start_size
                while size <= end_size:
                    sizes.append(size)
                    size = max(size + 1, int(size * 1.5))
                if sizes[-1] != end_size:
                    sizes.append(end_size)
            else:
                step = int(step_val)
                sizes = list(range(start_size, end_size + 1, step))
                if sizes[-1] != end_size:
                    sizes.append(end_size)
            
            # Determine modes to test
            modes_sel = self.modes_var.get()
            if modes_sel == "all":
                modes = ["224", "256", "384", "512"]
            else:
                modes = [modes_sel]
            
            total_tests = len(sizes) * len(modes) * iterations
            test_num = 0
            
            self.progress_bar["maximum"] = total_tests
            
            for mode in modes:
                if self.test_stop_event.is_set():
                    break
                
                # Set mode on device
                self.root.after(0, lambda m=mode: self.status_var.set(f"Setting mode to SHA3-{m}..."))
                if not self._wait_for_response(lambda: self._send_line(f"MODE {mode}"), timeout):
                    self._log_result(f"Failed to set mode {mode}", "fail")
                    continue
                
                self.current_mode = mode
                time.sleep(0.1)
                
                for size in sizes:
                    if self.test_stop_event.is_set():
                        break
                    
                    for iteration in range(iterations):
                        if self.test_stop_event.is_set():
                            break
                        
                        test_num += 1
                        msg = self._generate_random_message(size)
                        
                        self.root.after(
                            0,
                            lambda t=test_num, m=mode, s=size, i=iteration:
                            self.current_test_var.set(f"Test {t}/{total_tests}: SHA3-{m}, Size={s}, Iter={i+1}/{iterations}")
                        )
                        
                        start_time = time.time()
                        success, error, actual_digest = self._run_single_test(mode, msg, timeout)
                        duration_ms = (time.time() - start_time) * 1000
                        
                        expected_digest = self._compute_expected_digest(mode, msg) if success or error else ""
                        
                        result = TestResult(
                            test_num=test_num,
                            mode=mode,
                            msg_size=size,
                            success=success,
                            error=error,
                            duration_ms=duration_ms,
                            expected_digest=expected_digest,
                            actual_digest=actual_digest
                        )
                        
                        self.results.append(result)
                        
                        if success:
                            self.tests_passed += 1
                        else:
                            self.tests_failed += 1
                        
                        self.root.after(0, lambda r=result: self._display_result(r))
                        self.root.after(0, lambda: self._update_stats())
                        self.root.after(0, lambda v=test_num: self.progress_bar.configure(value=v))
                        
                        time.sleep(0.05)  # Small delay between tests
            
            self.root.after(0, lambda: self.status_var.set("Test completed!"))
            
        except Exception as exc:
            self.root.after(0, lambda e=str(exc): self.status_var.set(f"Test error: {e}"))
            self.root.after(0, lambda e=str(exc): self._log_result(f"Test error: {e}", "fail"))
        
        finally:
            self.test_running = False
            self.root.after(0, lambda: self.start_test_btn.configure(state="normal"))
            self.root.after(0, lambda: self.stop_test_btn.configure(state="disabled"))
    
    def _run_single_test(self, mode: str, msg: str, timeout: float) -> tuple[bool, Optional[str], str]:
        """Run a single test and return (success, error, actual_digest)."""
        try:
            # Send HASH command
            if not self._wait_for_response(lambda: self._send_line(f"HASH {msg}"), timeout):
                return False, "Timeout waiting for response", ""
            
            if self.last_response["type"] == "error":
                return False, self.last_response["data"], ""
            
            if self.last_response["type"] == "timeout":
                return False, "Timeout", ""
            
            if self.last_response["type"] != "hash":
                return False, f"Unexpected response type: {self.last_response['type']}", ""
            
            actual_digest = self.last_response["data"]
            expected_digest = self._compute_expected_digest(mode, msg)
            
            if actual_digest == expected_digest:
                return True, None, actual_digest
            else:
                return False, f"Digest mismatch", actual_digest
            
        except Exception as exc:
            return False, str(exc), ""
    
    def _wait_for_response(self, send_func, timeout: float) -> bool:
        """Wait for a response from the device."""
        self.response_event.clear()
        self.last_response = None
        self.awaiting_response = True
        self.response_deadline = time.time() + timeout
        self.pending_digest_chars = ""
        
        send_func()
        
        return self.response_event.wait(timeout + 0.5)
    
    def _display_result(self, result: TestResult) -> None:
        """Display a test result."""
        status = "PASS" if result.success else "FAIL"
        tag = "pass" if result.success else "fail"
        
        msg = f"[{result.test_num:4d}] SHA3-{result.mode} Size={result.msg_size:5d} {status:4s} ({result.duration_ms:6.1f}ms)"
        
        if not result.success and result.error:
            msg += f" - {result.error}"
        
        self._log_result(msg, tag)
        self._log_digest_result(result)
    
    def _log_result(self, msg: str, tag: Optional[str] = None) -> None:
        """Log a message to the results text widget."""
        self.results_text.configure(state="normal")
        if tag:
            self.results_text.insert("end", msg + "\n", tag)
        else:
            self.results_text.insert("end", msg + "\n")
        self.results_text.see("end")
        self.results_text.configure(state="disabled")

    def _log_uart(self, msg: str, tag: str = "sys") -> None:
        """Log a message to the raw UART communication widget."""
        if not hasattr(self, "uart_text"):
            return
        self.uart_text.configure(state="normal")
        self.uart_text.insert("end", msg + "\n", tag)
        self.uart_text.see("end")
        self.uart_text.configure(state="disabled")

    def _log_digest_result(self, result: TestResult) -> None:
        """Log expected vs actual digest details for each test."""
        if not hasattr(self, "digest_text"):
            return

        header = f"[{result.test_num:4d}] SHA3-{result.mode} Size={result.msg_size}"
        expected = result.expected_digest if result.expected_digest else "(not available)"
        actual = result.actual_digest if result.actual_digest else "(not available)"

        if result.success:
            status = "MATCH"
            status_tag = "match"
        elif result.error and "Digest mismatch" in result.error:
            status = "MISMATCH"
            status_tag = "mismatch"
        else:
            status = f"NO_COMPARE ({result.error or 'unknown'})"
            status_tag = "digest_info"

        self.digest_text.configure(state="normal")
        self.digest_text.insert("end", header + "\n", "digest_info")
        self.digest_text.insert("end", f"  status: {status}\n", status_tag)
        self.digest_text.insert("end", f"  expected: {expected}\n", "digest_info")
        self.digest_text.insert("end", f"  actual  : {actual}\n\n", "digest_info")
        self.digest_text.see("end")
        self.digest_text.configure(state="disabled")
    
    def _update_stats(self) -> None:
        """Update statistics display."""
        self.passed_var.set(str(self.tests_passed))
        self.failed_var.set(str(self.tests_failed))
        
        total = self.tests_passed + self.tests_failed
        if total > 0:
            rate = (self.tests_passed / total) * 100
            self.success_rate_var.set(f"{rate:.1f}%")
        else:
            self.success_rate_var.set("N/A")
    
    def _clear_results(self) -> None:
        """Clear all test results."""
        if self.test_running:
            messagebox.showwarning("Clear", "Cannot clear results while test is running")
            return
        
        self.results.clear()
        self.tests_passed = 0
        self.tests_failed = 0
        self._update_stats()
        
        self.results_text.configure(state="normal")
        self.results_text.delete("1.0", "end")
        self.results_text.configure(state="disabled")

        self.uart_text.configure(state="normal")
        self.uart_text.delete("1.0", "end")
        self.uart_text.configure(state="disabled")

        self.digest_text.configure(state="normal")
        self.digest_text.delete("1.0", "end")
        self.digest_text.configure(state="disabled")
        
        self.progress_bar["value"] = 0
        self.current_test_var.set("Not started")
        self.status_var.set("Idle")
    
    def _on_close(self) -> None:
        """Handle window close event."""
        if self.test_running:
            if not messagebox.askyesno("Exit", "Test is running. Stop and exit?"):
                return
            self.test_stop_event.set()
            if self.test_thread:
                self.test_thread.join(timeout=1.0)
        
        if self.poll_after_id is not None:
            try:
                self.root.after_cancel(self.poll_after_id)
            except Exception:
                pass
        
        self._disconnect()
        self.root.quit()
        self.root.destroy()


def main() -> None:
    """Main entry point."""
    root = tk.Tk()
    app = Sha3StressTest(root)
    root.mainloop()


if __name__ == "__main__":
    main()
