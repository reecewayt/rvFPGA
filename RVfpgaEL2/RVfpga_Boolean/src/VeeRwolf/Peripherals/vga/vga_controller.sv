//////////////////////////////////////////////////////////////////////
////                                                              ////
////  VGA Character Display Controller with Wishbone Interface    ////
////                                                              ////
////  - 640x480 @ 60Hz resolution with 24-bit RGB output          ////
////  - 40x30 character grid (16x16 pixel font)                   ////
////  - Frame buffer-based rendering with sequential updates      ////
////  - Wishbone-compatible register interface                    ////
////                                                              ////
//////////////////////////////////////////////////////////////////////

// Main controller states
typedef enum logic [1:0] {
   IDLE,
   WRITE_CHAR,
   WRITE_BACKGROUND
} mode_state_t;

// Character rendering sub-states
typedef enum logic [1:0] { 
   CHAR_IDLE,
   CHAR_WAIT_ROM,
   CHAR_RENDER
} char_render_state_t;

// Background fill sub-states
typedef enum logic [1:0] { 
   BACKGROUND_IDLE,
   BACKGROUND_FILL
} background_render_state_t;




module vga_controller
  #(parameter int dw = 32,
    parameter int aw = 8,
    parameter int RGB_DEPTH = 8)  // Bits per color channel (default 8 for 24-bit RGB)
   (
    // WISHBONE Interface
    input  logic             wb_clk_i,
    input  logic             wb_rst_i,
    input  logic             wb_cyc_i,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic [aw-1:0]    wb_adr_i,  // Only bits [5:2] used for register decode
    input  logic [dw-1:0]    wb_dat_i,
    input  logic [3:0]       wb_sel_i,  // Unused - all writes are full-word
    /* verilator lint_on UNUSEDSIGNAL */
    input  logic             wb_we_i,
    input  logic             wb_stb_i,
    output logic [dw-1:0]    wb_dat_o,
    output logic             wb_ack_o,
    output logic             wb_err_o,
    
    // VGA signals
    input logic              pixel_clk,  // Pixel clock (25 MHz for 640x480 @ 60Hz)
    output logic             hsync,
    output logic             vsync,
    output logic             video_on,
    output logic [RGB_DEPTH-1:0]       red,
    output logic [RGB_DEPTH-1:0]       green,
    output logic [RGB_DEPTH-1:0]       blue
    );

   
   //=============================================================================
   // INTERNAL SIGNALS
   //=============================================================================
   
   // Display timing signals from DTG
   /* verilator lint_off UNUSEDSIGNAL */
   logic [11:0] pixel_row;     // Only bits [8:0] used (max 479)
   logic [11:0] pixel_column;  // Only bits [9:0] used (max 639)
   /* verilator lint_on UNUSEDSIGNAL */
   
   // Pipelined pixel coordinates (for BRAM read latency)
   /* verilator lint_off UNUSEDSIGNAL */
   logic [9:0] pixel_column_d;  // Reserved for future pipelining
   logic [8:0] pixel_row_d;     // Reserved for future pipelining
   /* verilator lint_on UNUSEDSIGNAL */
   
   // Frame buffer BRAM interface
   logic        fb_we;         // Write enable
   logic [18:0] fb_waddr;      // Write address
   logic        fb_wdata;      // Write data (1 bit)
   logic [18:0] fb_raddr;      // Read address
   logic        fb_rdata;      // Read data (1 bit, registered)
   
   // Address conversion function: converts (x,y) to linear address
   /* verilator lint_off WIDTHEXPAND */
   function automatic logic [18:0] xy_to_addr(input logic [9:0] x, input logic [8:0] y);
      return (y * 10'd640) + x;
   endfunction
   /* verilator lint_on WIDTHEXPAND */

   // Font ROM interface
   logic [7:0]   font_addr;
   logic [255:0] char_bitmap;  // 16x16 character bitmap from ROM

   // Wishbone register map
   logic [dw-1:0] control_reg;   // 0x00: Control register (bit[0]=char, bit[1]=bg)
   logic [dw-1:0] status_reg;    // 0x04: Status (bit[0]=busy)
   logic [dw-1:0] char_pos_reg;  // 0x08: Character position (row[12:8], col[5:0])
   logic [7:0]    ascii_char;    // 0x0C: ASCII character code
   logic [dw-1:0] char_color;    // 0x10: Character color (RGB)
   logic [dw-1:0] bg_color;      // 0x14: Background color (RGB)

   // Register select signals
   logic control_sel;
   logic status_sel;
   logic char_pos_sel;
   logic ascii_code_sel;
   logic char_color_sel;
   logic bg_color_sel;

   // State machine registers
   mode_state_t            main_state, main_state_next;
   char_render_state_t     char_state, char_state_next;
   background_render_state_t bg_state, bg_state_next;

   // Control signals
   logic busy;
   logic start_char_render;
   logic start_bg_fill;
   logic char_render_done;
   logic bg_fill_done;
   logic clear_control_reg;

   // Pixel iteration counters
   logic [9:0] pixel_x;      // 0-639 (background) or 0-15 (character)
   logic [8:0] pixel_y;      // 0-479 (background) or 0-15 (character)
   logic [9:0] char_base_x;  // Character base X coordinate
   logic [8:0] char_base_y;  // Character base Y coordinate

   //=============================================================================
   // SUBMODULE INSTANTIATIONS
   //=============================================================================

   // Display timing generator (640x480 @ 60Hz)
   dtg dtg_inst (
      .clock       (pixel_clk),
      .rst         (wb_rst_i),
      .horiz_sync  (hsync),
      .vert_sync   (vsync),
      .video_on    (video_on),
      .pixel_row   (pixel_row),
      .pixel_column(pixel_column)
   );

   // Font ROM (16x16 bitmaps for ASCII characters)
   font_rom #(
      .MEM_FILE("bigfont.mem")
   ) font_rom_inst (
      .clk  (pixel_clk),
      .addr (font_addr),
      .data (char_bitmap)
   );

   // Frame buffer BRAM (640x480 = 307200 bits)
   framebuffer_bram fb_bram_inst (
      .clk   (pixel_clk),
      .rst   (wb_rst_i),
      .we    (fb_we),
      .waddr (fb_waddr),
      .wdata (fb_wdata),
      .raddr (fb_raddr),
      .rdata (fb_rdata)
   );

   //=============================================================================
   // COMBINATIONAL LOGIC
   //=============================================================================

   // Font address calculation (ASCII 32-127 maps to ROM addresses 0-95)
   assign font_addr = ascii_char - 8'h20;

   // Status register
   assign status_reg[0] = busy;
   assign status_reg[31:1] = 31'd0;  // Unused bits tied to 0
   assign busy = (main_state != IDLE);

   // Frame buffer read address (for video output)
   assign fb_raddr = xy_to_addr(pixel_column[9:0], pixel_row[8:0]);

   // Pipeline pixel coordinates to align with BRAM read latency
   always_ff @(posedge pixel_clk or posedge wb_rst_i) begin
      if (wb_rst_i) begin
         pixel_column_d <= '0;
         pixel_row_d <= '0;
      end else begin
         pixel_column_d <= pixel_column[9:0];
         pixel_row_d <= pixel_row[8:0];
      end
   end

   // RGB output: select color based on framebuffer bit (uses pipelined coordinates)
   always_comb begin
      if (fb_rdata) begin
         // Character pixel - use char_color
         red   = char_color[23:16];
         green = char_color[15:8];
         blue  = char_color[7:0];
      end else begin
         // Background pixel - use bg_color
         red   = bg_color[23:16];
         green = bg_color[15:8];
         blue  = bg_color[7:0];
      end
   end


   //=============================================================================
   // WISHBONE REGISTER INTERFACE
   //=============================================================================

   // Address decode
   always_comb begin
      if (wb_cyc_i && wb_stb_i) begin
         control_sel    = (wb_adr_i[5:2] == 4'h0);  // 0x00
         status_sel     = (wb_adr_i[5:2] == 4'h1);  // 0x04
         char_pos_sel   = (wb_adr_i[5:2] == 4'h2);  // 0x08
         ascii_code_sel = (wb_adr_i[5:2] == 4'h3);  // 0x0C
         char_color_sel = (wb_adr_i[5:2] == 4'h4);  // 0x10
         bg_color_sel   = (wb_adr_i[5:2] == 4'h5);  // 0x14
      end else begin
         control_sel    = 1'b0;
         status_sel     = 1'b0;
         char_pos_sel   = 1'b0;
         ascii_code_sel = 1'b0;
         char_color_sel = 1'b0;
         bg_color_sel   = 1'b0;
      end
   end

   // Register writes (only accepted when IDLE to prevent mid-operation changes)
   always_ff @(posedge wb_clk_i or posedge wb_rst_i) begin
      if (wb_rst_i) begin
         control_reg  <= '0;
         char_pos_reg <= '0;
         ascii_char   <= '0;
         char_color   <= '0;
         bg_color     <= '0;
      end else begin
         // State machine can clear control register after operation completes
         if (clear_control_reg) begin
            control_reg <= '0;
         end
         // Wishbone writes only accepted when IDLE
         else if (main_state == IDLE && wb_we_i) begin
            if (control_sel)    control_reg  <= wb_dat_i;
            if (char_pos_sel)   char_pos_reg <= wb_dat_i;
            if (ascii_code_sel) ascii_char   <= wb_dat_i[7:0];
            if (char_color_sel) char_color   <= wb_dat_i;
            if (bg_color_sel)   bg_color     <= wb_dat_i;
         end
      end
   end

   // Register reads and Wishbone acknowledgement
   always_comb begin
      wb_ack_o = wb_cyc_i && wb_stb_i;  // Acknowledge all valid transactions
      wb_err_o = 1'b0;  // No error conditions
      
      priority if (control_sel)
         wb_dat_o = control_reg;
      else if (status_sel)
         wb_dat_o = status_reg;
      else if (char_pos_sel)
         wb_dat_o = char_pos_reg;
      else if (ascii_code_sel)
         wb_dat_o = {24'd0, ascii_char};
      else if (char_color_sel)
         wb_dat_o = char_color;
      else if (bg_color_sel)
         wb_dat_o = bg_color;
      else
         wb_dat_o = '0;
   end


   //=============================================================================
   // MAIN CONTROLLER STATE MACHINE
   //=============================================================================

   // State register (async reset)
   always_ff @(posedge pixel_clk or posedge wb_rst_i) begin
      if (wb_rst_i)
         main_state <= IDLE;
      else
         main_state <= main_state_next;
   end

   // Next state logic
   always_comb begin
      main_state_next = main_state;
      start_char_render = 1'b0;
      start_bg_fill = 1'b0;
      clear_control_reg = 1'b0;
      
      case (main_state)
         IDLE: begin
            // Check control register bits to start operations
            if (control_reg[0])
               main_state_next = WRITE_CHAR;
            else if (control_reg[1])
               main_state_next = WRITE_BACKGROUND;
         end
         
         WRITE_CHAR: begin
            start_char_render = 1'b1;
            if (char_render_done) begin
               main_state_next = IDLE;
               clear_control_reg = 1'b1;  // Clear control register when done
            end
         end
         
         WRITE_BACKGROUND: begin
            start_bg_fill = 1'b1;
            if (bg_fill_done) begin
               main_state_next = IDLE;
               clear_control_reg = 1'b1;  // Clear control register when done
            end
         end
         
         default: main_state_next = IDLE;
      endcase
   end

   //=============================================================================
   // CHARACTER RENDER STATE MACHINE
   //=============================================================================

   // State register (async reset)
   always_ff @(posedge pixel_clk or posedge wb_rst_i) begin
      if (wb_rst_i)
         char_state <= CHAR_IDLE;
      else
         char_state <= char_state_next;
   end

   // Next state logic
   always_comb begin
      char_state_next = char_state;
      char_render_done = 1'b0;
      
      case (char_state)
         CHAR_IDLE: begin
            if (start_char_render)
               char_state_next = CHAR_WAIT_ROM;
         end
         
         CHAR_WAIT_ROM: begin
            char_state_next = CHAR_RENDER;
         end
         
         CHAR_RENDER: begin
            if (pixel_x == 15 && pixel_y == 15) begin
               char_state_next = CHAR_IDLE;
               char_render_done = 1'b1;
            end
         end
         
         default: begin
            char_state_next = CHAR_IDLE;
            char_render_done = 1'b0;
         end
      endcase
   end

   // Datapath (combined character rendering and background fill)
   // Both operations share the same write port and counters
   always_ff @(posedge pixel_clk or posedge wb_rst_i) begin
      if (wb_rst_i) begin
         pixel_x <= '0;
         pixel_y <= '0;
         char_base_x <= '0;
         char_base_y <= '0;
         fb_we <= 1'b0;
         fb_waddr <= '0;
         fb_wdata <= '0;
      end else begin
         // Default: no write
         fb_we <= 1'b0;
         
         // Character rendering datapath
         case (char_state)
            CHAR_IDLE: begin
               if (start_char_render) begin
                  char_base_x <= {4'd0, char_pos_reg[5:0]} << 4;   // Column * 16
                  char_base_y <= {4'd0, char_pos_reg[12:8]} << 4;  // Row * 16
                  pixel_x <= '0;
                  pixel_y <= '0;
               end
            end
            
            CHAR_RENDER: begin
               // Write one bit per pixel based on font bitmap
               fb_we <= 1'b1;
               fb_waddr <= xy_to_addr(char_base_x + pixel_x, char_base_y + pixel_y);
               fb_wdata <= char_bitmap[pixel_y*16 + pixel_x];

               // Increment to next pixel
               if (pixel_x == 15) begin
                  pixel_x <= '0;
                  pixel_y <= (pixel_y == 15) ? '0 : pixel_y + 1;
               end else begin
                  pixel_x <= pixel_x + 1;
               end
            end
            
            default: begin
               // Do nothing
            end
         endcase
         
         // Background fill datapath (runs when char_state is IDLE)
         case (bg_state)
            BACKGROUND_IDLE: begin
               if (start_bg_fill) begin
                  pixel_x <= '0;
                  pixel_y <= '0;
               end
            end
            
            BACKGROUND_FILL: begin
               // Clear pixel (set to background)
               fb_we <= 1'b1;
               fb_waddr <= xy_to_addr(pixel_x, pixel_y);
               fb_wdata <= 1'b0;
               
               // Increment to next pixel
               if (pixel_x == 639) begin
                  pixel_x <= '0;
                  pixel_y <= (pixel_y == 479) ? '0 : pixel_y + 1;
               end else begin
                  pixel_x <= pixel_x + 1;
               end
            end
            
            default: begin
               // Do nothing
            end
         endcase
      end
   end

   //=============================================================================
   // BACKGROUND FILL STATE MACHINE
   //=============================================================================

   // State register (async reset)
   always_ff @(posedge pixel_clk or posedge wb_rst_i) begin
      if (wb_rst_i)
         bg_state <= BACKGROUND_IDLE;
      else
         bg_state <= bg_state_next;
   end

   // Next state logic
   always_comb begin
      bg_state_next = bg_state;
      bg_fill_done = 1'b0;
      
      case (bg_state)
         BACKGROUND_IDLE: begin
            if (start_bg_fill)
               bg_state_next = BACKGROUND_FILL;
         end
         
         BACKGROUND_FILL: begin
            if (pixel_x == 639 && pixel_y == 479) begin
               bg_state_next = BACKGROUND_IDLE;
               bg_fill_done = 1'b1;
            end
         end
         
         default: begin
            bg_state_next = BACKGROUND_IDLE;
            bg_fill_done = 1'b0;
         end
      endcase
   end

endmodule 


