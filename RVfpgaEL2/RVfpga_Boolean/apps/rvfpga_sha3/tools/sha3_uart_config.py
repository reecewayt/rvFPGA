#!/usr/bin/env python3
"""
sha3_uart_config.py - Shared UART/SHA3 host-tool configuration constants.

    Authors: Copilot and Truong Le (tnl3@pdx.edu)

How this config module is used:
- Imported by GUI, stress test, and protocol modules to keep protocol tokens,
    defaults, and UI sizing values consistent.
- Provides command/response identifiers used for command assembly and parsing.
- Defines stream-mode defaults and host-side chunk constraints.

Commonly adjusted options:
- DEFAULT_BAUD: serial speed used at connect time.
- DEFAULT_STREAM_MODE: initial stream transport (line/binary).
- DEFAULT_CHUNK_SIZE: initial payload chunk size for DATASTR sends.
- MIN_CHUNK_SIZE/MAX_CHUNK_SIZE: host clamp bounds for chunk entry.
- Font constants (DEFAULT_FONT_SIZE, STATUS_DOT_FONT_SIZE,
    DEFAULT_LOG_FONT_SIZE): GUI readability tuning.

Helper function:
- compute_max_chunk_size(uart_cmd_max): computes safe DATASTR payload budget
    from firmware uart command buffer constraints.
    
Note: This code was generated using Copilot using prompting.
    
"""

# Common serial defaults
DEFAULT_BAUD = 115200

# Streaming protocol commands
CMD_STREAM = "STREAM"
CMD_DATASTR = "DATASTR"
CMD_END = "END"
CMD_ABORT = "ABORT"

# Expected positive response prefixes
RESP_STREAM_START = "OK STREAM START"
RESP_DATASTR_ACK = "OK DATASTR"
RESP_HASH = "OK HASH"

# Streaming mode selection
STREAM_MODE_LINE_BASED = "line"      # Line-based DATASTR <len>:<text>
STREAM_MODE_BINARY = "binary"        # Raw binary after STREAM
DEFAULT_STREAM_MODE = STREAM_MODE_LINE_BASED  # Start with line-based for compatibility

# Default chunk size used by both GUI tools (characters/bytes for ASCII payloads).
# Must remain below the negotiated DATASTR payload max from LIMITS.
DEFAULT_CHUNK_SIZE = 8192

# Conservative minimum accepted chunk size from UI
MIN_CHUNK_SIZE = 1

# Fixed host-side upper bound for DATASTR chunk size (used as fallback if LIMITS fails).
MAX_CHUNK_SIZE = 16 * 1024


def compute_max_chunk_size(uart_cmd_max: int) -> int:
    """Compute max DATASTR payload size for a given UART command buffer limit.

    Uses the same exact budgeting as firmware:
    command format is "DATASTR <len>:<payload>" and line parsing allows at most
    `uart_cmd_max - 1` characters before the newline terminator.
    """
    max_line_chars = max(0, uart_cmd_max - 1)
    fixed_chars = 9  # "DATASTR " + ':'

    payload_max = max_line_chars - fixed_chars
    if payload_max <= 0:
        return 0

    while payload_max > 0:
        digits = len(str(payload_max))
        if fixed_chars + digits + payload_max <= max_line_chars:
            return payload_max
        payload_max -= 1

    return 0


# UI font defaults (shared by both GUI tools)
DEFAULT_FONT_FAMILY = "TkDefaultFont"
DEFAULT_FONT_SIZE = 16
STATUS_DOT_FONT_SIZE = 16
DEFAULT_LOG_FONT_SIZE = 16
