# VGA Character Display Controller

A VGA character display controller with Wishbone interface for embedded RISC-V systems.

## Features

- **Resolution**: 640×480 @ 60Hz
- **Character Grid**: 40 columns × 30 rows (16×16 pixel font)
- **Color Depth**: 24-bit RGB (8 bits per channel)
- **Frame Buffer**: Single-bit depth (307,200 bits for 640×480)
- **Hardware Rendering**: Background fill and character writes execute in hardware
- **Dual Clock Design**: Wishbone clock domain (12.5 MHz) + VGA pixel clock domain (25 MHz)

---

## Memory Map

**Base Address**: `0x80001500`

| Offset | Register         | Access | Description                                      |
|--------|------------------|--------|--------------------------------------------------|
| 0x00   | CONTROL          | W      | Control register (trigger operations)            |
| 0x04   | STATUS           | R      | Status register (busy flag)                      |
| 0x08   | CHAR_POS         | R/W    | Character position (row, column)                 |
| 0x0C   | ASCII_CODE       | R/W    | ASCII character to render                        |
| 0x10   | CHAR_COLOR       | R/W    | Character foreground color (24-bit RGB)          |
| 0x14   | BG_COLOR         | R/W    | Background color (24-bit RGB)                    |

---

## Register Descriptions

### CONTROL (0x80001500)
**Write-only trigger register**

| Bit | Name       | Description                                    |
|-----|------------|------------------------------------------------|
| 0   | WRITE_CHAR | Write 1 to render character at CHAR_POS        |
| 1   | WRITE_BG   | Write 1 to fill entire screen with BG_COLOR    |
| 31:2| —          | Reserved (write 0)                             |

**Notes**:
- Only one operation can be active at a time
- Writing while BUSY=1 has no effect (writes are ignored)
- Control bits auto-clear when operation completes

---

### STATUS (0x80001504)
**Read-only status register**

| Bit | Name  | Description                                         |
|-----|-------|-----------------------------------------------------|
| 0   | BUSY  | 1 = Operation in progress, 0 = Idle (ready)         |
| 31:1| —     | Reserved (reads as 0)                               |

**Timing**:
- Character render: ~257 cycles @ 25 MHz (~10 μs)
- Background fill: ~307,200 cycles @ 25 MHz (~12.3 ms)

---

### CHAR_POS (0x80001508)
**Character grid position (R/W)**

| Bits  | Field  | Description                                      |
|-------|--------|--------------------------------------------------|
| 5:0   | COL    | Column position (0-39)                           |
| 7:6   | —      | Reserved                                         |
| 12:8  | ROW    | Row position (0-29)                              |
| 31:13 | —      | Reserved                                         |

**Example**: 
```c
uint32_t pos = (row << 8) | col;  // row=2, col=5 → 0x00000205
```

---

### ASCII_CODE (0x8000150C)
**ASCII character to render (R/W)**

| Bits | Field      | Description                                   |
|------|------------|-----------------------------------------------|
| 7:0  | ASCII      | ASCII code of character (32-127 supported)    |
| 31:8 | —          | Reserved                                      |

**Supported Range**: ASCII 32 (space) through 126 (~ tilde). Codes outside this range will render as blank.

---

### CHAR_COLOR (0x80001510)
**Character foreground color (R/W)**

24-bit RGB format:

| Bits  | Field | Description          |
|-------|-------|----------------------|
| 7:0   | BLUE  | Blue channel (0-255) |
| 15:8  | GREEN | Green channel (0-255)|
| 23:16 | RED   | Red channel (0-255)  |
| 31:24 | —     | Reserved             |

**Example**: White = `0x00FFFFFF`, Red = `0x00FF0000`

---

### BG_COLOR (0x80001514)
**Background color (R/W)**

Same format as CHAR_COLOR. Used for:
1. Background pixels (where framebuffer bit = 0)
2. Fill color when WRITE_BG operation is triggered

---

## Programming Examples

### Example 1: Write a Single Character

```c
#define VGA_BASE        0x80001500
#define VGA_CONTROL     (*(volatile uint32_t*)(VGA_BASE + 0x00))
#define VGA_STATUS      (*(volatile uint32_t*)(VGA_BASE + 0x04))
#define VGA_CHAR_POS    (*(volatile uint32_t*)(VGA_BASE + 0x08))
#define VGA_ASCII       (*(volatile uint32_t*)(VGA_BASE + 0x0C))
#define VGA_CHAR_COLOR  (*(volatile uint32_t*)(VGA_BASE + 0x10))
#define VGA_BG_COLOR    (*(volatile uint32_t*)(VGA_BASE + 0x14))

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

// Usage
vga_write_char(0, 0, 'A', 0x00FFFF00);  // Yellow 'A' at top-left
```

---

### Example 2: Clear Screen

```c
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

// Usage
vga_clear_screen(0x00000000);  // Clear to black
```

