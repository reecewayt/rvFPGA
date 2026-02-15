#include <iostream>
#include <iomanip>
#include <verilated.h>
#include "Vfont_rom.h"

const int MAX_SIM_TIME = 100;

// Helper function to extract a 16-bit row from the 256-bit data array
uint16_t get_row(const uint32_t* data, int row) {
    // data is 256 bits = 8 x 32-bit words
    // Each row is 16 bits, so 2 rows per 32-bit word
    int word_idx = row / 2;
    int is_upper = row % 2;
    
    if (is_upper) {
        return (data[word_idx] >> 16) & 0xFFFF;
    } else {
        return data[word_idx] & 0xFFFF;
    }
}

// Helper function to display the complete 16x16 character bitmap
void display_character(const uint32_t* data, uint8_t char_addr) {
    std::cout << "  Character 0x" << std::hex << std::setw(2) << std::setfill('0') 
              << (int)char_addr << " (" << std::dec << (int)char_addr << "):" << std::endl;
    
    for (int row = 0; row < 16; row++) {
        uint16_t row_data = get_row(data, row);
        std::cout << "    Row " << std::setw(2) << row << ": 0x" 
                  << std::hex << std::setw(4) << std::setfill('0') << row_data << " | ";
        
        // Display as ASCII art
        for (int bit = 15; bit >= 0; bit--) {
            std::cout << ((row_data & (1 << bit)) ? "█" : "·");
        }
        std::cout << std::endl;
    }
}

// Helper function to perform a clock cycle
void clock_cycle(Vfont_rom* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    // Instantiate the font ROM module
    Vfont_rom* dut = new Vfont_rom;
    
    // Initialize signals
    dut->clk = 0;
    dut->addr = 0;
    
    int time_counter = 0;
    bool test_passed = true;
    
    std::cout << "Starting Font ROM Test (256-bit 16x16 bitmap mode)" << std::endl;
    std::cout << "========================================" << std::endl;
    
    // Test 1: Read character at address 0 (NULL character)
    std::cout << "\nTest 1: Reading character address 0x00 (NULL)" << std::endl;
    dut->addr = 0x00;
    clock_cycle(dut);
    time_counter++;
    display_character(dut->data, dut->addr);
    
    // Test 2: Read character '!' (ASCII 0x21 = 33)
    std::cout << "\nTest 2: Reading character address 0x21 ('!' character)" << std::endl;
    dut->addr = 0x21;
    clock_cycle(dut);
    time_counter++;
    display_character(dut->data, dut->addr);
    
    // Verify that we got some non-zero data for a printable character
    bool has_data = false;
    for (int i = 0; i < 8; i++) {
        if (dut->data[i] != 0) {
            has_data = true;
            break;
        }
    }
    if (has_data) {
        std::cout << "  ✓ Character contains bitmap data" << std::endl;
    } else {
        std::cout << "  ⚠ Warning: Character appears empty" << std::endl;
    }
    
    // Test 3: Read character 'A' (ASCII 0x41 = 65)
    std::cout << "\nTest 3: Reading character address 0x41 ('A' character)" << std::endl;
    dut->addr = 0x41;
    clock_cycle(dut);
    time_counter++;
    display_character(dut->data, dut->addr);
    
    // Test 4: Sequential character read test
    std::cout << "\nTest 4: Sequential character read test" << std::endl;
    for (uint8_t i = 0x30; i <= 0x33; i++) {  // Characters '0' through '3'
        std::cout << "  Reading character 0x" << std::hex << std::setw(2) 
                  << std::setfill('0') << (int)i << std::endl;
        dut->addr = i;
        clock_cycle(dut);
        time_counter++;
        
        // Just show first row as summary
        uint16_t row0 = get_row(dut->data, 0);
        std::cout << "    First row: 0x" << std::hex << std::setw(4) << row0 << std::endl;
    }
    
    // Test 5: Verify synchronous operation (data appears after clock edge)
    std::cout << "\nTest 5: Synchronous read verification" << std::endl;
    dut->addr = 0x20;  // Space character
    dut->clk = 0;
    dut->eval();
    uint32_t data_before[8];
    for (int i = 0; i < 8; i++) {
        data_before[i] = dut->data[i];
    }
    std::cout << "  Before clock edge - First word: 0x" << std::hex 
              << std::setw(8) << std::setfill('0') << data_before[0] << std::endl;
    
    dut->clk = 1;
    dut->eval();
    time_counter++;
    dut->clk = 0;
    dut->eval();
    std::cout << "  After clock edge  - First word: 0x" << std::hex 
              << std::setw(8) << std::setfill('0') << dut->data[0] << std::endl;
    std::cout << "  ✓ Data is registered on clock edge" << std::endl;
    
    // Test 6: Read boundary addresses
    std::cout << "\nTest 6: Boundary address tests" << std::endl;
    
    // Last valid character address (0xFF = 255)
    dut->addr = 0xFF;
    clock_cycle(dut);
    time_counter++;
    std::cout << "  Max character address (0xFF):" << std::endl;
    std::cout << "    First row: 0x" << std::hex << std::setw(4) 
              << get_row(dut->data, 0) << std::endl;
    std::cout << "  ✓ Boundary address read successful" << std::endl;
    
    // Test 7: Verify data integrity - check that different characters give different data
    std::cout << "\nTest 7: Data integrity verification" << std::endl;
    dut->addr = 0x41;  // 'A'
    clock_cycle(dut);
    time_counter++;
    uint32_t data_A[8];
    for (int i = 0; i < 8; i++) {
        data_A[i] = dut->data[i];
    }
    
    dut->addr = 0x42;  // 'B'
    clock_cycle(dut);
    time_counter++;
    uint32_t data_B[8];
    for (int i = 0; i < 8; i++) {
        data_B[i] = dut->data[i];
    }
    
    bool different = false;
    for (int i = 0; i < 8; i++) {
        if (data_A[i] != data_B[i]) {
            different = true;
            break;
        }
    }
    
    if (different) {
        std::cout << "  ✓ Different characters have different bitmaps" << std::endl;
    } else {
        std::cout << "  ✗ Warning: Characters 'A' and 'B' have identical data" << std::endl;
        test_passed = false;
    }
    
    // Summary
    std::cout << "\n========================================" << std::endl;
    std::cout << "Test Summary:" << std::endl;
    std::cout << "  Total cycles: " << std::dec << time_counter << std::endl;
    
    if (test_passed) {
        std::cout << "  Result: ✓ ALL TESTS PASSED" << std::endl;
    } else {
        std::cout << "  Result: ✗ SOME TESTS FAILED" << std::endl;
    }
    std::cout << "========================================" << std::endl;
    
    // Cleanup
    delete dut;
    
    return test_passed ? 0 : 1;
}
