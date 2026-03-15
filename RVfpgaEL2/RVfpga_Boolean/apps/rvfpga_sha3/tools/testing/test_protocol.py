#!/usr/bin/env python3
"""
test_protocol.py - Unified protocol-focused tests for SHA3 UART host tooling.

    Authors: Copilot and Truong Le (tnl3@pdx.edu)

What is tested:
- Stress-test sender behavior for STREAM/DATASTR/END sequence correctness.
- GUI sender behavior for protocol ordering and payload validation.
- Cross-tool consistency (stress and GUI produce compatible stream structure).
- ProtocolHandler binary mode behavior (STREAM BINARY, raw-byte TX, END path).

How it is tested:
- Uses lightweight mock objects (MockVar/MockSerial/MockProtocol) to avoid
    hardware dependency and to capture exact transmitted command sequences.
- Calls selected class methods directly on minimally constructed instances to
    isolate protocol logic from full Tk UI lifecycle.
- Validates command ordering, length-prefix formatting, newline rejection,
    digest expectations, and binary-mode error propagation.

Test classes:
- TestStressTestProtocol: stress sender path unit checks.
- TestGuiStreamProtocol: GUI sender path unit checks.
- TestProtocolIntegration: cross-implementation parity checks.
- TestProtocolHandlerBinaryMode: shared ProtocolHandler binary-mode checks.

Note: This code was generated using Copilot using prompting.

"""
import hashlib
import random
import string
import sys
import threading
import time
import unittest
from pathlib import Path

# Allow imports from parent tools/ directory when running from tools/testing/.
TOOLS_DIR = Path(__file__).resolve().parents[1]
if str(TOOLS_DIR) not in sys.path:
    sys.path.insert(0, str(TOOLS_DIR))

# Import the classes we're testing
from sha3_stress_test import Sha3StressTest
from sha3_uart_gui import Sha3UartGui
from sha3_uart_protocol import ProtocolHandler
from sha3_uart_config import STREAM_MODE_BINARY


class MockVar:
    """Minimal tkinter-like variable mock implementing get/set."""
    def __init__(self, value: str):
        self._value = value
    
    def get(self) -> str:
        return self._value
    
    def set(self, value: str) -> None:
        self._value = value


class MockSerial:
    """Serial-port mock capturing raw writes and flush operations."""

    def __init__(self):
        self.writes: list[bytes] = []
        self.flush_count = 0

    def write(self, data: bytes) -> int:
        self.writes.append(data)
        return len(data)

    def flush(self) -> None:
        self.flush_count += 1


class MockMetrics:
    """Single-operation metrics placeholder for hash-rate assertions."""

    def __init__(self, rate: float):
        self.hash_rate_bytes_sec = rate


class MockMetricsAccumulator:
    """Minimal subset of metrics-accumulator API consumed by app code."""

    def __init__(self):
        self.operation_count = 0
        self.last_metrics: MockMetrics | None = None

    def get_last_operation_metrics(self):
        return self.last_metrics


class MockProtocol:
    """Protocol mock emitting deterministic line/binary command sequences."""

    def __init__(self, sent: list):
        self.sent = sent
        self.stream_mode = "line"
        self.last_response = None
        self.metrics_accumulator = MockMetricsAccumulator()

    def set_stream_mode(self, mode: str) -> None:
        self.stream_mode = mode

    def send_stream_data(self, payload: str, chunk_size: int, timeout: float,
                         abort_check=None, progress_callback=None):
        if abort_check and abort_check():
            return False, "ABORTED"

        payload_bytes = payload.encode("utf-8")
        total_len = len(payload_bytes)

        if self.stream_mode == "binary":
            self.sent.append(f"STREAM {total_len} BINARY")
            self.sent.append(payload_bytes)
            if progress_callback:
                progress_callback(total_len)
        else:
            self.sent.append(f"STREAM {total_len}")
            idx = 0
            while idx < len(payload):
                take = min(chunk_size, len(payload) - idx)
                chunk = payload[idx:idx + take]
                self.sent.append(f"DATASTR {len(chunk.encode('utf-8'))}:{chunk}")
                idx += take
                if progress_callback:
                    progress_callback(min(total_len, idx))

        self.sent.append("END")

        digest = hashlib.sha3_256(payload_bytes).hexdigest()
        self.last_response = {"type": "hash", "data": digest}
        self.metrics_accumulator.operation_count += 1
        self.metrics_accumulator.last_metrics = MockMetrics(float(max(1, total_len)))
        return True, ""


