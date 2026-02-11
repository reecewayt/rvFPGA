/*
 * RGB_SevSeg.c
 * 
 * RGB LED PWM Controller with Seven-Segment Display
 * Controls RGB0 LED brightness via pushbuttons (BTN0=Red, BTN1=Green, BTN2=Blue, BTN3=Reset)
 * Displays duty cycles (0-99%) on seven-segment display in format: RR_GG_BB
 * 
 * Author: Reece
 * Date: January 2026
 */

#include <stdint.h>

// ============================================================================
// Memory-Mapped I/O Address Definitions
// ============================================================================

// GPIO1 - Switches and LEDs
#define GPIO1_BASEADDR   0x80001400
#define RGPIO1_SWs      (GPIO1_BASEADDR + 0x00)  // Switches input
#define RGPIO1_LEDs     (GPIO1_BASEADDR + 0x04)  // LEDs output
#define RGPIO1_INOUT    (GPIO1_BASEADDR + 0x08)  // Direction control

// GPIO2 - Push Buttons
#define GPIO2_BASEADDR   0x80001800            
#define RGPIO2_BTNs     (GPIO2_BASEADDR + 0x00)  // Buttons input
#define RGPIO2_INOUT    (GPIO2_BASEADDR + 0x08)  // Direction control

// RGB PWM Controller
#define RGB_BASEADDR    0x80001C00
#define RRGB0_CTRL      (RGB_BASEADDR + 0x00)    // RGB0 control register
#define RRGB1_CTRL      (RGB_BASEADDR + 0x04)    // RGB1 control register
#define RRGB0_CNT       (RGB_BASEADDR + 0x08)    // RGB0 counter (debug)
#define RRGB1_CNT       (RGB_BASEADDR + 0x0C)    // RGB1 counter (debug)

// Seven-Segment Display
#define SegEn_ADDR      0x80001038               // Digit enable register
#define SegDig_ADDR     0x8000103C               // Digit value register

// ============================================================================
// Memory-Mapped I/O Macros
// ============================================================================

#define READ_MM_REG(addr)        (*(volatile unsigned *)(addr))
#define WRITE_MM_REG(addr, val)  (*(volatile unsigned *)(addr) = (val))

// ============================================================================
// Constants
// ============================================================================

#define DUTY_INCREMENT   144     // ~7% per button press (144/2047 ≈ 0.07)
#define MAX_DUTY_CYCLE   2047    // 11-bit PWM resolution
#define ENABLE_BIT       0x80000000

// Button bit masks
#define BTN0_MASK        0x1     // Red channel
#define BTN1_MASK        0x2     // Green channel
#define BTN2_MASK        0x4     // Blue channel
#define BTN3_MASK        0x8     // Reset all channels

// ============================================================================
// Function Prototypes
// ============================================================================

void config_peripherals(void);
void setRGB0_PWM(uint16_t red, uint16_t green, uint16_t blue);
void update_7seg_display(uint16_t red, uint16_t green, uint16_t blue);
uint8_t duty_to_percent(uint16_t duty);

// ============================================================================
// Main Program
// ============================================================================

int main(void)
{
    config_peripherals();
    
    uint16_t Rduty = 0, Gduty = 0, Bduty = 0;
    unsigned int prev_btns = 0;

    while (1) {
        unsigned int btns = READ_MM_REG(RGPIO2_BTNs);
        unsigned int sw = READ_MM_REG(RGPIO1_SWs);
        
        // Detect rising edge (0→1 transition)
        unsigned int btn_rising_edge = btns & ~prev_btns;

        // Update duty cycles on button press
        if (btn_rising_edge & BTN0_MASK) {
            if (Rduty < MAX_DUTY_CYCLE) {
                Rduty += DUTY_INCREMENT;
            }
        }
        
        if (btn_rising_edge & BTN1_MASK) {
            if (Gduty < MAX_DUTY_CYCLE) {
                Gduty += DUTY_INCREMENT;
            }
        }
        
        if (btn_rising_edge & BTN2_MASK) {
            if (Bduty < MAX_DUTY_CYCLE) {
                Bduty += DUTY_INCREMENT;
            }
        }
        
        if (btn_rising_edge & BTN3_MASK) {
            Rduty = Gduty = Bduty = 0;
        }

        // Update hardware
        setRGB0_PWM(Rduty, Gduty, Bduty);
        
        if (btn_rising_edge) {
            update_7seg_display(Rduty, Gduty, Bduty);
        }
        
        // Mirror switches to LEDs
        WRITE_MM_REG(RGPIO1_LEDs, sw >> 16);
        
        prev_btns = btns;
    }

    return 0;
}

// ============================================================================
// Peripheral Configuration
// ============================================================================

void config_peripherals(void)
{
    // Configure GPIO directions
    WRITE_MM_REG(RGPIO1_INOUT, 0xFFFF);  // GPIO1: LEDs as outputs
    WRITE_MM_REG(RGPIO2_INOUT, 0x0000);  // GPIO2: Buttons as inputs
    
    // Initialize RGB controllers
    WRITE_MM_REG(RRGB0_CTRL, ENABLE_BIT); // RGB0 enabled, all channels off
    WRITE_MM_REG(RRGB1_CTRL, 0x00000000); // RGB1 disabled
    
    // Enable all seven-segment digits (active low)
    WRITE_MM_REG(SegEn_ADDR, 0x00);
}

// ============================================================================
// RGB PWM Control
// ============================================================================

void setRGB0_PWM(uint16_t red, uint16_t green, uint16_t blue)
{
    unsigned int control_word = ENABLE_BIT;
    
    // Pack duty cycles into control register
    // Format: [31]=enable, [30]=reserved, [29:20]=red, [19:10]=green, [9:0]=blue
    control_word |= ((unsigned int)red   << 20);
    control_word |= ((unsigned int)green << 10);
    control_word |= ((unsigned int)blue  << 0);
    
    WRITE_MM_REG(RRGB0_CTRL, control_word);
}

// ============================================================================
// Seven-Segment Display Update
// ============================================================================

uint8_t duty_to_percent(uint16_t duty)
{
    // Convert duty cycle (0-2047) to percentage (0-99)
    // Use integer math: (duty * 100) / 2047
    uint32_t percent = ((uint32_t)duty * 100) / MAX_DUTY_CYCLE;
    return (percent > 99) ? 99 : (uint8_t)percent;
}

void update_7seg_display(uint16_t red, uint16_t green, uint16_t blue)
{
    uint8_t R_percent = duty_to_percent(red);
    uint8_t G_percent = duty_to_percent(green);
    uint8_t B_percent = duty_to_percent(blue);

    // Extract decimal digits
    uint8_t R_tens = R_percent / 10;
    uint8_t R_ones = R_percent % 10;
    uint8_t G_tens = G_percent / 10;
    uint8_t G_ones = G_percent % 10;
    uint8_t B_tens = B_percent / 10;
    uint8_t B_ones = B_percent % 10;

    // Build display value
    // Format: [Dig7][Dig6][Dig5][Dig4][Dig3][Dig2][Dig1][Dig0]
    //         R_tens R_ones BLANK G_tens G_ones BLANK B_tens B_ones
    unsigned int seg_value = 
        ((unsigned int)R_tens << 28) |
        ((unsigned int)R_ones << 24) |
        (0x0 << 20) |                  // Blank digit
        ((unsigned int)G_tens << 16) |
        ((unsigned int)G_ones << 12) |
        (0x0 << 8)  |                  // Blank digit
        ((unsigned int)B_tens << 4)  |
        ((unsigned int)B_ones << 0);

    WRITE_MM_REG(SegDig_ADDR, seg_value);
}