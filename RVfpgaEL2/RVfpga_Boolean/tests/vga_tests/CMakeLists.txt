cmake_minimum_required(VERSION 3.12)
project(vga_testbenches)

# Set policy for find_package to use <PackageName>_ROOT variables
if(POLICY CMP0144)
    cmake_policy(SET CMP0144 NEW)
endif()

# Find Verilator
find_package(verilator HINTS $ENV{VERILATOR_ROOT})
if (NOT verilator_FOUND)
    message(FATAL_ERROR "Verilator was not found. Either install it or set the VERILATOR_ROOT environment variable")
endif()

# Enable CTest
enable_testing()

# Set C++ standard
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Define RTL source directory
set(VGA_RTL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../src/VeeRwolf/Peripherals/vga)

# Memory file that needs to be copied to build directory
set(MEM_FILE ${VGA_RTL_DIR}/bigfont.mem)
configure_file(${MEM_FILE} ${CMAKE_CURRENT_BINARY_DIR}/bigfont.mem COPYONLY)

# ============================================================
# Test 1: Font ROM Testbench
# ============================================================
set(FONT_ROM_SV ${VGA_RTL_DIR}/font_rom.sv)
set(FONT_ROM_TB ${CMAKE_CURRENT_SOURCE_DIR}/font_rom_tb.cpp)

add_executable(font_rom_tb ${FONT_ROM_TB})

verilate(font_rom_tb
    SOURCES ${FONT_ROM_SV}
    PREFIX Vfont_rom
    TRACE
    VERILATOR_ARGS -Wall
)

add_test(NAME font_rom_test 
         COMMAND font_rom_tb
         WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# ============================================================
# Test 2: VGA Controller Testbench
# ============================================================
set(VGA_CONTROLLER_SV ${VGA_RTL_DIR}/vga_controller.sv)
set(DTG_SV ${VGA_RTL_DIR}/dtg.sv)
set(FRAMEBUFFER_BRAM_SV ${VGA_RTL_DIR}/framebuffer_bram.sv)
set(VGA_TB ${CMAKE_CURRENT_SOURCE_DIR}/vga_controler_tb.cpp)

add_executable(vga_controler_tb ${VGA_TB})

verilate(vga_controler_tb
    SOURCES ${VGA_CONTROLLER_SV} ${FONT_ROM_SV} ${DTG_SV} ${FRAMEBUFFER_BRAM_SV}
    PREFIX Vvga_controller
    TRACE
    VERILATOR_ARGS -Wall --trace-depth 3
)

add_test(NAME vga_controller_test 
         COMMAND vga_controler_tb
         WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR})

# ============================================================
# Convenience Targets
# ============================================================
add_custom_target(run_all_tests
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS font_rom_tb vga_controler_tb
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running all VGA testbenches..."
)

add_custom_target(run_font_test
    COMMAND font_rom_tb
    DEPENDS font_rom_tb
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running font ROM testbench..."
)

add_custom_target(run_vga_test
    COMMAND vga_controler_tb
    DEPENDS vga_controler_tb
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running VGA controller testbench..."
)

# Alias for backwards compatibility
add_custom_target(run_test
    COMMAND ${CMAKE_CTEST_COMMAND} --output-on-failure
    DEPENDS font_rom_tb vga_controler_tb
    WORKING_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}
    COMMENT "Running all testbenches..."
)

# ============================================================
# Print Configuration Info
# ============================================================
message(STATUS "")
message(STATUS "VGA Testbenches Configuration:")
message(STATUS "  RTL source directory: ${VGA_RTL_DIR}")
message(STATUS "  Font ROM source: ${FONT_ROM_SV}")
message(STATUS "  Font ROM testbench: ${FONT_ROM_TB}")
message(STATUS "  VGA Controller source: ${VGA_CONTROLLER_SV}")
message(STATUS "  Display Timing Generator: ${DTG_SV}")
message(STATUS "  Framebuffer BRAM: ${FRAMEBUFFER_BRAM_SV}")
message(STATUS "  VGA Controller testbench: ${VGA_TB}")
message(STATUS "  Memory file: ${MEM_FILE}")
message(STATUS "  Build directory: ${CMAKE_CURRENT_BINARY_DIR}")
message(STATUS "")
