#!/usr/bin/env python3
"""Simple GUI for SHA3 UART interface running on RVfpga."""

import queue
import threading
import time
import tkinter as tk
import tkinter.font as tkfont
from tkinter import ttk, messagebox
import hashlib
import re
from typing import Optional

import serial
import serial.tools.list_ports
from sha3_uart_protocol import ProtocolHandler
from sha3_uart_config import (
    CMD_ABORT,
    DEFAULT_BAUD,
    DEFAULT_CHUNK_SIZE,
    DEFAULT_FONT_FAMILY,
    DEFAULT_FONT_SIZE,
    DEFAULT_LOG_FONT_SIZE,
    DEFAULT_STREAM_MODE,
    MAX_CHUNK_SIZE,
    MIN_CHUNK_SIZE,
    RESP_DATASTR_ACK,
    RESP_STREAM_START,
    STATUS_DOT_FONT_SIZE,
    compute_max_chunk_size,
)


class Sha3UartGui:
    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("RVfpga SHA3 UART GUI")
        self.root.geometry("900x620")
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
        self.waiting_limits_response = False
        self.limits_event = threading.Event()

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
        ttk.Button(flow_buttons, text="Set Mode", command=self._set_mode).pack(side="left", padx=(0, 4))
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

    def _refresh_ports(self) -> None:
        ports = [p.device for p in serial.tools.list_ports.comports()]
        self.port_combo["values"] = ports
        if ports and not self.port_var.get():
            self.port_var.set(ports[0])

    def _apply_default_fonts(self) -> None:
        """Apply shared default font sizing for stable UI layout."""
        for name in ("TkDefaultFont", "TkTextFont", "TkMenuFont", "TkHeadingFont"):
            try:
                tkfont.nametofont(name).configure(size=DEFAULT_FONT_SIZE)
            except tk.TclError:
                pass

    def _connect(self) -> None:
        port = self.port_var.get().strip()
        if not port:
            messagebox.showerror("Connect", "Select a serial port first")
            return

        try:
            baud = int(self.baud_var.get().strip())
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.1)
            self.protocol = ProtocolHandler(
                self.ser, 
                self.tx_lock,
                log_callback=lambda msg: self._log(msg, "tx"),
                stream_mode=self.stream_mode_var.get()
            )
        except Exception as exc:  # pylint: disable=broad-except
            messagebox.showerror("Connect", f"Failed to open serial port:\n{exc}")
            return

        self.stop_event.clear()
        self.reader_thread = threading.Thread(target=self._reader_loop, daemon=True)
        self.reader_thread.start()

        self.connect_btn.configure(state="disabled")
        self.disconnect_btn.configure(state="normal")
        self._log(f"[gui] Connected to {port} @ {baud}", "sys")
        
        # Query LIMITS from firmware to negotiate max chunk size
        self._query_limits()
        
        self._update_action_states()

    def _disconnect(self) -> None:
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
        self.awaiting_hash_digest = False
        self.pending_hash_deadline = 0.0
        self.negotiated_max_chunk = None
        self.protocol = None
        self._update_action_states()
        self._log("[gui] Disconnected", "sys")
        self.rx_partial.clear()

    def _reader_loop(self) -> None:
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
            except Exception as exc:  # pylint: disable=broad-except
                self.rx_queue.put(f"[gui] Serial read error: {exc}")
                break

    def _poll_rx_queue(self) -> None:
        while True:
            try:
                line = self.rx_queue.get_nowait()
            except queue.Empty:
                break
            self._handle_rx_line(line)

        if self.awaiting_hash_digest and self.pending_hash_deadline > 0.0:
            if time.time() > self.pending_hash_deadline:
                self.awaiting_hash_digest = False
                self.verify_var.set("Timeout waiting for FPGA digest")
                self._log("[gui] Hash timeout", "error")
                self._update_action_states()

        self.poll_after_id = self.root.after(100, self._poll_rx_queue)

    def _on_close(self) -> None:
        if self.poll_after_id is not None:
            try:
                self.root.after_cancel(self.poll_after_id)
            except Exception:
                pass
            self.poll_after_id = None

        self._disconnect()
        self.root.quit()
        self.root.destroy()

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
            self._parse_limits_response(line)
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

    def _extract_digest(self, line: str) -> str | None:
        expected_len = self._expected_digest_len()

        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            tail = line[idx + len("OK HASH"):]
        else:
            tail = line

        # Keep only hex chars to tolerate noise like spaces/commas/prefix text.
        hex_only = "".join(ch for ch in tail.lower() if ch in "0123456789abcdef")
        if len(hex_only) >= expected_len:
            return hex_only[:expected_len]

        # Fallback: look for a contiguous digest-length hex token.
        m = re.search(rf"([0-9a-fA-F]{{{expected_len}}})", line)
        if m:
            return m.group(1).lower()

        return None

    def _accumulate_digest_chars(self, line: str) -> None:
        expected_len = self._expected_digest_len()

        up = line.upper()
        if "OK HASH" in up:
            idx = up.find("OK HASH")
            line = line[idx + len("OK HASH"):]

        token_matches = re.findall(r"[0-9a-fA-F]+", line)
        if not token_matches:
            return

        # Prefer longest token; SHA3 digest line should dominate.
        token = max(token_matches, key=len).lower()
        if len(token) < 8:
            return

        self.pending_digest_chars += token
        if len(self.pending_digest_chars) > expected_len * 2:
            # Prevent unbounded growth if garbage is received.
            self.pending_digest_chars = self.pending_digest_chars[-expected_len * 2:]

    def _compute_expected_digest(self, mode: str, msg: str) -> str:
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

    def _send_line(self, cmd: str) -> None:
        if not self.ser or not self.protocol:
            messagebox.showerror("UART", "Not connected")
            return
        try:
            self.protocol.send_line(cmd)
        except Exception as exc:  # pylint: disable=broad-except
            messagebox.showerror("UART", f"Failed to send:\n{exc}")

    def _query_limits(self) -> None:
        """Query firmware for UART command buffer limits and negotiate max chunk size."""
        def limits_worker():
            try:
                self.waiting_limits_response = True
                self.limits_event.clear()
                self._send_line("LIMITS")
                
                # Wait for response with timeout
                if not self.limits_event.wait(timeout=2.0):
                    self.root.after(0, lambda: self._log("[gui] LIMITS query timeout; using default max", "sys"))
                    self.negotiated_max_chunk = MAX_CHUNK_SIZE
            except Exception as exc:
                self.root.after(0, lambda e=exc: self._log(f"[gui] LIMITS query failed: {e}; using default", "sys"))
                self.negotiated_max_chunk = MAX_CHUNK_SIZE
            finally:
                self.waiting_limits_response = False
        
        threading.Thread(target=limits_worker, daemon=True).start()

    def _parse_limits_response(self, line: str) -> None:
        """Parse 'OK LIMITS uart_cmd_max=N datastr_payload_max=M' and compute negotiated limit."""
        try:
            datastr_match = re.search(r'datastr_payload_max=(\d+)', line)
            uart_match = re.search(r'uart_cmd_max=(\d+)', line)

            if datastr_match:
                negotiated = int(datastr_match.group(1))
            elif uart_match:
                uart_cmd_max = int(uart_match.group(1))
                negotiated = compute_max_chunk_size(uart_cmd_max)
            else:
                negotiated = None

            if negotiated is not None:
                self.negotiated_max_chunk = negotiated
                self._log(f"[gui] LIMITS negotiated: chunk_max={negotiated}", "sys")
                
                # Update UI to show max chunk size
                self.root.after(0, lambda: self.max_chunk_label.config(text=f"(max: {negotiated})"))
                
                if self.waiting_limits_response:
                    self.limits_event.set()
            else:
                self._log("[gui] LIMITS response format unrecognized; using default", "sys")
                self.negotiated_max_chunk = MAX_CHUNK_SIZE
                self.root.after(0, lambda: self.max_chunk_label.config(text=f"(max: {MAX_CHUNK_SIZE})"))
        except Exception as exc:
            self._log(f"[gui] Failed to parse LIMITS: {exc}; using default", "sys")
            self.negotiated_max_chunk = MAX_CHUNK_SIZE
            self.root.after(0, lambda: self.max_chunk_label.config(text=f"(max: {MAX_CHUNK_SIZE})"))

    def _effective_chunk_size(self) -> int:
        try:
            chunk_size = int(self.chunk_size_var.get())
        except Exception:
            chunk_size = DEFAULT_CHUNK_SIZE

        if chunk_size < MIN_CHUNK_SIZE:
            chunk_size = DEFAULT_CHUNK_SIZE

        # Clamp to negotiated firmware limit (if available)
        if self.negotiated_max_chunk is not None:
            if chunk_size > self.negotiated_max_chunk:
                self._log(
                    f"[gui] chunk_size={chunk_size} exceeds negotiated max={self.negotiated_max_chunk}; clamping",
                    "sys",
                )
                chunk_size = self.negotiated_max_chunk
        else:
            # Fallback to fixed max if LIMITS not negotiated
            if chunk_size > self.max_datastr_payload_chars:
                self._log(
                    f"[gui] chunk_size={chunk_size} exceeds datastr_max={self.max_datastr_payload_chars}; clamping",
                    "sys",
                )
                chunk_size = self.max_datastr_payload_chars

        if chunk_size < MIN_CHUNK_SIZE:
            chunk_size = MIN_CHUNK_SIZE
        return chunk_size

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



    def _is_stream_active(self) -> bool:
        awaiting = bool(getattr(self, "awaiting_hash_digest", False))
        deadline = float(getattr(self, "pending_hash_deadline", 0.0))
        return awaiting and time.time() <= deadline

    def _is_connected(self) -> bool:
        return getattr(self, "ser", None) is not None

    def _update_action_states(self) -> None:
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
        self._send_line("PING")

    def _set_mode(self) -> None:
        if self._is_stream_active():
            self._log("[gui] Busy hashing; wait for digest before MODE", "sys")
            return
        self._send_line(f"MODE {self.mode_var.get().strip()}")

    def _query_status(self) -> None:
        if self._is_stream_active():
            self._log("[gui] Busy hashing; wait for digest before STATUS", "sys")
            return
        self._send_line("STATUS")

    def _abort_transaction(self) -> None:
        if not self._is_connected():
            return
        self._send_line(CMD_ABORT)
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
        self.verify_var.set("Waiting for FPGA digest...")
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
            
            # Update raw display
            self.status_raw_var.set(status_line.strip())
            
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
            
        except (ValueError, IndexError) as exc:
            self.status_raw_var.set(f"Parse error: {exc}")
    
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