class TestStressTestProtocol(unittest.TestCase):
    """Validates stress-tool protocol sequencing and payload constraints."""
    
    def setUp(self):
        """Create a minimal stress test instance for testing."""
        self.inst = object.__new__(Sha3StressTest)
        self.inst.chunk_size_var = MockVar("10")
        self.inst.stream_mode_var = MockVar("line")
        self.inst.test_stop_event = threading.Event()
        self.inst.bytes_sent_before_current = 0
        self.inst.bytes_total = 0
        self.inst.bytes_progress_var = MockVar("")
        self.inst.root = type('Root', (object,), {
            'after': lambda self, delay, fn=None: fn() if fn else None
        })()
        self.inst._effective_chunk_size = lambda: int(self.inst.chunk_size_var.get())
        self.sent = []
        self.inst.protocol = MockProtocol(self.sent)
    
    def test_basic_message(self):
        """Test streaming a basic message."""
        msg = "Hello, SHA3!"
        ok, err, actual, _ = Sha3StressTest._run_single_test(
            self.inst, "256", msg, 2.0
        )
        expected = hashlib.sha3_256(msg.encode("utf-8")).hexdigest()
        
        self.assertTrue(ok, f"Test failed: {err}")
        self.assertIsNone(err)
        self.assertEqual(actual, expected)
    
    def test_random_message(self):
        """Test streaming a random message."""
        msg = "".join(random.choice(string.ascii_letters) for _ in range(123))
        ok, err, actual, _ = Sha3StressTest._run_single_test(
            self.inst, "256", msg, 2.0
        )
        expected = hashlib.sha3_256(msg.encode("utf-8")).hexdigest()
        
        self.assertTrue(ok, f"Test failed: {err}")
        self.assertEqual(actual, expected)
    
    def test_protocol_sequence(self):
        """Test that protocol follows correct sequence."""
        msg = "test"
        Sha3StressTest._run_single_test(self.inst, "256", msg, 2.0)
        
        # Verify command sequence
        self.assertTrue(any(c.startswith("STREAM") for c in self.sent))
        self.assertTrue(any(c.startswith("DATASTR") for c in self.sent))
        self.assertIn("END", self.sent)
        
        # Verify STREAM comes first
        stream_idx = next(i for i, c in enumerate(self.sent) if c.startswith("STREAM"))
        datastr_idx = next(i for i, c in enumerate(self.sent) if c.startswith("DATASTR"))
        end_idx = self.sent.index("END")
        
        self.assertLess(stream_idx, datastr_idx)
        self.assertLess(datastr_idx, end_idx)
    
    def test_length_prefix_format(self):
        """Test that DATASTR commands use length prefix format."""
        msg = "test123"
        Sha3StressTest._run_single_test(self.inst, "256", msg, 2.0)
        
        datastr_cmds = [c for c in self.sent if c.startswith("DATASTR")]
        for cmd in datastr_cmds:
            # Format should be: DATASTR <len>:<chunk>
            self.assertIn(":", cmd, "DATASTR should have length prefix")
            body = cmd.split(" ", 1)[1]
            length_str, _, chunk = body.partition(":")
            self.assertTrue(length_str.isdigit(), "Length should be numeric")
            self.assertEqual(int(length_str), len(chunk))
    
    def test_newline_rejection(self):
        """Test that messages with newlines are rejected."""
        msg = "line1\nline2"
        ok, err, actual, _ = Sha3StressTest._run_single_test(
            self.inst, "256", msg, 2.0
        )
        
        self.assertFalse(ok)
        self.assertIn("newline", err.lower())


