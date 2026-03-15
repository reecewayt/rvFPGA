#!/usr/bin/env python3
"""
sha3_uart_gui.py - Interactive SHA3 UART GUI for RVfpga

    Authors: Copilot and Truong Le (tnl3@pdx.edu)

How this script works:
1) Opens a serial connection and instantiates ProtocolHandler.
2) Starts a reader thread and periodic RX polling for firmware responses.
3) For each hash request, computes local expected digest, sends MODE, then
     streams payload via STREAM/DATASTR/END (line or binary mode), and verifies
     device digest against local SHA3 reference.
4) Updates status LEDs/log panels and handles ABORT/PING/STATUS utilities.

Configurable runtime options (UI):
- Serial port + baud rate.
- SHA3 mode (224/256/384/512).
- Stream mode (line/binary).
- Chunk size and timeout.

Class overview:
- Sha3UartGui: single-message interactive workflow.
    - Connection lifecycle: _connect, _disconnect.
    - RX handling: _handle_rx_line + base-class polling/reader helpers.
    - Hash flow: _hash_message, _verify_digest_from_device, _abort_pending_hash.
    - Utilities: _send_ping, _query_status, _abort_transaction.
    
Note: This code was generated using Copilot using prompting.

"""

import queue
import threading
import time
import tkinter as tk
from tkinter import ttk, messagebox
import re
from typing import Optional

from sha3_uart_protocol import ProtocolHandler, Sha3GUIBase
from sha3_uart_config import (
    CMD_ABORT,
    DEFAULT_BAUD,
    DEFAULT_CHUNK_SIZE,
    DEFAULT_FONT_FAMILY,
    DEFAULT_FONT_SIZE,
    DEFAULT_LOG_FONT_SIZE,
    DEFAULT_STREAM_MODE,
    MAX_CHUNK_SIZE,
    STATUS_DOT_FONT_SIZE,
)


