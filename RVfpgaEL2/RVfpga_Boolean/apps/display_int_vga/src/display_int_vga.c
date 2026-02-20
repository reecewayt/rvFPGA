/*
 * display_int_vga.c - app for displaying integers in a sequence on VGA
 * 
 * Display application for interfacing with a VGA controller on the RealDigital Boolean.
 * Displays numbers 0-9 in a sequence across the screen, but for even numbers, the digit
 * displayed is a 0. Also, the background is set to a red color.
 * 
 * Author: Truong Le
 * Creation Date: January 14 2026
 */

#include <stdint.h>

// VGA Peripheral Registers (set as vars)
#define VGA_BASE        0x80001500
#define VGA_CONTROL     (*(volatile uint32_t*)(VGA_BASE + 0x00))
#define VGA_STATUS      (*(volatile uint32_t*)(VGA_BASE + 0x04))
#define VGA_CHAR_POS    (*(volatile uint32_t*)(VGA_BASE + 0x08))
#define VGA_ASCII       (*(volatile uint32_t*)(VGA_BASE + 0x0C))
#define VGA_CHAR_COLOR  (*(volatile uint32_t*)(VGA_BASE + 0x10))
#define VGA_BG_COLOR    (*(volatile uint32_t*)(VGA_BASE + 0x14))

// Character Offset Values
// Box is 40x30, set horizontal and vertical offset from TOP-LEFT corner
#define CHAR_SPACING    3
#define HS_OFFSET       3
#define VS_OFFSET       5

// Misc Defines
#define DELAY_AMOUNT    2500000   

// Function Prototypes
void delay(int count);
void vga_write_char(uint8_t row, uint8_t col, char c, uint32_t color);
void vga_clear_screen(uint32_t bg_color);

int main (void) {
    uint16_t xCoord = 0;
    uint16_t yCoord = VS_OFFSET;
    uint16_t location = 0;
    char displayValue = '0';

    while (1) {
        // Clear screen and set screen to RED
        vga_clear_screen(0x00FF0000);

        // Set new offset for next character
        xCoord = (CHAR_SPACING * location) + HS_OFFSET;

        // Display current value to VGA (even is set to 0, odd is unchanged)
        if (!(displayValue % 2)) {
            vga_write_char(yCoord, xCoord, '0', 0x00FFFFFF);
        } else {
            vga_write_char(yCoord, xCoord, displayValue, 0x00FFFFFF);
        }

        // Add bit of delay between display of character
        delay(DELAY_AMOUNT);

        // Check if value is under or equal to 9, else reset back to 0
        if (location >= 0 && location < 9) {
            displayValue += 1;
            location += 1;
        } else {
            displayValue = '0';
            location = 0;
        }

    }

}

// delay - delays for a set count
void delay(int count) {
    for(volatile int i = 0; i < count; i++);
}

// vga_write_char - writes char with set color at (row,col) location
void vga_write_char(uint8_t row, uint8_t col, char c, uint32_t color) {
    // Wait for controller to be ready
    while (VGA_STATUS & 0x01);
    
    // Configure character
    VGA_CHAR_POS = (row << 8) | col;
    VGA_ASCII = c;
    VGA_CHAR_COLOR = color;
    
    // Trigger character write
    VGA_CONTROL = 0x01;
}

// vga_clear_screen - clears the screen and sets the background to a color
void vga_clear_screen(uint32_t bg_color) {
    // Wait for controller to be ready
    while (VGA_STATUS & 0x01);
    
    // Set background color
    VGA_BG_COLOR = bg_color;
    
    // Trigger background fill
    VGA_CONTROL = 0x02;
    
    // Wait for completion (takes ~12ms)
    while (VGA_STATUS & 0x01);
}