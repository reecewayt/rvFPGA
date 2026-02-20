/*
 * animation_vga.c
 * 
 * This program displays an animation using the VGA peripheral on
 * the RealDigital Boolean. The animation prints shaded blocks in 
 * a clockwise pattern which then gets wiped row-wise or column-wise.
 * For each phase of filling and clearing the screen, the color changes
 * as well.
 *
 * Author: Truong Le & Claude
 * Creation Date: January 16 2026
 *
 * Note: the spiral function was generated using Claude under Truong's prompting.
 * Claude also helped with debugging and some minor tweaking.
 */

#include <stdint.h>
#include <stdbool.h>

// VGA Peripheral Registers
#define VGA_BASE        0x80001500
#define VGA_CONTROL     (*(volatile uint32_t*)(VGA_BASE + 0x00))
#define VGA_STATUS      (*(volatile uint32_t*)(VGA_BASE + 0x04))
#define VGA_CHAR_POS    (*(volatile uint32_t*)(VGA_BASE + 0x08))
#define VGA_ASCII       (*(volatile uint32_t*)(VGA_BASE + 0x0C))
#define VGA_CHAR_COLOR  (*(volatile uint32_t*)(VGA_BASE + 0x10))
#define VGA_BG_COLOR    (*(volatile uint32_t*)(VGA_BASE + 0x14))

// VGA Default Colors
#define COLOR_BLACK      0x00000000
#define COLOR_RED        0x00FF0000
#define COLOR_GREEN      0x0000FF00
#define COLOR_BLUE       0x000000FF
#define COLOR_YELLOW     0x00FFFF00
#define COLOR_CYAN       0x0000FFFF
#define COLOR_MAGENTA    0x00FF00FF

// Max Constants for Character Placement
#define COL_MAX    40
#define ROW_MAX    30

// Misc Defines
#define FRAME_DELAY    15000

// Function Prototypes
void delay(int count);
void vga_write_char(uint8_t row, uint8_t col, char c, uint32_t color);
void vga_clear_screen(uint32_t bg_color);
void vga_clear_row(uint8_t row, uint32_t color);
void vga_clear_col(uint8_t col, uint32_t color);
void spiral_fill(uint32_t color);

int main (void) {
    uint32_t colors[] = {COLOR_RED, COLOR_GREEN, COLOR_BLUE, COLOR_YELLOW, COLOR_CYAN, COLOR_MAGENTA};
    uint8_t color_index = 0;
    uint8_t num_colors = 6;
    bool direction = true;

    vga_clear_screen(COLOR_BLACK);

    while (1) {
        // Fill screen in spiral pattern
        spiral_fill(colors[color_index]);
        
        // Clear each col/row one by one based on direction value
        if (direction) {
            // Clear rows
            for (uint8_t row = 0; row < ROW_MAX; row++) {
                vga_clear_row(row, colors[color_index]);
                delay(FRAME_DELAY*4);
            } 
        } else {
            // Clear cols
            for (uint8_t col = 0; col < COL_MAX; col++) {
                vga_clear_col(col, colors[color_index]);
                delay(FRAME_DELAY*4);
            }
        }

        // Flip direction
        direction = !direction;
        
        // Move to next color
        color_index = (color_index + 1) % num_colors;
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

// vga_clear_row - clears a given row using the space character
void vga_clear_row(uint8_t row, uint32_t color) {
    for (uint8_t col = 0; col < COL_MAX; col++) {
        vga_write_char(row, col, ' ', color);
    }
}

// vga_clear_col - clears a given col using the space character
void vga_clear_col(uint8_t col, uint32_t color) {
    for (uint8_t row = 0; row < ROW_MAX; row++) {
        vga_write_char(row, col, ' ', color);
    }
}

// spiral_fill - fills the screen with a set color with 
// different shaded characters, fills in a clockwise manner
// (Generated using Claude)
void spiral_fill(uint32_t color) {
    // Extended ASCII characters for visual effect
    char pattern[] = {0xB0, 0xB1, 0xB2, 0xDB}; // Light, medium, dark shade, full block
    uint8_t pattern_index = 0;
    
    int top = 0;
    int bottom = ROW_MAX - 1;
    int left = 0;
    int right = COL_MAX - 1;
    
    while (top <= bottom && left <= right) {
        // Move right across top row
        for (int col = left; col <= right; col++) {
            vga_write_char(top, col, pattern[pattern_index % 4], color);
            delay(FRAME_DELAY);
            pattern_index++;
        }
        top++;
        
        // Move down right column
        for (int row = top; row <= bottom; row++) {
            vga_write_char(row, right, pattern[pattern_index % 4], color);
            delay(FRAME_DELAY);
            pattern_index++;
        }
        right--;
        
        // Move left across bottom row
        if (top <= bottom) {
            for (int col = right; col >= left; col--) {
                vga_write_char(bottom, col, pattern[pattern_index % 4], color);
                delay(FRAME_DELAY);
                pattern_index++;
            }
            bottom--;
        }
        
        // Move up left column
        if (left <= right) {
            for (int row = bottom; row >= top; row--) {
                vga_write_char(row, left, pattern[pattern_index % 4], color);
                delay(FRAME_DELAY);
                pattern_index++;
            }
            left++;
        }
    }
}