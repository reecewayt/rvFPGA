/*
 * display_int_vga.c - app for displaying integers in a sequence on VGA
 * 
 * Display application for interfacing with a VGA controller on the RealDigital Boolean
 * Displays numbers 0-9 in a sequence across the screen, but for even numbers, the digit
 * displayed is a 0. Also, the background is set to a red color.
 * 
 * Author: Truong Le
 * Creation Date: January 14 2026
 */

#include <stdint.h>

// VGA Peripheral Registers
#define VGA_BASE        0x80001500
#define VGA_CONTROL     (*(volatile uint32_t*)(VGA_BASE + 0x00))
#define VGA_STATUS      (*(volatile uint32_t*)(VGA_BASE + 0x04))
#define VGA_CHAR_POS    (*(volatile uint32_t*)(VGA_BASE + 0x08))
#define VGA_ASCII       (*(volatile uint32_t*)(VGA_BASE + 0x0C))
#define VGA_CHAR_COLOR  (*(volatile uint32_t*)(VGA_BASE + 0x10))
#define VGA_BG_COLOR    (*(volatile uint32_t*)(VGA_BASE + 0x14))

#define CHAR_SPACING    3  // TODO: May need to adjust spacing vars to get spacing equal
#define HS_OFFSET       3 // Used in x-plane
#define VS_OFFSET       5  // Used in y-plane

#define X_MAX_OFFSET    40
#define Y_MAX_OFFSET    30

#define READ_REG(addr)        (*(volatile unsigned *)(addr))
#define WRITE_REG(addr, val)  (*(volatile unsigned *)(addr) = (val))

#define DELAY_AMOUNT    1000000   // TODO: Adjust delay amount to match around 1 second

void delay(int count);
void writeVGA(uint8_t row, uint8_t col, char c, uint32_t color);
void vga_clear_screen(uint32_t bg_color);

int main (void) {

    uint16_t xCoord = 0;
    uint16_t yCoord = VS_OFFSET;
    uint16_t location = 0;
    char displayValue = '0';

    /*
    while(1) {
        //vga_clear_screen(0x00FF0000);

        for (int i = 0; i < X_MAX_OFFSET; i++) {
            for (int j = 0; j < Y_MAX_OFFSET; j++) {
                //vga_clear_screen(0x00FF0000);
                xCoord = i;
                yCoord = j;
                writeVGA(yCoord, xCoord, '0', 0x00FFFFFF);
                delay(40000);
            }
        }

    }*/


    while (1) {
        vga_clear_screen(0x00FF0000);

        // Set new offset for next character
        xCoord = (CHAR_SPACING * location) + HS_OFFSET;

        // Display current value to VGA
        if (!(displayValue % 2)) {
            writeVGA(yCoord, xCoord, '0', 0x00FFFFFF);
        } else {
            writeVGA(yCoord, xCoord, displayValue, 0x00FFFFFF);
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

void delay(int count) {
    for(volatile int i = 0; i < count; i++);
}

void writeVGA(uint8_t row, uint8_t col, char c, uint32_t color) {
    // Wait for controller to be ready
    while (VGA_STATUS & 0x01);
    
    // Configure character
    VGA_CHAR_POS = (row << 8) | col;
    VGA_ASCII = c;
    VGA_CHAR_COLOR = color;
    
    // Trigger character write
    VGA_CONTROL = 0x01;
}

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