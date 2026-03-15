#!/usr/bin/env python3
"""
sha3_stress_test.py - SHA3 UART stress-testing GUI for RVfpga.

    Authors: Copilot and Truong Le (tnl3@pdx.edu)

How this script works:
1) Connects to UART and negotiates LIMITS for maximum safe chunk size.
2) Builds a test matrix across message sizes, SHA3 modes, and iterations.
3) For each case, sends MODE, streams payload (line/binary), receives digest,
   compares against local hashlib reference, and records pass/fail + metrics.
4) Aggregates throughput statistics and renders result/UART/digest logs.

Configurable runtime options (UI):
- Serial port + baud rate.
- Start/end message size, step policy (exponential/fixed), iterations.
- SHA3 mode selection (single mode or all modes).
- Stream mode (line/binary), chunk size, timeout.

Class overview:
- TestResult: immutable-style container for one executed test case.
- Sha3StressTest: orchestrates connection, test scheduling, execution, logging,
  and statistics presentation.
  - Connection: _connect, _disconnect.
  - Execution: _start_test, _run_tests, _run_single_test, _stop_test.
  - RX/protocol hooks: _handle_rx_line, _prepare_response_wait.
  - Reporting: _display_result, _update_stats, _clear_results.
  
Note: This code was generated using Copilot using prompting.
  
"""

import queue
import random
import string
import sys
import threading
import time
import tkinter as tk
from tkinter import ttk, messagebox, scrolledtext
from dataclasses import dataclass
from typing import Optional
from pathlib import Path

# Allow imports from parent tools/ directory when running from tools/testing/.
TOOLS_DIR = Path(__file__).resolve().parents[1]
if str(TOOLS_DIR) not in sys.path:
    sys.path.insert(0, str(TOOLS_DIR))

from sha3_uart_protocol import ProtocolHandler, Sha3GUIBase
from sha3_uart_config import (
    CMD_ABORT,
    DEFAULT_BAUD,
    DEFAULT_CHUNK_SIZE,
    DEFAULT_FONT_FAMILY,
    DEFAULT_LOG_FONT_SIZE,
    DEFAULT_FONT_SIZE,
    DEFAULT_STREAM_MODE,
    MAX_CHUNK_SIZE,
    RESP_DATASTR_ACK,
    RESP_STREAM_START,
    STATUS_DOT_FONT_SIZE,
)


@dataclass
class TestResult:
    """Single executed stress-test record used by UI result renderers."""
    test_num: int
    mode: str
    msg_size: int
    success: bool
    error: Optional[str] = None
    duration_ms: float = 0.0
    expected_digest: str = ""
    actual_digest: str = ""
    aborted: bool = False
    hash_rate_bytes_sec: float = 0.0  # Hash rate for this individual test


