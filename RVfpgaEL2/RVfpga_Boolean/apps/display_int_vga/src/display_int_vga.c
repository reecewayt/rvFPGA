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
#define VGA_BASE    0x80001500
#define VGA_COORDS  (VGA_BASE+0x1)
#define VGA_DATA    (VGA_BASE+0x3)

#define CHAR_SPACING    30  // TODO: May need to adjust spacing vars to get spacing equal
#define HS_OFFSET       20  // Used in x-plane
#define VS_OFFSET       20  // Used in y-plane

#define READ_REG(addr)        (*(volatile unsigned *)(addr))
#define WRITE_REG(addr, val)  (*(volatile unsigned *)(addr) = (val))

#define DELAY_AMOUNT    10000   // TODO: Adjust delay amount to match around 1 second

void delay(int count);
void writeVGA(uint8_t data, uint16_t x, uint16_t y);

int main (void) {

    uint16_t xCoord = 0;
    uint16_t yCoord = VS_OFFSET;
    uint8_t displayValue = 0;

    // TODO: Implement display of red background

    while (1) {
        // Set new offset for next character
        xCoord = (CHAR_SPACING * displayValue) + HS_OFFSET;

        // Display current value to VGA
        if (displayValue % 2) {
            writeVGA(0, xCoord, yCoord);
        } else {
            writeVGA(displayValue, xCoord, yCoord);
        }

        // Add bit of delay between display of character
        delay(DELAY_AMOUNT);

        // Check if value is under 10, else reset back to 0
        if (displayValue < 10) {
            displayValue += 1;
        } else {
            displayValue = 0;
        }

        // TODO: May need to implement a clearing phase to clear previous character data on screen

    }

}

void delay(int count) {
    for(volatile int i = 0; i < count; i++);
}

void writeVGA(uint8_t data, uint16_t x, uint16_t y) {
    uint32_t xyCoords = ((y & 0x3FF) << 10) | (x & 0x3FF);

    // Write to data register with input value
    WRITE_REG(VGA_DATA, data);

    // Write to COORD register to set location
    WRITE_REG(VGA_COORDS, xyCoords);

}