class Sha3UartGui(Sha3GUIBase):
    """Single-hash UART GUI with per-transaction MODE synchronization."""

    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("RVfpga SHA3 UART GUI")
        self.root.geometry("900x620")
        self.default_font_size = DEFAULT_FONT_SIZE
        self._apply_default_fonts()

        self.ser = None
        self.reader_thread = None
        self.stop_event = threading.Event()
        self.rx_queue: queue.Queue[str] = queue.Queue()
        self.pending_expected_digest = None
        self.pending_hash_mode = None
        self.pending_hash_msg = None
        self.rx_partial = bytearray()
        self.awaiting_hash_digest = False
        self.pending_digest_chars = ""
        self.pending_hash_deadline = 0.0
        self.waiting_stream_ack = False
        self.stream_ack_event = threading.Event()
        self.stream_ack_error = None
        self.poll_after_id = None
        self.tx_lock = threading.Lock()
        self.max_datastr_payload_chars = MAX_CHUNK_SIZE
        self.protocol: Optional[ProtocolHandler] = None
        
        # LIMITS negotiation state
        self.negotiated_max_chunk = None

        self._build_ui()
        self._refresh_ports()
        self.poll_after_id = self.root.after(100, self._poll_rx_queue)

    def _build_ui(self) -> None:
        frame = ttk.Frame(self.root, padding=10)
        frame.pack(fill="both", expand=True)

        conn = ttk.LabelFrame(frame, text="Connection", padding=8)
        conn.pack(fill="x")

        ttk.Label(conn, text="Port:").grid(row=0, column=0, sticky="w")
        self.port_var = tk.StringVar()
        self.port_combo = ttk.Combobox(conn, textvariable=self.port_var, width=30, state="readonly")
        self.port_combo.grid(row=0, column=1, padx=6)

        ttk.Button(conn, text="Refresh", command=self._refresh_ports).grid(row=0, column=2, padx=4)

        ttk.Label(conn, text="Baud:").grid(row=0, column=3, sticky="w", padx=(16, 0))
        self.baud_var = tk.StringVar(value=str(DEFAULT_BAUD))
        ttk.Entry(conn, textvariable=self.baud_var, width=10).grid(row=0, column=4, padx=6)

        self.connect_btn = ttk.Button(conn, text="Connect", command=self._connect)
        self.connect_btn.grid(row=0, column=5, padx=4)
        self.disconnect_btn = ttk.Button(conn, text="Disconnect", command=self._disconnect, state="disabled")
        self.disconnect_btn.grid(row=0, column=6, padx=4)

        controls = ttk.LabelFrame(frame, text="SHA3 Controls", padding=8)
        controls.pack(fill="x", pady=(10, 0))
        controls.columnconfigure(3, weight=1)

        self.mode_var = tk.StringVar(value="256")

        ttk.Label(controls, text="Input Message:").grid(row=1, column=0, sticky="w", pady=(10, 0))
        self.msg_var = tk.StringVar()
        ttk.Entry(controls, textvariable=self.msg_var, width=70).grid(row=1, column=1, columnspan=3, padx=6, pady=(10, 0), sticky="we")
        self.hash_btn = ttk.Button(controls, text="Hash Message", command=self._hash_message)
        self.hash_btn.grid(row=1, column=4, padx=4, pady=(10, 0))
        
        flow_frame = ttk.Frame(controls)
        flow_frame.grid(row=2, column=0, columnspan=5, sticky="we", pady=(8, 0))

        flow_left = ttk.Frame(flow_frame)
        flow_left.pack(side="left", fill="x", expand=True)
        ttk.Label(flow_left, text="Chunk Size (bytes):").pack(side="left")
        self.chunk_size_var = tk.StringVar(value=str(DEFAULT_CHUNK_SIZE))
        chunk_ctl = ttk.Frame(flow_left)
        chunk_ctl.pack(side="left", padx=(6, 4))
        ttk.Entry(chunk_ctl, textvariable=self.chunk_size_var, width=8).grid(row=0, column=0, rowspan=2)
        ttk.Button(chunk_ctl, text="↑", width=2, command=self._chunk_size_step_up).grid(row=0, column=1, padx=(4, 0))
        ttk.Button(chunk_ctl, text="↓", width=2, command=self._chunk_size_step_down).grid(row=1, column=1, padx=(4, 0))
        self.max_chunk_label = ttk.Label(flow_left, text="(max: ---)", foreground="gray")
        self.max_chunk_label.pack(side="left", padx=(0, 16))

        ttk.Label(flow_left, text="Timeout (s):").pack(side="left")
        self.timeout_var = tk.StringVar(value="15.0")
        ttk.Entry(flow_left, textvariable=self.timeout_var, width=8).pack(side="left", padx=(6, 16))

        ttk.Label(flow_left, text="Stream Mode:").pack(side="left")
        self.stream_mode_var = tk.StringVar(value=DEFAULT_STREAM_MODE)
        ttk.Combobox(
            flow_left,
            textvariable=self.stream_mode_var,
            values=["line", "binary"],
            width=10,
            state="readonly"
        ).pack(side="left", padx=(6, 16))

        ttk.Label(flow_left, text="SHA3 Modes:").pack(side="left")
        ttk.Combobox(
            flow_left,
            textvariable=self.mode_var,
            values=["224", "256", "384", "512"],
            width=8,
            state="readonly",
        ).pack(side="left", padx=(6, 0))

        flow_buttons = ttk.Frame(flow_frame)
        flow_buttons.pack(side="right")
        ttk.Button(flow_buttons, text="Ping", command=self._send_ping).pack(side="left", padx=4)
        ttk.Button(flow_buttons, text="Query Status", command=self._query_status).pack(side="left", padx=(4, 0))
        self.abort_btn = ttk.Button(flow_buttons, text="Abort/Reset", command=self._abort_transaction, state="disabled")
        self.abort_btn.pack(side="left", padx=(8, 0))

        digest = ttk.LabelFrame(frame, text="Digest", padding=8)
        digest.pack(fill="x", pady=(10, 0))
        self.digest_var = tk.StringVar(value="(waiting)")
        ttk.Entry(digest, textvariable=self.digest_var, state="readonly", width=120).pack(fill="x")

        expected = ttk.LabelFrame(frame, text="Expected Digest", padding=8)
        expected.pack(fill="x", pady=(10, 0))
        self.expected_var = tk.StringVar(value="(waiting)")
        ttk.Entry(expected, textvariable=self.expected_var, state="readonly", width=120).pack(fill="x")

        verify = ttk.LabelFrame(frame, text="Verification", padding=8)
        verify.pack(fill="x", pady=(10, 0))
        self.verify_var = tk.StringVar(value="(waiting)")
        ttk.Entry(verify, textvariable=self.verify_var, state="readonly", width=120).pack(fill="x")

        status = ttk.LabelFrame(frame, text="Controller Status", padding=8)
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

        logs = ttk.LabelFrame(frame, text="UART Log", padding=8)
        logs.pack(fill="both", expand=True, pady=(10, 0))
        self.log_text = tk.Text(logs, height=18, wrap="none", font=(DEFAULT_FONT_FAMILY, DEFAULT_LOG_FONT_SIZE))
        self.log_text.pack(fill="both", expand=True)
        self.log_text.tag_config("tx", foreground="#1f6feb")
        self.log_text.tag_config("rx", foreground="#0a7f2e")
        self.log_text.tag_config("error", foreground="#b00020")
        self.log_text.tag_config("sys", foreground="#666666")
        self.log_text.configure(state="disabled")
        self._update_action_states()

    def _connect(self) -> None:
        connection = self._connect_with_protocol(lambda msg: self._log(msg, "tx"))
        if not connection:
            return

        port, baud = connection
        self._log(f"[gui] Connected to {port} @ {baud}", "sys")

        self._update_action_states()

    def _disconnect(self) -> None:
        self._post_disconnect_cleanup()
        self.awaiting_hash_digest = False
        self.pending_hash_deadline = 0.0
        self._update_action_states()
        self._log("[gui] Disconnected", "sys")

    def _handle_poll_timeout(self) -> None:
        if self.awaiting_hash_digest and self.pending_hash_deadline > 0.0:
            if time.time() > self.pending_hash_deadline:
                self.awaiting_hash_digest = False
                self.verify_var.set("Timeout waiting for FPGA digest")
                self._log("[gui] Hash timeout", "error")
                self._update_action_states()

    def _handle_rx_line(self, line: str) -> None:
        if not line:
            return
        tag = "error" if line.startswith("ERR") else "rx"
        self._log(f"<- {line}", tag)

        if "OK HASH" in line.upper():
            digest = self._extract_digest(line)
            if digest:
                self.digest_var.set(digest)
                self._verify_digest_from_device(digest)
                self.awaiting_hash_digest = False
                self.pending_digest_chars = ""
                self.pending_hash_deadline = 0.0
                self._update_action_states()
            else:
                # Some UART paths may split response into multiple lines.
                self.awaiting_hash_digest = True
                self.verify_var.set("Waiting for full digest line...")
                self._accumulate_digest_chars(line)
        elif line.startswith("OK STREAM START"):
            if self.waiting_stream_ack:
                self.waiting_stream_ack = False
                self.stream_ack_error = None
                self.stream_ack_event.set()
        elif line.startswith("OK DATASTR"):
            # Protocol ACK: ignore for digest accumulation.
            pass
        elif line.startswith("OK ABORT"):
            self.verify_var.set("Transaction aborted")
            self._abort_pending_hash()
            self._log("[gui] ABORT acknowledged by FPGA", "sys")
        elif line.startswith("OK PONG") or line.startswith("PONG"):
            # Normal ping response.
            pass
        elif line.startswith("OK STATUS "):
            status_hex = line[len("OK STATUS "):].strip()
            self._parse_and_display_status(status_hex)
        elif line.startswith("OK MODE "):
            mode_val = line[len('OK MODE '):].strip()
            self.status_raw_var.set(f"mode={mode_val}")
        elif line.startswith("OK LIMITS "):
            if self.protocol:
                self.protocol.handle_limits_response(line)
        elif line.startswith("ERR"):
            if self.waiting_stream_ack:
                self.waiting_stream_ack = False
                self.stream_ack_error = line
                self.stream_ack_event.set()
            if self.awaiting_hash_digest:
                self.awaiting_hash_digest = False
                self.pending_hash_deadline = 0.0
                self.verify_var.set(line)
                self._update_action_states()
        elif self.awaiting_hash_digest:
            self._accumulate_digest_chars(line)
        
        # Let protocol handler process response for synchronous operations
        if self.protocol:
            self.protocol.handle_response_line(line)

            expected_len = self._expected_digest_len()
            if len(self.pending_digest_chars) >= expected_len:
                digest = self.pending_digest_chars[:expected_len]
                self.digest_var.set(digest)
                self._verify_digest_from_device(digest)
                self.awaiting_hash_digest = False
                self.pending_digest_chars = ""

    def _expected_digest_len(self) -> int:
        if self.pending_expected_digest is not None:
            return len(self.pending_expected_digest)
        return 64

    def _verify_digest_from_device(self, digest: str) -> None:
        if self.pending_expected_digest is None:
            self.verify_var.set("No local reference digest available")
            return

        if not re.fullmatch(r"[0-9a-f]+", digest):
            self.verify_var.set("Device digest format invalid (not hex)")
            return

        if len(digest) != len(self.pending_expected_digest):
            self.verify_var.set(
                f"Digest length mismatch (device={len(digest)}, expected={len(self.pending_expected_digest)})"
            )
            return

        if digest == self.pending_expected_digest:
            self.verify_var.set("MATCH")
        else:
            self.verify_var.set("MISMATCH")
            self._log(
                "[gui] expected="
                + self.pending_expected_digest
                + " got="
                + digest,
                "error",
            )

    def _is_stream_active(self) -> bool:
        awaiting = bool(getattr(self, "awaiting_hash_digest", False))
        deadline = float(getattr(self, "pending_hash_deadline", 0.0))
        return awaiting and time.time() <= deadline

    def _is_connected(self) -> bool:
        return getattr(self, "ser", None) is not None

    def _update_action_states(self) -> None:
        """Enable/disable buttons based on connection and transaction state."""
        if not hasattr(self, "hash_btn"):
            return
        active_txn = self._is_stream_active()
        connected = self._is_connected()
        can_hash = connected and (not active_txn)
        self.hash_btn.configure(state="normal" if can_hash else "disabled")
        if hasattr(self, "abort_btn"):
            self.abort_btn.configure(state="normal" if connected else "disabled")

    def _send_ping(self) -> None:
        if self._is_stream_active():
            self._log("[gui] Busy hashing; wait for digest before PING", "sys")
            return
        if not self.protocol:
            self._log("[gui] Not connected", "error")
            return
        self.protocol.send_line("PING")

    def _query_status(self) -> None:
        if self._is_stream_active():
            self._log("[gui] Busy hashing; wait for digest before STATUS", "sys")
            return
        if not self.protocol:
            self._log("[gui] Not connected", "error")
            return
        self.protocol.send_line("STATUS")

    def _abort_transaction(self) -> None:
        if not self._is_connected() or not self.protocol:
            return
        self.protocol.send_line(CMD_ABORT)
        self._abort_pending_hash()
        self.verify_var.set("Abort requested...")
        self._log("[gui] ABORT sent", "sys")

    def _hash_message(self) -> None:
        if not self._is_connected():
            self._log("[gui] Not connected; cannot hash", "error")
            self._update_action_states()
            return
        if self._is_stream_active():
            self._log("[gui] Hash already in progress", "sys")
            self._update_action_states()
            return
        msg = self.msg_var.get()
        mode = self.mode_var.get().strip()
        try:
            self.pending_expected_digest = self._compute_expected_digest(mode, msg)
        except ValueError as exc:
            messagebox.showerror("Mode", str(exc))
            return

        self.pending_hash_mode = mode
        self.pending_hash_msg = msg
        self.awaiting_hash_digest = True
        self.pending_digest_chars = ""
        timeout_s = self._get_timeout_seconds()
        self.pending_hash_deadline = time.time() + timeout_s
        self.expected_var.set(self.pending_expected_digest)
        self.verify_var.set(f"Setting mode SHA3-{mode}...")
        self._update_action_states()
        # Send using STREAM/DATASTR in a background thread to avoid blocking UI.
        # Firmware auto-finalizes once the declared byte length is fully received.
        def stream_worker():
            payload = msg
            try:
                if "\n" in payload or "\r" in payload:
                    self.root.after(0, lambda: self.verify_var.set("Input contains newline/carriage return; unsupported by DATASTR"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                if not self.protocol:
                    self.root.after(0, lambda: self.verify_var.set("Protocol handler not initialized"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                mode_ok = self.protocol.wait_for_response(
                    lambda m=mode: self.protocol.send_line(f"MODE {m}"),
                    timeout=timeout_s,
                )
                if not mode_ok:
                    self.root.after(0, lambda: self.verify_var.set(f"Failed to set mode SHA3-{mode} (timeout)"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                if self.protocol.last_response is None:
                    self.root.after(0, lambda: self.verify_var.set(f"Failed to set mode SHA3-{mode} (no response)"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                mode_resp_type = self.protocol.last_response.get("type")
                if mode_resp_type == "error":
                    mode_err = self.protocol.last_response.get("data", "unknown error")
                    self.root.after(0, lambda e=mode_err: self.verify_var.set(f"Failed to set mode: {e}"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                if mode_resp_type != "mode":
                    self.root.after(0, lambda t=mode_resp_type: self.verify_var.set(f"Unexpected MODE response: {t}"))
                    self.root.after(0, self._abort_pending_hash)
                    return

                self.root.after(0, lambda: self.verify_var.set("Waiting for FPGA digest..."))

                chunk_size = self._effective_chunk_size()
                
                # Update stream mode before each operation (allows mode changes without reconnect)
                self.protocol.set_stream_mode(self.stream_mode_var.get())
                
                # Use protocol handler for proper DATASTR ACK waiting
                success, error_msg = self.protocol.send_stream_data(
                    payload,
                    chunk_size,
                    timeout=timeout_s,
                    abort_check=lambda: False  # GUI doesn't have test_stop_event
                )
                
                if not success:
                    self.root.after(0, lambda e=error_msg: self.verify_var.set(f"Streaming failed: {e}"))
                    self.root.after(0, self._abort_pending_hash)
            except Exception as exc:  # pylint: disable=broad-except
                self._log(f"[gui] streaming error: {exc}", "error")
                self.root.after(0, lambda: self.verify_var.set(f"Streaming error: {exc}"))
                self.root.after(0, self._abort_pending_hash)

        threading.Thread(target=stream_worker, daemon=True).start()

    def _abort_pending_hash(self) -> None:
        self.awaiting_hash_digest = False
        self.waiting_stream_ack = False
        self.pending_hash_deadline = 0.0
        self._update_action_states()

    def _get_timeout_seconds(self) -> float:
        try:
            value = float(self.timeout_var.get())
            if value < 1.0:
                return 1.0
            return value
        except Exception:
            return 15.0

    def _log(self, msg: str, tag: str = "sys") -> None:
        self.log_text.configure(state="normal")
        self.log_text.insert("end", msg + "\n", tag)
        self.log_text.see("end")
        self.log_text.configure(state="disabled")


def main() -> None:
    root = tk.Tk()
    app = Sha3UartGui(root)
    root.protocol("WM_DELETE_WINDOW", app._on_close)
    root.mainloop()


if __name__ == "__main__":
    main()