class Sha3StressTest(Sha3GUIBase):
    """GUI harness that runs repeated SHA3 protocol transactions and scoring."""
    
    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("RVfpga SHA3 Stress Test")
        screen_w = self.root.winfo_screenwidth()
        screen_h = self.root.winfo_screenheight()
        default_w = max(1000, min(1300, int(screen_w * 0.82)))
        default_h = max(820, min(980, int(screen_h * 0.86)))
        self.root.geometry(f"{default_w}x{default_h}")
        self.root.minsize(1000, 820)
        self.default_font_size = DEFAULT_FONT_SIZE
        self._apply_default_fonts()
        
        self.ser = None
        self.reader_thread = None
        self.test_thread = None
        self.stop_event = threading.Event()
        self.test_stop_event = threading.Event()
        self.rx_queue: queue.Queue[str] = queue.Queue()
        self.rx_partial = bytearray()
        
        # Test state
        self.test_running = False
        self.abort_notice_logged = False
        self.current_mode = "256"
        self.awaiting_response = False
        self.response_deadline = 0.0
        self.pending_digest_chars = ""
        self.last_response = None
        self.response_event = threading.Event()
        self.max_datastr_payload_chars = MAX_CHUNK_SIZE
        self.tx_lock = threading.Lock()
        self.protocol: Optional[ProtocolHandler] = None

        # LIMITS negotiation state
        self.negotiated_max_chunk = None
        
        # Test results
        self.results: list[TestResult] = []
        self.tests_passed = 0
        self.tests_failed = 0
        self.bytes_sent = 0
        self.bytes_total = 0
        self.bytes_sent_before_current = 0  # Cumulative bytes from completed tests
        
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
        self.baud_var = tk.StringVar(value=str(DEFAULT_BAUD))
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

        ttk.Label(config_frame, text="Chunk Size (bytes):").grid(row=0, column=6, sticky="w", padx=(16, 0))
        self.chunk_size_var = tk.StringVar(value=str(DEFAULT_CHUNK_SIZE))
        chunk_ctl = ttk.Frame(config_frame)
        chunk_ctl.grid(row=0, column=7, padx=6, sticky="w")
        ttk.Entry(chunk_ctl, textvariable=self.chunk_size_var, width=10).grid(row=0, column=0, rowspan=2)
        ttk.Button(chunk_ctl, text="↑", width=2, command=self._chunk_size_step_up).grid(row=0, column=1, padx=(4, 0))
        ttk.Button(chunk_ctl, text="↓", width=2, command=self._chunk_size_step_down).grid(row=1, column=1, padx=(4, 0))
        self.max_chunk_label = ttk.Label(config_frame, text="(max: ---)", foreground="gray")
        self.max_chunk_label.grid(row=0, column=8, sticky="w")
        
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
        
        # Stream mode selector
        ttk.Label(config_frame, text="Stream Mode:").grid(row=1, column=6, sticky="w", padx=(16, 0), pady=(8, 0))
        self.stream_mode_var = tk.StringVar(value=DEFAULT_STREAM_MODE)
        ttk.Combobox(
            config_frame,
            textvariable=self.stream_mode_var,
            values=["line", "binary"],
            width=10,
            state="readonly"
        ).grid(row=1, column=7, padx=6, pady=(8, 0))
        
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

        ttk.Label(info_frame, text="Bytes Sent:").grid(row=2, column=0, sticky="w", pady=(4, 0))
        self.bytes_progress_var = tk.StringVar(value="0 / 0 bytes")
        ttk.Label(info_frame, textvariable=self.bytes_progress_var, width=60).grid(row=2, column=1, sticky="w", padx=6, pady=(4, 0))

        # Test control buttons (bottom-right of progress panel)
        progress_btn_frame = ttk.Frame(progress_frame)
        progress_btn_frame.pack(fill="x", pady=(8, 0))
        btn_right = ttk.Frame(progress_btn_frame)
        btn_right.pack(side="right")

        self.start_test_btn = ttk.Button(btn_right, text="Start Test", command=self._start_test)
        self.start_test_btn.pack(side="left", padx=4)

        self.stop_test_btn = ttk.Button(btn_right, text="Stop Test", command=self._stop_test, state="disabled")
        self.stop_test_btn.pack(side="left", padx=4)

        ttk.Button(btn_right, text="Clear Results", command=self._clear_results).pack(side="left", padx=4)
        
        # Statistics frame
        stats_frame = ttk.LabelFrame(main_frame, text="Statistics", padding=8)
        stats_frame.pack(fill="x", pady=(10, 0))
        
        ttk.Label(stats_frame, text="Passed:").grid(row=0, column=0, sticky="w")
        self.passed_var = tk.StringVar(value="0")
        ttk.Label(stats_frame, textvariable=self.passed_var, foreground="green", font=(DEFAULT_FONT_FAMILY, DEFAULT_FONT_SIZE, "bold")).grid(row=0, column=1, sticky="w", padx=6)
        
        ttk.Label(stats_frame, text="Failed:").grid(row=0, column=2, sticky="w", padx=(16, 0))
        self.failed_var = tk.StringVar(value="0")
        ttk.Label(stats_frame, textvariable=self.failed_var, foreground="red", font=(DEFAULT_FONT_FAMILY, DEFAULT_FONT_SIZE, "bold")).grid(row=0, column=3, sticky="w", padx=6)
        
        ttk.Label(stats_frame, text="Success Rate:").grid(row=0, column=4, sticky="w", padx=(16, 0))
        self.success_rate_var = tk.StringVar(value="N/A")
        ttk.Label(stats_frame, textvariable=self.success_rate_var, font=(DEFAULT_FONT_FAMILY, DEFAULT_FONT_SIZE, "bold")).grid(row=0, column=5, sticky="w", padx=6)
        
        ttk.Button(stats_frame, text="Ping", command=self._send_ping).grid(row=0, column=6, sticky="w", padx=(24, 0))
        ttk.Button(stats_frame, text="Query Status", command=self._query_status_manual).grid(row=0, column=7, sticky="w", padx=4)
        self.abort_btn = ttk.Button(stats_frame, text="Abort/Reset", command=self._abort_manual, state="disabled")
        self.abort_btn.grid(row=0, column=8, sticky="w", padx=4)
        
        # Controller status frame
        status = ttk.LabelFrame(main_frame, text="Controller Status", padding=8)
        status.pack(fill="x", pady=(10, 0))
        
        # FSM State row
        fsm_frame = ttk.Frame(status)
        fsm_frame.pack(fill="x", pady=2)
        ttk.Label(fsm_frame, text="FSM:", width=12, anchor="w").pack(side="left")
        self.status_idle = tk.Label(fsm_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_idle.pack(side="left")
        ttk.Label(fsm_frame, text="IDLE", width=8).pack(side="left")
        self.status_busy = tk.Label(fsm_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_busy.pack(side="left")
        ttk.Label(fsm_frame, text="BUSY", width=8).pack(side="left")
        self.status_done = tk.Label(fsm_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_done.pack(side="left")
        ttk.Label(fsm_frame, text="DONE", width=8).pack(side="left")
        
        # FIFO Status row
        fifo_frame = ttk.Frame(status)
        fifo_frame.pack(fill="x", pady=2)
        ttk.Label(fifo_frame, text="FIFO:", width=12, anchor="w").pack(side="left")
        self.status_in_empty = tk.Label(fifo_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_in_empty.pack(side="left")
        ttk.Label(fifo_frame, text="IN_EMPTY", width=12).pack(side="left")
        self.status_in_full = tk.Label(fifo_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_in_full.pack(side="left")
        ttk.Label(fifo_frame, text="IN_FULL", width=12).pack(side="left")
        self.status_out_empty = tk.Label(fifo_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_out_empty.pack(side="left")
        ttk.Label(fifo_frame, text="OUT_EMPTY", width=12).pack(side="left")
        self.status_out_full = tk.Label(fifo_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_out_full.pack(side="left")
        ttk.Label(fifo_frame, text="OUT_FULL", width=12).pack(side="left")
        
        # Error flags row
        err_frame = ttk.Frame(status)
        err_frame.pack(fill="x", pady=2)
        ttk.Label(err_frame, text="Errors:", width=12, anchor="w").pack(side="left")
        self.status_err_ill = tk.Label(err_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_err_ill.pack(side="left")
        ttk.Label(err_frame, text="ILL_WR", width=12).pack(side="left")
        self.status_err_uf = tk.Label(err_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_err_uf.pack(side="left")
        ttk.Label(err_frame, text="UNDERFLOW", width=12).pack(side="left")
        self.status_err_of = tk.Label(err_frame, text="●", font=(DEFAULT_FONT_FAMILY, STATUS_DOT_FONT_SIZE), fg="gray")
        self.status_err_of.pack(side="left")
        ttk.Label(err_frame, text="OVERFLOW", width=12).pack(side="left")

        # Raw status text
        raw_frame = ttk.Frame(status)
        raw_frame.pack(fill="x", pady=(4, 0))
        ttk.Label(raw_frame, text="Raw:", width=12, anchor="w").pack(side="left")
        self.status_raw_var = tk.StringVar(value="(not queried)")
        ttk.Label(raw_frame, textvariable=self.status_raw_var, foreground="#666").pack(side="left", fill="x", expand=True)
        
        # Resizable lower section: top = test/UART logs, bottom = digest comparison.
        lower_pane = ttk.Panedwindow(main_frame, orient="vertical")
        lower_pane.pack(fill="both", expand=True, pady=(10, 0))

        logs_row = ttk.Frame(lower_pane)
        logs_row.columnconfigure(0, weight=1)
        logs_row.columnconfigure(1, weight=1)
        logs_row.rowconfigure(0, weight=1)

        # Results frame with scrolled text
        results_frame = ttk.LabelFrame(logs_row, text="Test Results", padding=8)
        results_frame.grid(row=0, column=0, sticky="nsew", padx=(0, 5))

        self.results_text = scrolledtext.ScrolledText(
            results_frame,
            height=15,
            wrap="none",
            state="disabled",
            font=(DEFAULT_FONT_FAMILY, DEFAULT_LOG_FONT_SIZE),
        )
        self.results_text.pack(fill="both", expand=True)

        # Configure text tags for colored output
        self.results_text.tag_config("pass", foreground="green")
        self.results_text.tag_config("fail", foreground="red")
        self.results_text.tag_config("abort", foreground="#b36b00")
        self.results_text.tag_config("header", font=(DEFAULT_FONT_FAMILY, DEFAULT_LOG_FONT_SIZE, "bold"))

        # UART log frame with separate TX/RX/system trace.
        uart_frame = ttk.LabelFrame(logs_row, text="UART Log", padding=8)
        uart_frame.grid(row=0, column=1, sticky="nsew", padx=(5, 0))

        self.uart_text = scrolledtext.ScrolledText(
            uart_frame,
            height=15,
            wrap="none",
            state="disabled",
            font=(DEFAULT_FONT_FAMILY, DEFAULT_LOG_FONT_SIZE),
        )
        self.uart_text.pack(fill="both", expand=True)
        self.uart_text.tag_config("tx", foreground="#1f6feb")
        self.uart_text.tag_config("rx", foreground="#0a7f2e")
        self.uart_text.tag_config("uart_error", foreground="#b00020")
        self.uart_text.tag_config("sys", foreground="#666666")

        # Digest comparison frame for detailed expected vs actual logging.
        digest_frame = ttk.LabelFrame(lower_pane, text="Digest Comparison Log", padding=8)

        self.digest_text = scrolledtext.ScrolledText(
            digest_frame,
            height=10,
            wrap="none",
            state="disabled",
            font=(DEFAULT_FONT_FAMILY, DEFAULT_LOG_FONT_SIZE),
        )
        self.digest_text.pack(fill="both", expand=True)
        self.digest_text.tag_config("match", foreground="green")
        self.digest_text.tag_config("mismatch", foreground="red")
        self.digest_text.tag_config("digest_info", foreground="#444444")

        lower_pane.add(logs_row, weight=3)
        lower_pane.add(digest_frame, weight=2)

    def _connect(self) -> None:
        """Connect to serial port."""
        connection = self._connect_with_protocol(lambda msg: self._log_uart(msg, "tx"))
        if not connection:
            return

        port, baud = connection
        self._log_result("Connected to {} @ {}".format(port, baud), "header")
        self._log_uart(f"[sys] Connected to {port} @ {baud}", "sys")
    
    def _disconnect(self) -> None:
        """Disconnect from serial port."""
        self._post_disconnect_cleanup()
        self._log_result("Disconnected", "header")
        self._log_uart("[sys] Disconnected", "sys")

    def _poll_interval_ms(self) -> int:
        return 50

    def _handle_poll_timeout(self) -> None:
        """Poll-time timeout handling for stress test command waits."""
        if self.awaiting_response and time.time() > self.response_deadline:
            self.awaiting_response = False
            self.last_response = {"type": "timeout", "data": None}
            self.response_event.set()
    
    def _handle_rx_line(self, line: str) -> None:
        """Handle a received line from UART."""
        if not line:
            return

        self._log_uart(f"<- {line}", "rx")
        
        if line.startswith("[error]"):
            self.last_response = {"type": "error", "data": line}
            self.response_event.set()
            return
        
        """
        Message Commands:
        - OK HASH <digest>: retrieve hash from controller (can be multi-line if long, so may require accumulation)
        - OK MODE <mode>: echoes the mode that was set 
        - OK STATUS <hex>: sends current controller status in hex
        - OK PONG: response to PING command
        - OK ABORT: response to ABORT command, may include additional info
        - OK LIMITS <json>: response to LIMITS query with max chunk size and other parameters
        - ERR <error message>: indicates an error response from the controller
        - "RESP_STREAM_START": indicates the controller is ready to receive a data stream (after MODE command)
        - "RESP_DATASTR_ACK": acknowledges receipt of a data chunk during streaming, can include info on how many bytes received so far
        """
        if "OK HASH" in line.upper():
            digest = self._extract_digest(line)
            # If digest is complete in this line, set response. 
            if digest:
                self.last_response = {"type": "hash", "data": digest}
                self.response_event.set()
                self.awaiting_response = False
                self.pending_digest_chars = ""
            # Otherwise, enter accumulation mode to gather subsequent lines until we have the full digest.
            else:
                self.awaiting_response = True
                self._accumulate_digest_chars(line)
        elif line.startswith("OK MODE "):
            # Echo of the mode that was set.
            self.last_response = {"type": "mode", "data": line[len("OK MODE "):].strip()}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("OK STATUS "):
            # Echo of the current controller status in hex, also triggers update of live status display.
            status_hex = line[len("OK STATUS "):].strip()
            self.last_response = {"type": "status", "data": status_hex}
            self.response_event.set()
            self.awaiting_response = False
            # Update live status display
            self.root.after(0, lambda s=status_hex: self._parse_and_display_status(s))
        elif line.startswith("OK PONG") or line.startswith("PONG"):
            # Response to PING command.
            self.last_response = {"type": "pong", "data": True}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("OK ABORT"):
            # Response to ABORT command, may include additional info about the abort reason or state.
            self.last_response = {"type": "abort", "data": line}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("OK LIMITS "):
            # Response to LIMITS query, includes max chunk size.
            self.protocol.handle_limits_response(line)
        elif line.startswith(RESP_STREAM_START):
            # Indicates the controller is ready to receive a data stream (after MODE command).
            self.last_response = {"type": "stream_start", "data": line}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith(RESP_DATASTR_ACK):
            # Acknowledges receipt of a data chunk during streaming, can include info on how many bytes received so far.
            self.last_response = {"type": "datastr_ack", "data": line}
            self.response_event.set()
            self.awaiting_response = False
        elif line.startswith("ERR"):
            # An error response from the controller.
            self.last_response = {"type": "error", "data": line}
            self.response_event.set()
            self.awaiting_response = False
        elif self.awaiting_response:
            # If waiting for response, wait for incoming digest lines.
            self._accumulate_digest_chars(line)
        
        # Pass the line to the protocol handler for any additional internal processing or state updates.
        if self.protocol:
            self.protocol.handle_response_line(line)
            
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

    def _prepare_response_wait(self, timeout: float) -> None:
        """Prepare local RX state before waiting on ProtocolHandler response event."""
        self.response_event.clear()
        self.last_response = None
        self.awaiting_response = True
        self.response_deadline = time.time() + timeout
        self.pending_digest_chars = ""

        if self.ser:
            try:
                self.ser.reset_input_buffer()
            except Exception:
                pass

        try:
            self.rx_partial.clear()
        except Exception:
            pass

        while True:
            try:
                self.rx_queue.get_nowait()
            except queue.Empty:
                break

    def _set_bytes_progress(self, sent: int, total: int) -> None:
        """Update bytes sent progress in the UI."""
        self.bytes_sent = max(0, sent)
        self.bytes_total = max(0, total)
        self.bytes_progress_var.set(f"{self.bytes_sent} / {self.bytes_total} bytes")

    def _send_ping(self) -> None:
        """Send a PING command manually."""
        if not self.ser or not self.protocol:
            messagebox.showerror("Ping", "Not connected to serial port")
            return
        if self.test_running:
            messagebox.showwarning("Ping", "Stop stress test before manual ping")
            return
        try:
            self._log_result("Sending PING...", "header")
            self.status_var.set("Waiting for PING ACK...")

            def ping_worker() -> None:
                if not self.protocol:
                    self.root.after(0, lambda: self._log_result("PING failed: protocol not initialized", "fail"))
                    self.root.after(0, lambda: self.status_var.set("PING failed"))
                    return

                self._prepare_response_wait(1.5)
                ok = self.protocol.wait_for_response(lambda: self.protocol.send_line("PING"), timeout=1.5)
                if not ok:
                    self.root.after(0, lambda: self._log_result("PING timeout (no ACK)", "fail"))
                    self.root.after(0, lambda: self.status_var.set("PING timeout"))
                    return

                if self.protocol.last_response and self.protocol.last_response.get("type") == "pong":
                    self.root.after(0, lambda: self._log_result("PING ACK received (OK PONG)", "pass"))
                    self.root.after(0, lambda: self.status_var.set("PING acknowledged by FPGA"))
                else:
                    detail = self.protocol.last_response["data"] if self.protocol.last_response else "unexpected response"
                    self.root.after(0, lambda d=detail: self._log_result(f"PING failed: {d}", "fail"))
                    self.root.after(0, lambda: self.status_var.set("PING failed"))

            threading.Thread(target=ping_worker, daemon=True).start()
        except Exception as exc:
            messagebox.showerror("Ping", f"Failed to send PING:\n{exc}")
    
    def _query_status_manual(self) -> None:
        """Query status manually."""
        if not self.ser or not self.protocol:
            messagebox.showerror("Status", "Not connected to serial port")
            return
        try:
            self.protocol.send_line("STATUS")
            self._log_result("Querying controller status...", "header")
        except Exception as exc:
            messagebox.showerror("Status", f"Failed to query status:\n{exc}")

    def _abort_manual(self) -> None:
        """Send ABORT command manually to recover from lockups."""
        if not self.ser or not self.protocol:
            messagebox.showerror("Abort", "Not connected to serial port")
            return
        try:
            self.protocol.send_line(CMD_ABORT)
            self._log_result("Manual ABORT sent", "header")
            self._log_uart("[sys] Manual ABORT sent", "sys")
            if self.test_running:
                self.test_stop_event.set()
                self.status_var.set("Aborting FPGA transaction...")
                if not self.abort_notice_logged:
                    self._log_result("[ABORT] Test run aborted by user", "abort")
                    self.abort_notice_logged = True
        except Exception as exc:
            messagebox.showerror("Abort", f"Failed to send ABORT:\n{exc}")
    
    def _generate_random_message(self, size: int) -> str:
        """Generate a random message of specified size."""
        chars = string.ascii_letters + string.digits + string.punctuation + " "
        return "".join(random.choice(chars) for _ in range(size))
    
    def _start_test(self) -> None:
        """Start the stress test."""
        if not self.ser:
            messagebox.showerror("Test", "Connect to serial port first")
            return
        
        # Check if a test is already running to prevent multiple concurrent tests.
        if self.test_running:
            return
        
        # Validate test parameters before starting.
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
        
        # Initialize test state and start background thread to run tests.
        self.test_running = True
        self.abort_notice_logged = False
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
        """Abort active FPGA transaction and stop the running test."""
        if self.test_running:
            self.test_stop_event.set()
            self.status_var.set("Aborting FPGA transaction...")
            if not self.abort_notice_logged:
                self._log_result("[ABORT] Test run aborted by user", "abort")
                self.abort_notice_logged = True
            try:
                if self.protocol:
                    self.protocol.send_line(CMD_ABORT)
                self._log_uart("[sys] ABORT sent", "sys")
            except Exception as exc:
                self._log_uart(f"[sys] ABORT send failed: {exc}", "uart_error")
    
    def _run_tests(self, start_size: int, end_size: int, iterations: int, timeout: float) -> None:
        """Run stress tests in background thread."""
        try:
            aborted_run = False
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
            total_bytes = sum(sizes) * len(modes) * iterations
            test_num = 0
            bytes_sent = 0
            
            self.progress_bar["maximum"] = total_tests
            self.root.after(0, lambda t=total_bytes: self._set_bytes_progress(0, t))
            
            for mode in modes:
                if self.test_stop_event.is_set():
                    break
                
                # Set mode on device
                self.root.after(0, lambda m=mode: self.status_var.set(f"Setting mode to SHA3-{m}..."))
                if not self.protocol:
                    self._log_result("Protocol handler not initialized", "fail")
                    continue

                self._prepare_response_wait(timeout)
                if not self.protocol.wait_for_response(lambda m=mode: self.protocol.send_line(f"MODE {m}"), timeout=timeout):
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
                        msg_bytes = len(msg.encode("utf-8"))
                        
                        self.root.after(
                            0,
                            lambda t=test_num, m=mode, s=size, i=iteration:
                            self.current_test_var.set(f"Test {t}/{total_tests}: SHA3-{m}, Size={s}, Iter={i+1}/{iterations}")
                        )
                        
                        self.bytes_sent_before_current = bytes_sent
                        success, error, actual_digest, hash_rate = self._run_single_test(mode, msg, timeout)
                        duration_ms = (msg_bytes / hash_rate * 1000.0) if hash_rate > 0 else 0.0
                        aborted = (error == "ABORTED")
                        
                        expected_digest = self._compute_expected_digest(mode, msg) if success or error else ""
                        
                        result = TestResult(
                            test_num=test_num,
                            mode=mode,
                            msg_size=size,
                            success=success,
                            error=error,
                            duration_ms=duration_ms,
                            expected_digest=expected_digest,
                            actual_digest=actual_digest,
                            aborted=aborted,
                            hash_rate_bytes_sec=hash_rate,
                        )
                        
                        self.results.append(result)
                        
                        if aborted:
                            aborted_run = True
                        elif success:
                            self.tests_passed += 1
                        else:
                            self.tests_failed += 1
                        
                        self.root.after(0, lambda r=result: self._display_result(r))
                        self.root.after(0, lambda: self._update_stats())
                        self.root.after(0, lambda v=test_num: self.progress_bar.configure(value=v))
                        if not aborted:
                            bytes_sent += msg_bytes
                        self.root.after(0, lambda s=bytes_sent, t=total_bytes: self._set_bytes_progress(s, t))

                        if aborted:
                            break
                        
                        time.sleep(0.05)  # Small delay between tests

                    if aborted_run:
                        break

                if aborted_run:
                    break
            
            if self.test_stop_event.is_set() or aborted_run:
                self.root.after(0, lambda: self.status_var.set("Test aborted"))
            else:
                self.root.after(0, lambda: self.status_var.set("Test completed!"))
            
        except Exception as exc:
            self.root.after(0, lambda e=str(exc): self.status_var.set(f"Test error: {e}"))
            self.root.after(0, lambda e=str(exc): self._log_result(f"Test error: {e}", "fail"))
        
        finally:
            self.test_running = False
            self.root.after(0, lambda: self.start_test_btn.configure(state="normal"))
            self.root.after(0, lambda: self.stop_test_btn.configure(state="disabled"))
    
    def _run_single_test(self, mode: str, msg: str, timeout: float) -> tuple[bool, Optional[str], str, float]:
        """Run a single test and return (success, error, actual_digest, hash_rate_bytes_sec).
        
        Automatically collects hash rate metrics from the protocol handler.
        """
        try:
            if self.test_stop_event.is_set():
                return False, "ABORTED", "", 0.0

            if not self.protocol:
                return False, "Protocol handler not initialized", "", 0.0

            # Use STREAM/DATASTR/END protocol to avoid sending huge single-line commands.
            payload = msg

            # DATASTR is line-based and cannot carry raw newlines safely.
            if "\n" in payload or "\r" in payload:
                return False, "Payload contains newline/carriage return; unsupported by DATASTR", "", 0.0

            chunk_size = self._effective_chunk_size()

            # Update stream mode before each operation (allows mode changes without reconnect)
            self.protocol.set_stream_mode(self.stream_mode_var.get())

            # Progress callback for live byte counter updates
            def on_progress(current_bytes: int):
                total_current = self.bytes_sent_before_current + current_bytes
                self.root.after(0, lambda: self._set_bytes_progress(total_current, self.bytes_total))

            pre_op_count = self.protocol.metrics_accumulator.operation_count

            # Use protocol handler for proper DATASTR ACK waiting
            success, error_msg = self.protocol.send_stream_data(
                payload,
                chunk_size,
                timeout=timeout,
                abort_check=lambda: self.test_stop_event.is_set(),
                progress_callback=on_progress
            )
            
            # Get hash rate metrics from protocol
            hash_rate = 0.0
            post_op_count = self.protocol.metrics_accumulator.operation_count
            last_metrics = self.protocol.metrics_accumulator.get_last_operation_metrics()
            if post_op_count > pre_op_count and last_metrics:
                hash_rate = last_metrics.hash_rate_bytes_sec
            
            if not success:
                return False, error_msg, "", hash_rate

            # Get the hash digest from the last response
            if self.protocol.last_response is None:
                return False, "No response after END", "", hash_rate

            if self.protocol.last_response.get("type") == "abort":
                return False, "ABORTED", "", hash_rate

            if self.protocol.last_response.get("type") == "error":
                return False, self.protocol.last_response.get("data", "Unknown error"), "", hash_rate

            if self.protocol.last_response.get("type") != "hash":
                return False, f"Unexpected response type: {self.protocol.last_response.get('type')}", "", hash_rate

            actual_digest = self.protocol.last_response["data"]
            expected_digest = self._compute_expected_digest(mode, msg)
            if actual_digest == expected_digest:
                return True, None, actual_digest, hash_rate
            else:
                return False, "Digest mismatch", actual_digest, hash_rate
            
        except Exception as exc:
            return False, str(exc), "", 0.0
    
    def _display_result(self, result: TestResult) -> None:
        """Display a test result."""
        if result.aborted:
            status = "ABORT"
            tag = "abort"
        else:
            status = "PASS" if result.success else "FAIL"
            tag = "pass" if result.success else "fail"
        
        # Format hash rate if available
        hash_rate_str = f" @ {result.hash_rate_bytes_sec:.1f} B/s" if result.hash_rate_bytes_sec > 0 else ""
        
        msg = f"[{result.test_num:4d}] SHA3-{result.mode} Size={result.msg_size:5d} {status:4s} ({result.duration_ms:6.1f}ms){hash_rate_str}"
        
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
        """Log a message to the UART log widget."""
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
        
        # Reset metrics accumulator
        if self.protocol:
            self.protocol.metrics_accumulator.reset()
        
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
        self._set_bytes_progress(0, 0)
    
    def _before_close(self) -> bool:
        """Handle pre-close checks and teardown for active stress test."""
        if self.test_running:
            if not messagebox.askyesno("Exit", "Test is running. Stop and exit?"):
                return False
            self.test_stop_event.set()
            if self.test_thread:
                self.test_thread.join(timeout=1.0)
        return True


def main() -> None:
    """Main entry point."""
    root = tk.Tk()
    app = Sha3StressTest(root)
    root.mainloop()


if __name__ == "__main__":
    main()
