#!/bin/bash

# Build and Test Script for RVfpga SHA3
# Usage: ./build_and_test.sh [1|2] [--upload-bitstream|-b]
#   1 = Normal UART GUI test
#   2 = Stress test
#   --upload-bitstream/-b = Program FPGA bitstream before firmware upload

set -e

# Get the script's directory (should be the rvfpga_sha3 app folder)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VENV_ACTIVATE="$HOME/.platformio/penv/bin/activate"
TOOLS_PATH="$SCRIPT_DIR/tools"
DEFAULT_BITSTREAM_PATH="$SCRIPT_DIR/../../bit_files/final_proj/impl_1/rvfpgaboolean.bit"
UPLOAD_BITSTREAM=false
TEST_MODE=""

# Parse arguments
for arg in "$@"; do
    case "$arg" in
        1|2)
            if [ -n "$TEST_MODE" ]; then
                echo "Error: Test mode provided more than once"
                exit 1
            fi
            TEST_MODE="$arg"
            ;;
        --upload-bitstream|-b)
            UPLOAD_BITSTREAM=true
            ;;
        *)
            echo "Unknown argument: $arg"
            echo "Usage: $0 [1|2] [--upload-bitstream|-b]"
            echo "  1 = Normal UART GUI test"
            echo "  2 = Stress test"
            echo "  --upload-bitstream, -b = Program FPGA bitstream before firmware upload"
            exit 1
            ;;
    esac
done

# Validate required mode argument
if [ -z "$TEST_MODE" ]; then
    echo "Usage: $0 [1|2] [--upload-bitstream|-b]"
    echo "  1 = Normal UART GUI test"
    echo "  2 = Stress test"
    echo "  --upload-bitstream, -b = Program FPGA bitstream before firmware upload"
    exit 1
fi

# Activate virtual environment
echo "Activating virtual environment..."
if [ ! -f "$VENV_ACTIVATE" ]; then
    echo "Error: PlatformIO venv activate script not found: $VENV_ACTIVATE"
    exit 1
fi
source "$VENV_ACTIVATE"

# Optionally configure and upload bitstream (override path with RVFPGA_BITSTREAM_FILE)
if [ "$UPLOAD_BITSTREAM" = true ]; then
    BITSTREAM_PATH="${RVFPGA_BITSTREAM_FILE:-$DEFAULT_BITSTREAM_PATH}"
    if ! BITSTREAM_PATH="$(realpath "$BITSTREAM_PATH" 2>/dev/null)"; then
        echo "Error: Unable to resolve bitstream path: $BITSTREAM_PATH"
        exit 1
    fi

    if [ ! -f "$BITSTREAM_PATH" ]; then
        echo "Error: Bitstream file not found: $BITSTREAM_PATH"
        echo "Set RVFPGA_BITSTREAM_FILE to a valid .bit file path and try again."
        exit 1
    fi

    export RVFPGA_BITSTREAM_FILE="$BITSTREAM_PATH"
    echo "Using bitstream file: $RVFPGA_BITSTREAM_FILE"
fi

# Build the platformio project
echo "Building platformio project..."
platformio run

# Optionally upload bitstream to FPGA
if [ "$UPLOAD_BITSTREAM" = true ]; then
    echo "Uploading FPGA bitstream..."
    platformio run --target program_fpga --environment swervolf_nexys
fi

# Upload the platformio project
echo "Uploading platformio project..."
platformio run --target upload

# Open the appropriate test script
echo "Opening test script..."
if [ "$TEST_MODE" == "1" ]; then
    echo "Launching UART GUI test..."
    python "$TOOLS_PATH/sha3_uart_gui.py"
else
    echo "Launching stress test..."
    python "$TOOLS_PATH/sha3_stress_test.py"
fi
