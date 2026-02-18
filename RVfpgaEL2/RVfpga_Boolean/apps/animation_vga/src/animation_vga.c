/*
 * animation_vga.c
 * 
 * Author: Truong Le
 * Creation Date: January 16 2026
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

#define COL_MAX    40
#define ROW_MAX    30

#define FRAME_DELAY    10000   // TODO: Adjust delay amount to match around 1 second

void delay(int count);
void vga_write_char(uint8_t row, uint8_t col, char c, uint32_t color);
void vga_clear_screen(uint32_t bg_color);
void vga_print_string(uint8_t row, uint8_t col, const char* str, uint32_t color);

int main (void) {
    char value = ' ';
    uint8_t row, col = 0;

    vga_clear_screen(0x00FF0000);

    
    for (int i = 0; i < ROW_MAX; i++) {
        for (int j = 0; j < COL_MAX; j++) {
            //vga_clear_screen(0x00FF0000);
            row = i;
            col = j;
            vga_write_char(row, col, value, 0x00FFFFFF);
            value++;
            if (value > '~') {
                goto exit;
            }
            delay(400);
        }
    }
    exit:
    while(1);

}

void delay(int count) {
    for(volatile int i = 0; i < count; i++);
}

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

void vga_print_string(uint8_t row, uint8_t col, const char* str, uint32_t color) {
    while (*str && col < 40) {
        if (*str == '\n') {
            return;
        }
        vga_write_char(row, col++, *str++, color);
    }
}