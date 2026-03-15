# SHA3 UART Protocol

Firmware in `src/main.c` exposes a UART command interface with both line-based and binary streaming modes.

## Commands

- `PING` — Test connectivity
- `STATUS` — Query SHA3 controller state
- `MODE <224|256|384|512>` — Set SHA3 mode
- `LIMITS` — Query firmware buffer limits for chunk size negotiation
- `HASH <text>` — Hash single-line message (legacy, limited to UART buffer)
- `STREAM <len> [BINARY]` — Begin streaming message of `len` bytes
- `DATASTR <chunk_len>:<text_chunk>` — Send line-based data chunk (must follow `STREAM <len>` without `BINARY`)
- `END` — Finalize stream and compute hash
- `ABORT` — Abort current operation and reset state

Each command must end with `\n`.

## Responses

- `OK READY sha3-uart-iface mode=<bits>` — Startup message
- `OK HELP commands: ...` — Available commands
- `OK PONG` — PING acknowledgment
- `OK STATUS mode=<bits> status=0x... idle=... done=... in_full=... err=0x...` — SHA3 controller state
- `OK MODE <bits>` — Mode change confirmation
- `OK LIMITS uart_cmd_max=<N> datastr_payload_max=<M>` — Buffer size limits
- `OK STREAM START len=<...>` — Stream initialization confirmed
- `OK STREAM BINARY ready=<...>` — Binary stream initialization confirmed
- `OK DATASTR` — Chunk acknowledged (flow control)
- `OK HASH <hex_digest>` — Hash computation result
- `OK ABORT` — Abort acknowledged
- `ERR ...` — Error message

## Buffer Limits and Chunk Negotiation

The firmware has a fixed UART command buffer size (`UART_CMD_MAX_LEN = 32768`). The host tools query this limit using the `LIMITS` command at connection time.

**Protocol:**
1. Host sends `LIMITS`
2. Firmware responds: `OK LIMITS uart_cmd_max=32768 datastr_payload_max=32753`
3. Host tools use `datastr_payload_max` directly when present
4. If `datastr_payload_max` is absent, host computes a fallback using exact DATASTR line budgeting (`DATASTR <len>:<payload>`)

This negotiation ensures both sides agree on safe chunk sizes without hardcoded limits in the host tools.

## Streaming Sequence

Used for messages larger than a single UART line or to avoid buffer issues.

### Line Mode (`STREAM <len>` + `DATASTR`)

1. Send `STREAM <total_len_bytes>`
2. Wait for `OK STREAM START len=<...>` before sending any chunk
3. Send one or more `DATASTR <chunk_len>:<text_chunk>` lines
	- Firmware replies `OK DATASTR` after each chunk for **flow control**
	- **Must wait** for this ACK before sending the next chunk to prevent overflow
4. Send `END`
5. Firmware replies with either:
	- `OK HASH <hex_digest>` when `received == expected`, or
	- `ERR END length mismatch recv=<...> expected=<...>` when sizes differ

### Binary Mode (`STREAM <len> BINARY` + raw bytes)

1. Send `STREAM <total_len_bytes> BINARY`
2. Wait for `OK STREAM BINARY ready=<...>`
3. Send exactly `<total_len_bytes>` raw bytes (no DATASTR lines)
4. Send `END`
5. Firmware replies with either:
	- `OK HASH <hex_digest>` when `received == expected`, or
	- `ERR END length mismatch recv=<...> expected=<...>` when sizes differ

**Notes:**
- `DATASTR` is line-based text, so payload must not contain literal `\n` or `\r`
- Per-chunk `OK DATASTR` ACKs provide flow control, **not** validation (validation happens at `END`)
- Binary mode sends raw UTF-8 payload bytes after `STREAM <len> BINARY`
- The shared `ProtocolHandler` class ensures both GUI tools follow identical protocol behavior

## Protocol Handler Module

The file `sha3_uart_protocol.py` provides a shared `ProtocolHandler` class used by both GUI tools to ensure consistent protocol implementation:

**Key Features:**
- **Mode dispatch**: Select line (`DATASTR`) or binary (`STREAM ... BINARY`) transport per operation
- **Synchronous ACK waiting**: `wait_for_response()` for command/response pairs
- **Streaming support**: `send_stream_data()` handles both line and binary streaming paths
- **LIMITS negotiation**: `query_limits()` for buffer size negotiation
- **Logging integration**: `log_callback` parameter for TX message logging

Both `sha3_uart_gui.py` and `sha3_stress_test.py` use the same `ProtocolHandler` instance, eliminating protocol drift between tools.

## GUI

Run:

```bash
python3 tools/sha3_uart_gui.py
```

Dependencies:

```bash
pip install pyserial
```

Use baud rate `115200` to match `platformio.ini`.
