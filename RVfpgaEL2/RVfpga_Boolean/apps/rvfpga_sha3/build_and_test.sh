#!/bin/bash

# Build and Test Script for RVfpga SHA3
# Usage: ./build_and_test.sh [1|2]
#   1 = Normal UART GUI test
#   2 = Stress test

set -e

# Get the script's directory (should be the rvfpga_sha3 app folder)
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
VENV_PATH="$SCRIPT_DIR/.venv"
TOOLS_PATH="$SCRIPT_DIR/tools"

# Validate input argument
if [ $# -ne 1 ] || ! [[ "$1" =~ ^[1-2]$ ]]; then
    echo "Usage: $0 [1|2]"
    echo "  1 = Normal UART GUI test"
    echo "  2 = Stress test"
    exit 1
fi

# Activate virtual environment
echo "Activating virtual environment..."
source "$VENV_PATH/bin/activate"

# Build the platformio project
echo "Building platformio project..."
platformio run

# Upload the platformio project
echo "Uploading platformio project..."
platformio run --target upload

# Open the appropriate test script
echo "Opening test script..."
if [ "$1" == "1" ]; then
    echo "Launching UART GUI test..."
    python "$TOOLS_PATH/sha3_uart_gui.py"
else
    echo "Launching stress test..."
    python "$TOOLS_PATH/sha3_stress_test.py"
fi
