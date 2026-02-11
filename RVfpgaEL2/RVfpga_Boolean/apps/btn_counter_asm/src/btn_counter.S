/*
 * btn_counter.S
 * 
 * Binary Counter on 16-bit LED Display
 * Counts 0-65535 with adjustable delay controlled by pushbuttons
 * BTN0: Increase delay (slower counting)
 * BTN1: Reset delay to minimum (faster counting)
 * 
 * Author: Reece
 * Date: January 2026
 */

 
#define GPIO1_BASEADDR   0x80001400
#define RGPIO1_SWs      (GPIO1_BASEADDR + 0x00) // input
#define RGPIO1_LEDs     (GPIO1_BASEADDR + 0x04) // output
#define RGPIO1_INOUT    (GPIO1_BASEADDR + 0x08) // output enable

#define GPIO2_BASEADDR   0x80001800            
#define RGPIO2_BTNs     (GPIO2_BASEADDR + 0x00) // input
#define RGPIO2_INOUT    (GPIO2_BASEADDR + 0x08) // output enable

#define BTN0_MASK       0x0001 
#define BTN1_MASK       0x0002 

#define MAX_COUNT       0x01000000
#define MIN_COUNT       0x00100000
#define COUNT_STEP      0x00100000


.globl main     

main: 

    li x28, 0xFFFF
    li x29, RGPIO1_INOUT
    sw x28, 0(x29)         # Enable low 16 bits as output for GPIO1 (LEDs)

    li x28, 0x0000
    li x29, RGPIO2_INOUT
    sw x28, 0(x29)         # Set GPIO2 (Buttons) as input
                           # Note: Probably not needed since default is input
                           # but doing for safe keeping

    # Initialize counter and delay
    li x30, 0              # LED counter starts at 0
    li x31, MIN_COUNT      # Initial delay value

main_loop:
    # Display counter on LEDs
    li x29, RGPIO1_LEDs
    sw x30, 0(x29)

    # Read buttons
    li x29, RGPIO2_BTNs
    lw x28, 0(x29)

    # Check BTN0 (increment delay - slow down counting)
    andi x27, x28, BTN0_MASK
    beq x27, zero, check_btn1
    
    # BTN0 pressed - increment delay
    li x27, COUNT_STEP
    add x31, x31, x27
    li x27, MAX_COUNT
    ble x31, x27, check_btn1
    li x31, MAX_COUNT       # Clamp to MAX_COUNT

check_btn1:
    # Check BTN1 (reset delay to minimum)
    andi x27, x28, BTN1_MASK
    beq x27, zero, delay_loop
    
    # BTN1 pressed - reset delay to MIN_COUNT
    li x31, MIN_COUNT

delay_loop:
    # Delay loop (similar to Blinky.S)
    li x26, 0              # Reset timer

delay_count:
    addi x26, x26, 1
    bne x31, x26, delay_count

    # Increment LED counter (wraps around at 16 bits)
    addi x30, x30, 1
    li x27, 0x10000
    bne x30, x27, main_loop
    li x30, 0              # Reset counter after reaching 65536
    j main_loop