#!/usr/bin/env python3
"""Unified test suite for SHA3 UART streaming protocol.

Tests both stress tester and GUI sender implementations without requiring
actual hardware or serial connections.
"""
import hashlib
import queue
import random
import string
import sys
import threading
import time
import unittest
from pathlib import Path
from typing import List

# Allow imports from parent tools/ directory when running from tools/testing/.
TOOLS_DIR = Path(__file__).resolve().parents[1]
if str(TOOLS_DIR) not in sys.path:
    sys.path.insert(0, str(TOOLS_DIR))

# Import the classes we're testing
from sha3_stress_test import Sha3StressTest
from sha3_uart_gui import Sha3UartGui


class MockVar:
    """Mock tkinter StringVar for testing."""
    def __init__(self, value: str):
        self._value = value
    
    def get(self) -> str:
        return self._value
    
    def set(self, value: str) -> None:
        self._value = value


class TestStressTestProtocol(unittest.TestCase):
    """Test stress test streaming protocol implementation."""
    
    def setUp(self):
        """Create a minimal stress test instance for testing."""
        self.inst = object.__new__(Sha3StressTest)
        self.inst.chunk_size_var = MockVar("10")
        self.inst.response_event = threading.Event()
        self.inst.rx_queue = queue.Queue()
        self.inst.rx_partial = bytearray()
        self.inst.pending_digest_chars = ""
        self.inst.last_response = None
        self.sent = []
        
        # Override methods to capture behavior
        self.inst._send_line = lambda cmd: self.sent.append(cmd)
        self.inst._wait_for_response = self._mock_wait_for_response
    
    def _mock_wait_for_response(self, send_func, timeout):
        """Simulate device responses."""
        send_func()
        cmd = self.sent[-1]
        
        if cmd.startswith("STREAM"):
            self.inst.last_response = {
                "type": "stream_start",
                "data": "OK STREAM START len=..."
            }
            return True
        
        if cmd.startswith("DATASTR"):
            self.inst.last_response = {
                "type": "datastr_ack",
                "data": "OK DATASTR"
            }
            return True
        
        if cmd == "END":
            # Reconstruct payload from DATASTR chunks
            parts = []
            for s in self.sent:
                if not s.startswith("DATASTR "):
                    continue
                body = s.split(" ", 1)[1]
                _, sep, chunk = body.partition(":")
                parts.append(chunk if sep else body)
            payload = "".join(parts).encode("utf-8")
            digest = hashlib.sha3_256(payload).hexdigest()
            self.inst.last_response = {"type": "hash", "data": digest}
            return True
        
        self.inst.last_response = {"type": "ok", "data": None}
        return True
    
    def test_basic_message(self):
        """Test streaming a basic message."""
        msg = "Hello, SHA3!"
        ok, err, actual = Sha3StressTest._run_single_test(
            self.inst, "256", msg, 2.0
        )
        expected = hashlib.sha3_256(msg.encode("utf-8")).hexdigest()
        
        self.assertTrue(ok, f"Test failed: {err}")
        self.assertIsNone(err)
        self.assertEqual(actual, expected)
    
    def test_random_message(self):
        """Test streaming a random message."""
        msg = "".join(random.choice(string.ascii_letters) for _ in range(123))
        ok, err, actual = Sha3StressTest._run_single_test(
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
        ok, err, actual = Sha3StressTest._run_single_test(
            self.inst, "256", msg, 2.0
        )
        
        self.assertFalse(ok)
        self.assertIn("newline", err.lower())


class TestGuiStreamProtocol(unittest.TestCase):
    """Test GUI streaming protocol implementation."""
    
    def setUp(self):
        """Create a minimal GUI instance for testing."""
        self.inst = object.__new__(Sha3UartGui)
        self.inst.chunk_size_var = MockVar("10")
        self.inst.msg_var = MockVar("test_message")
        self.inst.mode_var = MockVar("256")
        self.inst.ser = object()  # Mock serial object
        self.inst.tx_lock = threading.Lock()
        
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
        
        # Override methods
        orig_send = self.inst._send_line = lambda cmd: self.sent.append(cmd)
        
        # Wrap send_line to simulate STREAM ACK
        def send_with_ack(cmd):
            orig_send(cmd)
            if cmd.startswith("STREAM "):
                self.inst.waiting_stream_ack = False
                self.inst.stream_ack_error = None
                self.inst.stream_ack_event.set()
        
        self.inst._send_line = send_with_ack
        self.inst._log = lambda msg, tag='sys': self.log_messages.append(msg)
    
    def test_basic_message(self):
        """Test GUI sends correct sequence for basic message."""
        self.inst.msg_var = MockVar("hello_world")
        self.inst._hash_message()
        time.sleep(0.1)  # Let background thread complete
        
        # Verify sequence
        self.assertTrue(any(c.startswith("STREAM") for c in self.sent))
        self.assertTrue(any(c.startswith("DATASTR") for c in self.sent))
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
        stream_idx = next(i for i, c in enumerate(self.sent) if c.startswith("STREAM"))
        datastr_cmds = [(i, c) for i, c in enumerate(self.sent) if c.startswith("DATASTR")]
        
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
    """Integration tests across both implementations."""
    
    def test_stress_and_gui_produce_same_sequence(self):
        """Verify stress tester and GUI use same protocol."""
        msg = "test_message"
        
        # Setup stress tester
        stress = object.__new__(Sha3StressTest)
        stress.chunk_size_var = MockVar("10")
        stress.response_event = threading.Event()
        stress.rx_queue = queue.Queue()
        stress.rx_partial = bytearray()
        stress.pending_digest_chars = ""
        stress.last_response = None
        stress_sent = []
        
        def stress_mock_wait(send_func, timeout):
            send_func()
            cmd = stress_sent[-1]
            if cmd.startswith("STREAM"):
                stress.last_response = {"type": "stream_start", "data": "OK"}
            elif cmd.startswith("DATASTR"):
                stress.last_response = {"type": "datastr_ack", "data": "OK DATASTR"}
            elif cmd == "END":
                stress.last_response = {"type": "hash", "data": "a" * 64}
            return True
        
        stress._send_line = lambda cmd: stress_sent.append(cmd)
        stress._wait_for_response = stress_mock_wait
        Sha3StressTest._run_single_test(stress, "256", msg, 2.0)
        
        # Setup GUI
        gui = object.__new__(Sha3UartGui)
        gui.chunk_size_var = MockVar("10")
        gui.msg_var = MockVar(msg)
        gui.mode_var = MockVar("256")
        gui.ser = object()
        gui.tx_lock = threading.Lock()
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
        
        def gui_send(cmd):
            gui_sent.append(cmd)
            if cmd.startswith("STREAM "):
                gui.waiting_stream_ack = False
                gui.stream_ack_event.set()
        
        gui._send_line = gui_send
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


def run_tests():
    """Run all tests with detailed output."""
    loader = unittest.TestLoader()
    suite = unittest.TestSuite()
    
    # Add all test cases
    suite.addTests(loader.loadTestsFromTestCase(TestStressTestProtocol))
    suite.addTests(loader.loadTestsFromTestCase(TestGuiStreamProtocol))
    suite.addTests(loader.loadTestsFromTestCase(TestProtocolIntegration))
    
    # Run with verbose output
    runner = unittest.TextTestRunner(verbosity=2)
    result = runner.run(suite)
    
    # Return exit code
    return 0 if result.wasSuccessful() else 1


if __name__ == "__main__":
    exit(run_tests())
