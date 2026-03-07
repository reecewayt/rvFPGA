#!/usr/bin/env python3
"""Simple GUI for SHA3 UART interface running on RVfpga."""

import queue
import threading
import time
import tkinter as tk
from tkinter import ttk, messagebox
import hashlib
import re

import serial
import serial.tools.list_ports


class Sha3UartGui:
    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("RVfpga SHA3 UART GUI")
        self.root.geometry("900x620")

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
        self.poll_after_id = None

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
        self.baud_var = tk.StringVar(value="115200")
        ttk.Entry(conn, textvariable=self.baud_var, width=10).grid(row=0, column=4, padx=6)

        self.connect_btn = ttk.Button(conn, text="Connect", command=self._connect)
        self.connect_btn.grid(row=0, column=5, padx=4)
        self.disconnect_btn = ttk.Button(conn, text="Disconnect", command=self._disconnect, state="disabled")
        self.disconnect_btn.grid(row=0, column=6, padx=4)

        controls = ttk.LabelFrame(frame, text="SHA3 Controls", padding=8)
        controls.pack(fill="x", pady=(10, 0))

        self.mode_var = tk.StringVar(value="256")
        ttk.Label(controls, text="Variant:").grid(row=0, column=0, sticky="w")
        ttk.Combobox(
            controls,
            textvariable=self.mode_var,
            values=["224", "256", "384", "512"],
            width=8,
            state="readonly",
        ).grid(row=0, column=1, padx=6)

        ttk.Button(controls, text="Set Mode", command=self._set_mode).grid(row=0, column=2, padx=4)
        ttk.Button(controls, text="Query Status", command=self._query_status).grid(row=0, column=3, padx=4)
        ttk.Button(controls, text="Ping", command=lambda: self._send_line("PING")).grid(row=0, column=4, padx=4)

        ttk.Label(controls, text="Input Message:").grid(row=1, column=0, sticky="w", pady=(10, 0))
        self.msg_var = tk.StringVar()
        ttk.Entry(controls, textvariable=self.msg_var, width=70).grid(row=1, column=1, columnspan=3, padx=6, pady=(10, 0), sticky="we")
        ttk.Button(controls, text="Hash Message", command=self._hash_message).grid(row=1, column=4, padx=4, pady=(10, 0))

        digest = ttk.LabelFrame(frame, text="Digest", padding=8)
        digest.pack(fill="x", pady=(10, 0))
        self.digest_var = tk.StringVar(value="(waiting)")
        ttk.Entry(digest, textvariable=self.digest_var, state="readonly", width=120).pack(fill="x")

        expected = ttk.LabelFrame(frame, text="Expected Digest (Python hashlib)", padding=8)
        expected.pack(fill="x", pady=(10, 0))
        self.expected_var = tk.StringVar(value="(waiting)")
        ttk.Entry(expected, textvariable=self.expected_var, state="readonly", width=120).pack(fill="x")

        verify = ttk.LabelFrame(frame, text="Verification", padding=8)
        verify.pack(fill="x", pady=(10, 0))
        self.verify_var = tk.StringVar(value="(waiting)")
        ttk.Entry(verify, textvariable=self.verify_var, state="readonly", width=120).pack(fill="x")

        status = ttk.LabelFrame(frame, text="Controller Status", padding=8)
        status.pack(fill="x", pady=(10, 0))
        self.status_var = tk.StringVar(value="(waiting)")
        ttk.Entry(status, textvariable=self.status_var, state="readonly", width=120).pack(fill="x")

        logs = ttk.LabelFrame(frame, text="UART Log", padding=8)
        logs.pack(fill="both", expand=True, pady=(10, 0))
        self.log_text = tk.Text(logs, height=18, wrap="none")
        self.log_text.pack(fill="both", expand=True)
        self.log_text.configure(state="disabled")

    def _refresh_ports(self) -> None:
        ports = [p.device for p in serial.tools.list_ports.comports()]
        self.port_combo["values"] = ports
        if ports and not self.port_var.get():
            self.port_var.set(ports[0])

    def _connect(self) -> None:
        port = self.port_var.get().strip()
        if not port:
            messagebox.showerror("Connect", "Select a serial port first")
            return

        try:
            baud = int(self.baud_var.get().strip())
            self.ser = serial.Serial(port, baudrate=baud, timeout=0.1)
        except Exception as exc:  # pylint: disable=broad-except
            messagebox.showerror("Connect", f"Failed to open serial port:\n{exc}")
            return

        self.stop_event.clear()
        self.reader_thread = threading.Thread(target=self._reader_loop, daemon=True)
        self.reader_thread.start()

        self.connect_btn.configure(state="disabled")
        self.disconnect_btn.configure(state="normal")
        self._log(f"[gui] Connected to {port} @ {baud}")

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
        self._log("[gui] Disconnected")
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
        self._log(f"<- {line}")

        if "OK HASH" in line.upper():
            digest = self._extract_digest(line)
            if digest:
                self.digest_var.set(digest)
                self._verify_digest_from_device(digest)
                self.awaiting_hash_digest = False
                self.pending_digest_chars = ""
            else:
                # Some UART paths may split response into multiple lines.
                self.awaiting_hash_digest = True
                self.verify_var.set("Waiting for full digest line...")
                self._accumulate_digest_chars(line)
        elif line.startswith("OK STATUS "):
            self.status_var.set(line[len("OK STATUS "):].strip())
        elif line.startswith("OK MODE "):
            self.status_var.set(f"mode={line[len('OK MODE '):].strip()}")
        elif self.awaiting_hash_digest:
            self._accumulate_digest_chars(line)

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
                + digest
            )

    def _send_line(self, cmd: str) -> None:
        if not self.ser:
            messagebox.showerror("UART", "Not connected")
            return
        try:
            self.ser.write((cmd + "\n").encode())
            self._log(f"-> {cmd}")
        except Exception as exc:  # pylint: disable=broad-except
            messagebox.showerror("UART", f"Failed to send:\n{exc}")

    def _set_mode(self) -> None:
        self._send_line(f"MODE {self.mode_var.get().strip()}")

    def _query_status(self) -> None:
        self._send_line("STATUS")

    def _hash_message(self) -> None:
        msg = self.msg_var.get()
        mode = self.mode_var.get().strip()
        try:
            self.pending_expected_digest = self._compute_expected_digest(mode, msg)
        except ValueError as exc:
            messagebox.showerror("Mode", str(exc))
            return

        self.pending_hash_mode = mode
        self.pending_hash_msg = msg
        self.awaiting_hash_digest = False
        self.pending_digest_chars = ""
        self.pending_hash_deadline = time.time() + 5.0
        self.expected_var.set(self.pending_expected_digest)
        self.verify_var.set("Waiting for FPGA digest...")
        self._send_line(f"HASH {msg}")

    def _log(self, msg: str) -> None:
        self.log_text.configure(state="normal")
        self.log_text.insert("end", msg + "\n")
        self.log_text.see("end")
        self.log_text.configure(state="disabled")


def main() -> None:
    root = tk.Tk()
    app = Sha3UartGui(root)
    root.protocol("WM_DELETE_WINDOW", app._on_close)
    root.mainloop()


if __name__ == "__main__":
    main()
