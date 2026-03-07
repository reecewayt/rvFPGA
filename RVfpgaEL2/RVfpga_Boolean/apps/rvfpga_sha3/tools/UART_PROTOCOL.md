# SHA3 UART Protocol

Firmware in `src/main.c` exposes a line-oriented UART command interface.

## Commands

- `PING`
- `STATUS`
- `MODE <224|256|384|512>`
- `HASH <text>`

Each command must end with `\n`.

## Responses

- `OK READY sha3-uart-iface mode=<bits>`
- `OK HELP commands: ...`
- `OK PONG`
- `OK STATUS mode=<bits> status=0x... idle=... done=... in_full=... err=0x...`
- `OK MODE <bits>`
- `OK HASH <hex_digest>`
- `ERR ...`

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
