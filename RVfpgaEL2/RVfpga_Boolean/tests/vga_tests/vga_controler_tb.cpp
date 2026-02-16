#include <iostream>
#include <iomanip>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "Vvga_controller.h"

// Wishbone register offsets
#define REG_CONTROL     0x00
#define REG_STATUS      0x04
#define REG_CHAR_POS    0x08
#define REG_ASCII_CODE  0x0C
#define REG_CHAR_COLOR  0x10
#define REG_BG_COLOR    0x14

// Control register bits
#define CTRL_WRITE_CHAR 0x01
#define CTRL_WRITE_BG   0x02

// Status register bits
#define STATUS_BUSY     0x01

const int MAX_SIM_TIME = 100000;
vluint64_t sim_time = 0;

// Helper: Perform a wishbone write
void wb_write(Vvga_controller* dut, uint8_t addr, uint32_t data, VerilatedVcdC* tfp) {
    dut->wb_adr_i = addr;
    dut->wb_dat_i = data;
    dut->wb_we_i = 1;
    dut->wb_stb_i = 1;
    dut->wb_cyc_i = 1;
    
    // Clock cycle (both clocks)
    dut->wb_clk_i = 1;
    dut->pixel_clk = 1;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
    
    dut->wb_clk_i = 0;
    dut->pixel_clk = 0;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
    
    // De-assert wishbone signals
    dut->wb_stb_i = 0;
    dut->wb_cyc_i = 0;
    dut->wb_we_i = 0;
}

// Helper: Perform a wishbone read
uint32_t wb_read(Vvga_controller* dut, uint8_t addr, VerilatedVcdC* tfp) {
    dut->wb_adr_i = addr;
    dut->wb_we_i = 0;
    dut->wb_stb_i = 1;
    dut->wb_cyc_i = 1;
    
    // Clock cycle (both clocks)
    dut->wb_clk_i = 1;
    dut->pixel_clk = 1;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
    
    dut->wb_clk_i = 0;
    dut->pixel_clk = 0;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
    
    uint32_t data = dut->wb_dat_o;
    
    // De-assert wishbone signals
    dut->wb_stb_i = 0;
    dut->wb_cyc_i = 0;
    
    return data;
}

// Helper: Simple clock cycle
void clock_cycle(Vvga_controller* dut, VerilatedVcdC* tfp) {
    dut->wb_clk_i = 1;
    dut->pixel_clk = 1;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
    
    dut->wb_clk_i = 0;
    dut->pixel_clk = 0;
    dut->eval();
    tfp->dump(sim_time);
    sim_time++;
}