class TestGuiStreamProtocol(unittest.TestCase):
    """Validates GUI hash-send protocol behavior without real UART hardware."""
    
    def setUp(self):
        """Create a minimal GUI instance for testing."""
        self.inst = object.__new__(Sha3UartGui)
        self.inst.chunk_size_var = MockVar("10")
        self.inst.stream_mode_var = MockVar("line")
        self.inst.timeout_var = MockVar("2.0")
        self.inst.msg_var = MockVar("test_message")
        self.inst.mode_var = MockVar("256")
        self.inst.ser = object()  # Mock serial object
        self.inst.tx_lock = threading.Lock()
        self.inst.negotiated_max_chunk = None
        self.inst.max_datastr_payload_chars = 16384
        
        # Mock attributes for handshaking
        self.inst.stream_ack_event = threading.Event()
        self.inst.stream_ack_error = None
        self.inst.waiting_stream_ack = False
        self.inst.awaiting_hash_digest = False
        self.inst.pending_digest_chars = ""
        self.inst.pending_hash_deadline = 0.0
        
        # Mock UI attributes
        self.inst.expected_var = MockVar("")
        self.inst.verify_var = MockVar("")
        self.inst.pending_expected_digest = None
        self.inst.pending_hash_mode = None
        self.inst.pending_hash_msg = None
        self.inst._update_action_states = lambda: None
        
        # Mock root for after() calls
        self.inst.root = type('Root', (object,), {
            'after': lambda self, delay, fn=None: fn() if fn else None
        })()
        
        self.sent = []
        self.log_messages = []
        self.inst.protocol = MockProtocol(self.sent)
        self.inst._log = lambda msg, tag='sys': self.log_messages.append(msg)
    
    def test_basic_message(self):
        """Test GUI sends correct sequence for basic message."""
        self.inst.msg_var = MockVar("hello_world")
        self.inst._hash_message()
        time.sleep(0.1)  # Let background thread complete
        
        # Verify sequence
        self.assertTrue(any(isinstance(c, str) and c.startswith("STREAM") for c in self.sent))
        self.assertTrue(any(isinstance(c, str) and c.startswith("DATASTR") for c in self.sent))
        self.assertIn("END", self.sent)
    
    def test_empty_message(self):
        """Test GUI handles empty message correctly."""
        self.inst.msg_var = MockVar("")
        self.inst._hash_message()
        time.sleep(0.1)
        
        # Should send STREAM 0 and END
        self.assertIn("STREAM 0", self.sent[:2])
        self.assertIn("END", self.sent)
    
    def test_stream_ack_wait(self):
        """Test GUI waits for STREAM ACK before sending chunks."""
        self.inst.msg_var = MockVar("test")
        self.inst._hash_message()
        time.sleep(0.1)
        
        # Find indices
        stream_idx = next(i for i, c in enumerate(self.sent) if isinstance(c, str) and c.startswith("STREAM"))
        datastr_cmds = [(i, c) for i, c in enumerate(self.sent) if isinstance(c, str) and c.startswith("DATASTR")]
        
        # All DATASTR should come after STREAM
        for idx, _ in datastr_cmds:
            self.assertGreater(idx, stream_idx)
    
    def test_newline_rejection(self):
        """Test GUI rejects messages with newlines."""
        self.inst.msg_var = MockVar("line1\nline2")
        self.inst._hash_message()
        time.sleep(0.1)
        
        # Should not send DATASTR
        datastr_cmds = [c for c in self.sent if c.startswith("DATASTR")]
        self.assertEqual(len(datastr_cmds), 0)


