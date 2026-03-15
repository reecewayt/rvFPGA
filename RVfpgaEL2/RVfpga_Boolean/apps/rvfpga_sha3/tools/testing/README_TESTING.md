# Testing the SHA3 UART Protocol

This directory contains automated tests for the SHA3 UART streaming protocol implementation.

## Running Tests

Install required Python dependency first:

```bash
python3 -m pip install pyserial
```

If using the project venv:

```bash
.venv/bin/python -m pip install pyserial
```

Run the complete test suite:

```bash
python3 tools/testing/test_protocol.py
```

Or using the venv:

```bash
.venv/bin/python tools/testing/test_protocol.py
```

## Running Stress Test GUI

Preferred:

```bash
python3 tools/sha3_stress_test.py
```

## Test Coverage

The test suite validates:

### Stress Test Protocol (`TestStressTestProtocol`)
- ✅ Basic message streaming
- ✅ Random message generation and hashing
- ✅ Correct protocol sequence (STREAM → DATASTR → END)
- ✅ Length-prefixed DATASTR format (`<len>:<chunk>`)
- ✅ Newline/carriage-return rejection

### Binary Stream Handler (`TestProtocolHandlerBinaryMode`)
- ✅ Binary mode command format (`STREAM <len> BINARY`)
- ✅ Raw payload byte transfer in binary mode
- ✅ Correct binary sequence (`STREAM ... BINARY` → raw bytes → END)
- ✅ Binary stream error propagation

### GUI Stream Protocol (`TestGuiStreamProtocol`)
- ✅ GUI message streaming sequence
- ✅ Empty message handling (STREAM 0)
- ✅ STREAM ACK wait before chunks
- ✅ Newline rejection

### Integration (`TestProtocolIntegration`)
- ✅ Stress tester and GUI produce identical protocol sequences
- ✅ Same chunk size produces same number of commands

## Notes on Stream Modes

- Line mode uses `STREAM <len>` followed by one or more `DATASTR <len>:<chunk>` lines.
- Binary mode uses `STREAM <len> BINARY` followed by raw payload bytes, then `END`.
- Existing stress/GUI integration tests focus on the line-mode command sequence.

## Test Strategy

All tests use **mock objects** and **fake responses**—no actual serial port or hardware is required. This allows:

- Fast, repeatable testing during development
- Protocol validation before flashing firmware
- CI/CD integration

## Adding New Tests

The test suite uses Python's `unittest` framework. To add tests:

1. Add a new test method to the appropriate class:
   ```python
   def test_my_feature(self):
       """Description of what this tests."""
       # Setup
       # Execute
       # Assert
   ```

2. Run the suite to verify your test passes

## Dependencies

- Python 3.8+
- `pyserial` (required; imported by the modules under test)
- No additional test dependencies required
