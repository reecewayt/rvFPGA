# RVfpga SHA3 Application

This folder contains the firmware and testing infrastructure for the RVfpga SHA3 implementation on the Nexys FPGA board.

## Quick Start

### Build and Test

The `build_and_test.sh` script automates the entire build, upload, and test workflow.

#### Usage

```bash
./build_and_test.sh [1|2] [--upload-bitstream|-b]
```

#### Arguments

- **Test Mode** (required):
  - `1` - Normal UART GUI test (interactive interface)
  - `2` - Stress test (automated high-volume hash testing)

- **Bitstream Upload** (optional):
  - `--upload-bitstream` or `-b` - Program FPGA bitstream before firmware upload
  - Default bitstream path: `../../bit_files/final_proj/impl_1/rvfpgaboolean.bit`
  - Override with environment variable: `RVFPGA_BITSTREAM_FILE=/path/to/bitstream.bit`

#### Examples

```bash
# Run GUI test without uploading bitstream (assumes FPGA is already programmed)
./build_and_test.sh 1

# Run stress test and upload FPGA bitstream first
./build_and_test.sh 2 --upload-bitstream

# Run GUI test with custom bitstream path
RVFPGA_BITSTREAM_FILE=/custom/path/rvfpgaboolean.bit ./build_and_test.sh 1 -b
```

### What the Script Does

1. **Activates PlatformIO virtual environment**
2. **Optionally programs FPGA** with the bitstream (if `-b` flag provided)
3. **Builds** the firmware using PlatformIO
4. **Uploads** firmware to the FPGA board via UART
5. **Launches** the appropriate test interface (GUI or stress test)

## Project Structure

- `src/` - Firmware source code (C/C++)
- `include/` - Header files
- `tools/` - Testing and configuration scripts
  - `sha3_uart_gui.py` - Interactive GUI for hash operations
  - `sha3_stress_test.py` - Automated stress testing
  - `sha3_uart_config.py` - Device configuration utility
  - `sha3_uart_protocol.py` - Low-level UART protocol
- `platformio.ini` - PlatformIO project settings
- `build_and_test.sh` - Build and test automation script

## Prerequisites

- PlatformIO with `swervolf_nexys` environment configured
- Python 3 with required dependencies (for test scripts)
- FPGA board connected and accessible via UART
- Bitstream file (if using `-b` flag)

## Documentation

See `tools/UART_PROTOCOL.md` for detailed protocol specification and command formats.