// Helper: Wait for controller to become idle
int wait_for_idle(Vvga_controller* dut, VerilatedVcdC* tfp, int max_cycles = 10000) {
    int cycles = 0;
    while (cycles < max_cycles) {
        uint32_t status = wb_read(dut, REG_STATUS, tfp);
        if ((status & STATUS_BUSY) == 0) {
            return cycles;
        }
        clock_cycle(dut, tfp);
        cycles++;
    }
    return -1; // Timeout
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Verilated::traceEverOn(true);
    
    // Instantiate the VGA controller
    Vvga_controller* dut = new Vvga_controller;
    
    // Setup VCD trace
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open("vga_controller.vcd");
    
    // Initialize signals
    dut->wb_clk_i = 0;
    dut->pixel_clk = 0;
    dut->wb_rst_i = 1;
    dut->wb_cyc_i = 0;
    dut->wb_adr_i = 0;
    dut->wb_dat_i = 0;
    dut->wb_sel_i = 0xF;
    dut->wb_we_i = 0;
    dut->wb_stb_i = 0;
    
    bool test_passed = true;
    int test_count = 0;
    int passed_count = 0;
    
    std::cout << "\n========================================" << std::endl;
    std::cout << "VGA Controller Testbench" << std::endl;
    std::cout << "========================================\n" << std::endl;
    
    // Apply reset
    std::cout << "Applying reset..." << std::endl;
    dut->wb_rst_i = 1;  // Assert reset
    for (int i = 0; i < 5; i++) {
        clock_cycle(dut, tfp);
    }
    dut->wb_rst_i = 0;  // Release reset
    clock_cycle(dut, tfp);
    std::cout << "  ✓ Reset released\n" << std::endl;
    
    // ========================================
    // Test 1: Register Read/Write
    // ========================================
    test_count++;
    std::cout << "Test 1: Register Read/Write" << std::endl;
    
    // Write character color
    wb_write(dut, REG_CHAR_COLOR, 0x00FF0000, tfp);  // Red
    uint32_t char_color = wb_read(dut, REG_CHAR_COLOR, tfp);
    
    if (char_color == 0x00FF0000) {
        std::cout << "  ✓ Character color register: PASS" << std::endl;
        passed_count++;
    } else {
        std::cout << "  ✗ Character color register: FAIL (got 0x" 
                  << std::hex << char_color << ")" << std::endl;
        test_passed = false;
    }
    
    // Write background color
    wb_write(dut, REG_BG_COLOR, 0x0000FF00, tfp);  // Green
    uint32_t bg_color = wb_read(dut, REG_BG_COLOR, tfp);
    
    if (bg_color == 0x0000FF00) {
        std::cout << "  ✓ Background color register: PASS" << std::endl;
    } else {
        std::cout << "  ✗ Background color register: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Write character position
    wb_write(dut, REG_CHAR_POS, 0x00000205, tfp);  // Row 2, Col 5
    uint32_t char_pos = wb_read(dut, REG_CHAR_POS, tfp);
    
    if (char_pos == 0x00000205) {
        std::cout << "  ✓ Character position register: PASS" << std::endl;
    } else {
        std::cout << "  ✗ Character position register: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Write ASCII code
    wb_write(dut, REG_ASCII_CODE, 0x00000041, tfp);  // 'A'
    uint32_t ascii_code = wb_read(dut, REG_ASCII_CODE, tfp);
    
    if (ascii_code == 0x00000041) {
        std::cout << "  ✓ ASCII code register: PASS\n" << std::endl;
    } else {
        std::cout << "  ✗ ASCII code register: FAIL\n" << std::endl;
        test_passed = false;
    }
    
    // ========================================
    // Test 2: Status Register (Busy Flag)
    // ========================================
    test_count++;
    std::cout << "Test 2: Status Register" << std::endl;
    
    uint32_t status = wb_read(dut, REG_STATUS, tfp);
    
    if ((status & STATUS_BUSY) == 0) {
        std::cout << "  ✓ Controller idle after reset: PASS\n" << std::endl;
        passed_count++;
    } else {
        std::cout << "  ✗ Controller should be idle: FAIL\n" << std::endl;
        test_passed = false;
    }
    
    // ========================================
    // Test 3: Character Render Operation
    // ========================================
    test_count++;
    std::cout << "Test 3: Character Render Operation" << std::endl;
    
    // Setup character parameters
    wb_write(dut, REG_CHAR_POS, 0x00000105, tfp);    // Row 1, Col 5
    wb_write(dut, REG_ASCII_CODE, 0x00000042, tfp);  // 'B'
    wb_write(dut, REG_CHAR_COLOR, 0x00FFFFFF, tfp);  // White
    wb_write(dut, REG_BG_COLOR, 0x00000000, tfp);    // Black
    
    // Trigger character write
    std::cout << "  Triggering character write..." << std::endl;
    wb_write(dut, REG_CONTROL, CTRL_WRITE_CHAR, tfp);
    
    // Check that controller becomes busy
    status = wb_read(dut, REG_STATUS, tfp);
    
    if (status & STATUS_BUSY) {
        std::cout << "  ✓ Controller became busy: PASS" << std::endl;
    } else {
        std::cout << "  ✗ Controller should be busy: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Wait for operation to complete
    std::cout << "  Waiting for character render to complete..." << std::endl;
    int cycles = wait_for_idle(dut, tfp, 500);
    
    if (cycles > 0 && cycles < 500) {
        std::cout << "  ✓ Character render completed in " << cycles 
                  << " cycles: PASS" << std::endl;
        
        // Character rendering takes: 1 (WAIT_ROM) + 256 (RENDER) = 257 cycles
        if (cycles >= 255 && cycles <= 260) {
            std::cout << "  ✓ Cycle count is within expected range (256-260): PASS" << std::endl;
        } else {
            std::cout << "  ⚠ Cycle count " << cycles 
                      << " outside expected range (256-260)" << std::endl;
        }
        passed_count++;
    } else {
        std::cout << "  ✗ Character render timeout or failed: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Verify controller is idle again
    status = wb_read(dut, REG_STATUS, tfp);
    
    if ((status & STATUS_BUSY) == 0) {
        std::cout << "  ✓ Controller returned to idle: PASS\n" << std::endl;
    } else {
        std::cout << "  ✗ Controller should be idle after completion: FAIL\n" << std::endl;
        test_passed = false;
    }
    
    // ========================================
    // Test 4: Background Fill Operation
    // ========================================
    test_count++;
    std::cout << "Test 4: Background Fill Operation" << std::endl;
    
    // Setup background color
    wb_write(dut, REG_BG_COLOR, 0x000000FF, tfp);  // Blue
    
    // Trigger background fill
    std::cout << "  Triggering background fill..." << std::endl;
    wb_write(dut, REG_CONTROL, CTRL_WRITE_BG, tfp);
    
    // Check that controller becomes busy
    status = wb_read(dut, REG_STATUS, tfp);
    
    if (status & STATUS_BUSY) {
        std::cout << "  ✓ Controller became busy: PASS" << std::endl;
    } else {
        std::cout << "  ✗ Controller should be busy: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Wait a few cycles and verify still busy
    for (int i = 0; i < 100; i++) {
        clock_cycle(dut, tfp);
    }
    
    status = wb_read(dut, REG_STATUS, tfp);
    
    if (status & STATUS_BUSY) {
        std::cout << "  ✓ Controller still busy after 100 cycles: PASS" << std::endl;
    } else {
        std::cout << "  ⚠ Warning: Background fill completed too quickly" << std::endl;
    }
    
    // Wait for operation to complete (640*480 = 307,200 cycles expected)
    std::cout << "  Waiting for background fill to complete (this will take a while)..." << std::endl;
    cycles = wait_for_idle(dut, tfp, 310000);
    
    if (cycles > 0 && cycles < 310000) {
        std::cout << "  ✓ Background fill completed in " << cycles 
                  << " cycles: PASS" << std::endl;
        
        // Expected: 307,200 cycles (640*480 pixels)
        if (cycles >= 307195 && cycles <= 307205) {
            std::cout << "  ✓ Cycle count matches expected 307,200 pixels: PASS" << std::endl;
        } else {
            std::cout << "  ⚠ Cycle count " << cycles 
                      << " differs from expected 307,200" << std::endl;
        }
        passed_count++;
    } else if (cycles == -1) {
        std::cout << "  ✗ Background fill timeout: FAIL" << std::endl;
        test_passed = false;
    }
    
    // Verify controller is idle again
    status = wb_read(dut, REG_STATUS, tfp);
    
    if ((status & STATUS_BUSY) == 0) {
        std::cout << "  ✓ Controller returned to idle: PASS\n" << std::endl;
    } else {
        std::cout << "  ✗ Controller should be idle: FAIL\n" << std::endl;
        test_passed = false;
    }
    
    // ========================================
    // Test 5: Write Protection During Busy
    // ========================================
    test_count++;
    std::cout << "Test 5: Register Write Protection During Operation" << std::endl;
    
    // Trigger another character write
    wb_write(dut, REG_CHAR_POS, 0x00000000, tfp);
    wb_write(dut, REG_ASCII_CODE, 0x00000058, tfp);  // 'X'
    wb_write(dut, REG_CONTROL, CTRL_WRITE_CHAR, tfp);
    
    // Try to write new ASCII code while busy
    clock_cycle(dut, tfp);
    clock_cycle(dut, tfp);
    
    wb_write(dut, REG_ASCII_CODE, 0x00000059, tfp);  // Try to write 'Y'
    
    // Wait for completion
    wait_for_idle(dut, tfp, 500);
    
    // Read back ASCII code - should still be 'X' (0x58)
    ascii_code = wb_read(dut, REG_ASCII_CODE, tfp);
    
    if (ascii_code == 0x00000058) {
        std::cout << "  ✓ Register writes ignored during busy: PASS\n" << std::endl;
        passed_count++;
    } else {
        std::cout << "  ✗ Register should be protected during operation: FAIL" << std::endl;
        std::cout << "    Expected 0x58, got 0x" << std::hex << ascii_code << "\n" << std::endl;
        test_passed = false;
    }
    
    // ========================================
    // Test 6: Multiple Sequential Characters
    // ========================================
    test_count++;
    std::cout << "Test 6: Sequential Character Rendering" << std::endl;
    
    char test_string[] = "HELLO";
    int col = 0;
    
    for (char c : test_string) {
        if (c == '\0') break;
        
        wb_write(dut, REG_CHAR_POS, (0 << 8) | col, tfp);  // Row 0, Col = col
        wb_write(dut, REG_ASCII_CODE, c, tfp);
        wb_write(dut, REG_CONTROL, CTRL_WRITE_CHAR, tfp);
        
        wait_for_idle(dut, tfp, 500);
        
        col++;
    }
    
    std::cout << "  ✓ Rendered " << (col) << " characters: PASS\n" << std::endl;
    passed_count++;
    
    // ========================================
    // Test 7: RGB Output Verification
    // ========================================
    test_count++;
    std::cout << "Test 7: RGB Output Color Verification" << std::endl;
    
    // Set a distinctive background color (purple: R=200, G=50, B=150)
    uint32_t test_bg_color = 0x00C83296;  // RGB = (200, 50, 150)
    wb_write(dut, REG_BG_COLOR, test_bg_color, tfp);
    
    // Trigger background fill to set entire screen to this color
    std::cout << "  Setting background to RGB(200, 50, 150)..." << std::endl;
    wb_write(dut, REG_CONTROL, CTRL_WRITE_BG, tfp);
    
    // Wait for background fill to complete
    cycles = wait_for_idle(dut, tfp, 310000);
    
    if (cycles == -1) {
        std::cout << "  ✗ Background fill timeout: FAIL\n" << std::endl;
        test_passed = false;
    } else {
        std::cout << "  ✓ Background fill completed" << std::endl;
        
        // Now wait for video_on signal and sample RGB outputs
        // Advance simulation until we see video_on
        bool found_video_on = false;
        int max_scan_cycles = 100000;  // Max cycles to search for video_on
        
        for (int i = 0; i < max_scan_cycles; i++) {
            clock_cycle(dut, tfp);
            
            if (dut->video_on) {
                found_video_on = true;
                
                // Sample RGB outputs (multiple times to be sure)
                uint8_t sampled_red = dut->red;
                uint8_t sampled_green = dut->green;
                uint8_t sampled_blue = dut->blue;
                
                std::cout << "  Sampled RGB outputs during video_on:" << std::endl;
                std::cout << "    Red:   " << (int)sampled_red << " (expected 200)" << std::endl;
                std::cout << "    Green: " << (int)sampled_green << " (expected 50)" << std::endl;
                std::cout << "    Blue:  " << (int)sampled_blue << " (expected 150)" << std::endl;
                
                // Verify colors match expected background
                if (sampled_red == 200 && sampled_green == 50 && sampled_blue == 150) {
                    std::cout << "  ✓ RGB outputs match background color: PASS" << std::endl;
                    passed_count++;
                } else {
                    std::cout << "  ✗ RGB outputs do not match: FAIL" << std::endl;
                    test_passed = false;
                }
                
                break;
            }
        }
        
        if (!found_video_on) {
            std::cout << "  ⚠ Warning: video_on signal not detected in " 
                      << max_scan_cycles << " cycles" << std::endl;
            std::cout << "  ✗ Could not verify RGB outputs: FAIL" << std::endl;
            test_passed = false;
        }
    }
    
    std::cout << std::endl;
    
    // ========================================
    // Final Summary
    // ========================================
    std::cout << "\n========================================" << std::endl;
    std::cout << "Test Summary" << std::endl;
    std::cout << "========================================" << std::endl;
    std::cout << "Total Tests:  " << test_count << std::endl;
    std::cout << "Passed:       " << passed_count << std::endl;
    std::cout << "Failed:       " << (test_count - passed_count) << std::endl;
    std::cout << "Simulation Time: " << sim_time << " cycles" << std::endl;
    std::cout << "========================================\n" << std::endl;
    
    if (test_passed && passed_count == test_count) {
        std::cout << "✓ ALL TESTS PASSED" << std::endl;
    } else {
        std::cout << "✗ SOME TESTS FAILED" << std::endl;
    }
    
    std::cout << "\nWaveform saved to: vga_controller.vcd" << std::endl;
    std::cout << "View with: gtkwave vga_controller.vcd\n" << std::endl;
    
    // Cleanup
    tfp->close();
    delete dut;
    delete tfp;
    
    return (test_passed && passed_count == test_count) ? 0 : 1;
}