class TestProtocolIntegration(unittest.TestCase):
    """Checks parity between stress and GUI stream command generation."""
    
    def test_stress_and_gui_produce_same_sequence(self):
        """Verify stress tester and GUI use same protocol."""
        msg = "test_message"
        
        # Setup stress tester
        stress = object.__new__(Sha3StressTest)
        stress.chunk_size_var = MockVar("10")
        stress.stream_mode_var = MockVar("line")
        stress.test_stop_event = threading.Event()
        stress.bytes_sent_before_current = 0
        stress.bytes_total = 0
        stress.bytes_progress_var = MockVar("")
        stress.root = type('Root', (object,), {'after': lambda self, delay, fn=None: fn() if fn else None})()
        stress._effective_chunk_size = lambda: int(stress.chunk_size_var.get())
        stress_sent = []
        stress.protocol = MockProtocol(stress_sent)
        Sha3StressTest._run_single_test(stress, "256", msg, 2.0)
        
        # Setup GUI
        gui = object.__new__(Sha3UartGui)
        gui.chunk_size_var = MockVar("10")
        gui.msg_var = MockVar(msg)
        gui.mode_var = MockVar("256")
        gui.stream_mode_var = MockVar("line")
        gui.timeout_var = MockVar("2.0")
        gui.ser = object()
        gui.tx_lock = threading.Lock()
        gui.negotiated_max_chunk = None
        gui.max_datastr_payload_chars = 16384
        gui.stream_ack_event = threading.Event()
        gui.stream_ack_error = None
        gui.waiting_stream_ack = False
        gui.awaiting_hash_digest = False
        gui.pending_digest_chars = ""
        gui.pending_hash_deadline = 0.0
        gui.expected_var = MockVar("")
        gui.verify_var = MockVar("")
        gui.pending_expected_digest = None
        gui.pending_hash_mode = None
        gui.pending_hash_msg = None
        gui._update_action_states = lambda: None
        gui.root = type('R', (object,), {'after': lambda s, d, fn=None: fn() if fn else None})()
        gui_sent = []
        gui.protocol = MockProtocol(gui_sent)
        gui._log = lambda m, t='sys': None
        gui._hash_message()
        time.sleep(0.1)
        
        # Both should follow same sequence structure
        self.assertTrue(stress_sent[0].startswith("STREAM"))
        self.assertTrue(gui_sent[0].startswith("STREAM"))
        
        stress_datastr = [c for c in stress_sent if c.startswith("DATASTR")]
        gui_datastr = [c for c in gui_sent if c.startswith("DATASTR")]
        
        # Should have same number of chunks (same message, same chunk size)
        self.assertEqual(len(stress_datastr), len(gui_datastr))
        
        # Both should end with END
        self.assertEqual(stress_sent[-1], "END")
        self.assertEqual(gui_sent[-1], "END")


class TestProtocolHandlerBinaryMode(unittest.TestCase):
    """Verifies binary STREAM behavior and binary-path error propagation."""

    def setUp(self):
        self.serial = MockSerial()
        self.protocol = ProtocolHandler(
            self.serial,
            threading.Lock(),
            stream_mode=STREAM_MODE_BINARY,
        )

    def test_binary_mode_sequence_and_raw_bytes(self):
        """Binary mode sends STREAM BINARY, raw bytes, then END."""
        responses = iter(["stream_start", "hash"])

        def fake_wait_for_response(send_func, timeout):
            send_func()
            response_type = next(responses)
            if response_type == "stream_start":
                self.protocol.last_response = {
                    "type": "stream_start",
                    "data": "OK STREAM BINARY ready=5",
                }
            else:
                self.protocol.last_response = {
                    "type": "hash",
                    "data": "a" * 64,
                }
            return True

        self.protocol.wait_for_response = fake_wait_for_response

        success, error = self.protocol.send_stream_data("hello", chunk_size=4, timeout=1.0)

        self.assertTrue(success)
        self.assertEqual(error, "")
        self.assertGreaterEqual(len(self.serial.writes), 3)
        self.assertEqual(self.serial.writes[0], b"STREAM 5 BINARY\n")
        self.assertEqual(self.serial.writes[1], b"hello")
        self.assertEqual(self.serial.writes[-1], b"END\n")

    def test_binary_stream_start_error_is_reported(self):
        """Errors returned from STREAM BINARY are propagated."""

        def fake_wait_for_response(send_func, timeout):
            send_func()
            self.protocol.last_response = {
                "type": "error",
                "data": "ERR STREAM invalid length",
            }
            return True

        self.protocol.wait_for_response = fake_wait_for_response

        success, error = self.protocol.send_stream_data("hello", chunk_size=4, timeout=1.0)

        self.assertFalse(success)
        self.assertIn("STREAM BINARY failed", error)


def run_tests():
    """Run all tests with detailed output."""
    loader = unittest.TestLoader()
    suite = unittest.TestSuite()
    
    # Add all test cases
    suite.addTests(loader.loadTestsFromTestCase(TestStressTestProtocol))
    suite.addTests(loader.loadTestsFromTestCase(TestGuiStreamProtocol))
    suite.addTests(loader.loadTestsFromTestCase(TestProtocolIntegration))
    suite.addTests(loader.loadTestsFromTestCase(TestProtocolHandlerBinaryMode))
    
    # Run with verbose output
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    
    # Return exit code
    return 0 if result.wasSuccessful() else 1


if __name__ == "__main__":
    exit(run_tests())
