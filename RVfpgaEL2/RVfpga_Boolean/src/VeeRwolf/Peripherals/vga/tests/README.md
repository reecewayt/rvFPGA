# VGA Testbenches

Verilator-based testbenches for VGA controller modules.

## Prerequisites

- CMake 3.12 or later
- Verilator
- C++ compiler with C++14 support

## Building and Running

```bash
# Create build directory
mkdir build
cd build

# Configure with CMake
cmake ..

# Build all testbenches
cmake --build .

# Run all tests with CTest
ctest --output-on-failure
# or
make run_all_tests

# Run individual tests
make run_font_test        # Font ROM test
make run_vga_test         # VGA controller test

# Run test directly
./font_rom_tb
./vga_controler_tb
```

## Available Testbenches

### Font ROM Test (`font_rom_tb`)
Tests the font ROM module that stores 16x16 character bitmap data (256 bits per character).

**Verifies:**
- Character address reads (0x00-0xFF)
- Complete 16x16 bitmap retrieval in single cycle
- Specific character data (space, '!', 'A', digits)
- Sequential character reads
- Synchronous operation
- Boundary address testing
- Data integrity between different characters

**Output includes:**
- Visual representation of characters (ASCII art)
- Hexadecimal values for each row
- Character bitmap visualization
- Pass/fail status for each test

### VGA Controller Test (`vga_controler_tb`)
Comprehensive testbench for the complete VGA controller including Wishbone interface, state machines, and rendering operations.

**Verifies:**
- Wishbone register read/write operations
- Status register (busy flag) behavior
- Character rendering state machine
- Background fill state machine
- Register write protection during operations
- Sequential character rendering
- State transitions and timing

**Tests Include:**
1. **Register Interface**: Validates all Wishbone registers (control, status, position, ASCII, colors)
2. **Status Register**: Checks busy flag transitions and idle state
3. **Character Render**: Triggers character write, verifies busy state, confirms ~257 cycle completion
4. **Background Fill**: Tests full screen fill operation, verifies ~307,200 cycle completion
5. **Write Protection**: Ensures registers are protected during busy operations
6. **Sequential Characters**: Renders multiple characters in sequence

**Output includes:**
- Detailed test progress and results
- Cycle counts for operations
- Pass/fail status for each test
- **VCD waveform file** (`vga_controller.vcd`) for GTKWave analysis
- Test summary with pass/fail counts

**Waveform Viewing:**
```bash
gtkwave vga_controller.vcd
```

**Expected Performance:**
- Character render: ~257 cycles (1 ROM wait + 256 pixel writes)
- Background fill: ~307,200 cycles (640×480 pixels)


## Test Output

Each testbench provides:
- Visual progress indicators (✓ for pass, ✗ for fail)
- Detailed test descriptions
- Character bitmap visualizations (font ROM test)
- Cycle counts and timing information
- Pass/fail summary
- **VCD waveform files** for GTKWave analysis (VGA controller test)

## Exit Codes

- `0`: All tests passed
- `1`: One or more tests failed

## Cleaning Up

```bash
# From the tests directory
rm -rf build/

# Remove waveform files
rm -f *.vcd
```

## Adding New Tests

1. Create a new `.cpp` testbench file
2. Create the corresponding SystemVerilog module
3. Update `CMakeLists.txt`:
   - Add executable
   - Add verilate() call
   - Add test with add_test()
   - Add convenience target (optional)
4. Rebuild and run with `ctest`