---

### Example 3: Print String

```c
void vga_print_string(uint8_t row, uint8_t col, const char* str, uint32_t color) {
    while (*str && col < 40) {
        vga_write_char(row, col++, *str++, color);
    }
}

// Usage
vga_print_string(10, 5, "Hello, World!", 0x0000FF00);  // Green text
```

---

## Hardware Architecture

### Frame Buffer (`framebuffer_bram.sv`)

**Type**: Simple Dual-Port Block RAM  
**Size**: 307,200 bits (640 × 480 pixels)  
**Depth**: 1-bit per pixel (monochrome bitmap)

**Interface**:
- **Write Port**: Character/background rendering (pixel clock domain)
- **Read Port**: Video output via DTG (pixel clock domain)
- **Latency**: 1 cycle registered output

**Memory Inference**:
```systemverilog
(* ram_style = "block" *) logic fb_mem [0:307199];
```

**Color Mapping**:
- Bit = 1: Display CHAR_COLOR (character pixel)
- Bit = 0: Display BG_COLOR (background pixel)

---

### Font ROM (`font_rom.sv`)

**Type**: Read-Only Memory (synthesized as BRAM)  
**Format**: 16×16 pixel bitmaps  
**Capacity**: 256 characters (full 8-bit ASCII range)

**Memory Layout**:
```
ROM Depth:  4,096 entries (16 rows × 256 characters)
Data Width: 256 bits (entire 16×16 bitmap in single read)
File:       bigfont.mem (hex format)
```

**Read Behavior**:
- **Address**: ASCII code (0-255)
- **Output**: Complete 16×16 bitmap (256 bits)
- **Latency**: 1 cycle (synchronous read)

**Bitmap Organization**:
```
data[15:0]    = Row 0  (top row)
data[31:16]   = Row 1
...
data[255:240] = Row 15 (bottom row)
```

Each 16-bit slice represents one horizontal row of the character, MSB = rightmost pixel.

---

## Timing Considerations

### Clock Domain Crossing

**WARNING**: The design has clock domain crossing between Wishbone (12.5 MHz) and VGA pixel clock (25 MHz):

- **Registers** (`control_reg`, `char_pos_reg`, etc.) are in **Wishbone domain**
- **State machines** and **rendering logic** are in **VGA pixel clock domain**
- **No CDC synchronizers** are currently implemented

**Current Implementation**: Works because clocks are phase-locked from same PLL with 2:1 ratio.

**For Production**: Add proper CDC synchronizers for:
1. Control signals (WB → VGA)
2. Status signals (VGA → WB)
3. Multi-bit data registers (WB → VGA)

### Operation Timing

| Operation       | Cycles (@ 25 MHz) | Time      |
|-----------------|-------------------|-----------|
| Character Write | 257               | ~10 μs    |
| Background Fill | 307,200           | ~12.3 ms  |

---

## Design Files

| File                    | Description                                    |
|-------------------------|------------------------------------------------|
| `vga_controller.sv`     | Main controller with Wishbone interface        |
| `framebuffer_bram.sv`   | 640×480 frame buffer memory                    |
| `font_rom.sv`           | 16×16 character font ROM                       |
| `dtg.v`                 | Display timing generator (640×480 @ 60Hz)      |
| `bigfont.mem`           | Font bitmap data (hex format)                  |

---

## Clock Requirements

- **Wishbone Clock** (`wb_clk_i`): 12.5 MHz (main system clock)
- **Pixel Clock** (`pixel_clk`): 25 MHz (VGA timing)
- **Reset**: Active-high synchronous reset (`wb_rst_i`)

Both clocks must be phase-locked (derived from same PLL) for proper operation.

---

## Known Limitations

1. **No CDC Synchronizers**: Relies on phase-locked clocks from same PLL
2. **Fixed Font Size**: 16×16 pixels only
3. **Monochrome Frame Buffer**: 1-bit depth limits rendering flexibility
4. **No Hardware Scrolling**: Software must manage character grid
5. **Write Blocking**: Cannot update registers during BUSY state

---

## Color Palette Examples

```c
#define COLOR_BLACK      0x00000000
#define COLOR_WHITE      0x00FFFFFF
#define COLOR_RED        0x00FF0000
#define COLOR_GREEN      0x0000FF00
#define COLOR_BLUE       0x000000FF
#define COLOR_YELLOW     0x00FFFF00
#define COLOR_CYAN       0x0000FFFF
#define COLOR_MAGENTA    0x00FF00FF
#define COLOR_ORANGE     0x00FF8000
#define COLOR_PURPLE     0x00800080
```

---

## Revision History

| Version | Date       | Changes                                    |
|---------|------------|--------------------------------------------|
| 1.0     | 2026-02-15 | Initial implementation with dual clocks    |

---

**Author**: Reece W. 

