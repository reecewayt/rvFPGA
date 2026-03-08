#!/usr/bin/env python3
"""Shared UART/SHA3 protocol configuration for host tools."""

# Common serial defaults
DEFAULT_BAUD = 115200

# Streaming protocol commands
CMD_STREAM = "STREAM"
CMD_DATASTR = "DATASTR"
CMD_END = "END"
CMD_ABORT = "ABORT"

# UART command line buffer sizing in firmware (`main.c`).
UART_CMD_MAX_LEN = 65536
UART_MAX_LINE_CHARS = UART_CMD_MAX_LEN - 1

# Expected positive response prefixes
RESP_STREAM_START = "OK STREAM START"
RESP_DATASTR_ACK = "OK DATASTR"
RESP_HASH = "OK HASH"

# Default chunk size used by both GUI tools (characters/bytes for ASCII payloads).
# Keep this less than UART_CMD_MAX_LEN in firmware after including command prefix.
DEFAULT_CHUNK_SIZE = 8192

# Conservative minimum accepted chunk size from UI
MIN_CHUNK_SIZE = 1

# Fixed host-side upper bound for DATASTR chunk size (used as fallback if LIMITS fails).
MAX_CHUNK_SIZE = 16 * 1024


def compute_max_chunk_size(uart_cmd_max: int) -> int:
    """Compute maximum usable chunk size from firmware's UART command buffer limit.
    
    Reserves 1/8th of the buffer for command overhead (DATASTR prefix, length field, etc.)
    and returns 7/8ths as the maximum payload size.
    
    Args:
        uart_cmd_max: Maximum UART command line length from firmware (UART_CMD_MAX_LEN)
    
    Returns:
        Maximum chunk size for DATASTR payloads (bytes)
    """
    return (uart_cmd_max * 7) // 8


# UI font defaults (shared by both GUI tools)
DEFAULT_FONT_FAMILY = "TkDefaultFont"
DEFAULT_FONT_SIZE = 18
STATUS_DOT_FONT_SIZE = 18
DEFAULT_LOG_FONT_SIZE = 18
