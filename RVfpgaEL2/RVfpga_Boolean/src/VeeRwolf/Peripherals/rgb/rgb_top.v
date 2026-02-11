//////////////////////////////////////////////////////////////////////
////                                                              ////
////  WISHBONE RGB LED PWM Controller                             ////
////                                                              ////
////  Description                                                 ////
////  Wishbone-compatible RGB LED controller using PWM            ////
////                                                              ////
//////////////////////////////////////////////////////////////////////

`default_nettype none

module rgb_top
  #(parameter dw = 32,
    parameter aw = 8)
   (
    // WISHBONE Interface
    input wire             wb_clk_i,
    input wire             wb_rst_i,
    input wire             wb_cyc_i,
    input wire [aw-1:0]    wb_adr_i,
    input wire [dw-1:0]    wb_dat_i,
    input wire [3:0]       wb_sel_i,
    input wire             wb_we_i,
    input wire             wb_stb_i,
    output reg [dw-1:0]    wb_dat_o,
    output wire             wb_ack_o,
    output wire            wb_err_o,
    
    // RGB LED Outputs
    output wire [2:0]      rgb0_o,
    output wire [2:0]      rgb1_o
    );

   // Control registers
   reg [31:0]              rgb0_control;
   reg [31:0]              rgb1_control;
   wire [31:0]             rgb0_counter;
   wire [31:0]             rgb1_counter;

   // Address decode
   wire                    rgb0_ctrl_sel;
   wire                    rgb1_ctrl_sel;
   wire                    rgb0_cnt_sel;
   wire                    rgb1_cnt_sel;

   assign rgb0_ctrl_sel = wb_cyc_i & wb_stb_i & (wb_adr_i[3:2] == 2'b00);
   assign rgb1_ctrl_sel = wb_cyc_i & wb_stb_i & (wb_adr_i[3:2] == 2'b01);
   assign rgb0_cnt_sel  = wb_cyc_i & wb_stb_i & (wb_adr_i[3:2] == 2'b10);
   assign rgb1_cnt_sel  = wb_cyc_i & wb_stb_i & (wb_adr_i[3:2] == 2'b11);

    // WB Error
    assign wb_err_o = 1'b0; // No error generation for now
                            // TODO; add error generation later

   // WB Acknowledge
   assign wb_ack_o = wb_cyc_i & wb_stb_i & !wb_err_o; 


   // Write to RGB0 Control Register
   always @(posedge wb_clk_i or posedge wb_rst_i) begin
      if (wb_rst_i)
        rgb0_control <= 32'd0;
      else if (rgb0_ctrl_sel & wb_we_i)
        rgb0_control <= wb_dat_i;
   end

   // Write to RGB1 Control Register
   always @(posedge wb_clk_i or posedge wb_rst_i) begin
      if (wb_rst_i)
        rgb1_control <= 32'd0;
      else if (rgb1_ctrl_sel & wb_we_i)
        rgb1_control <= wb_dat_i;
   end

   // Read multiplexer
   always @(*) begin
      case (wb_adr_i[3:2])
        2'b00:   wb_dat_o = rgb0_control;  // BASE + 0x0
        2'b01:   wb_dat_o = rgb1_control;  // BASE + 0x4
        2'b10:   wb_dat_o = rgb0_counter;  // BASE + 0x8
        2'b11:   wb_dat_o = rgb1_counter;  // BASE + 0xC
        default: wb_dat_o = 32'd0;
      endcase
   end

   // RGB0 PWM Module
   rgbPWM #(
      .USE_DIVIDER  (1'b1),
      .DIVIDE_COUNT (50),
      .POLARITY     (1'b1),
      .MAX_COUNT    (2048)
   ) rgb0_pwm (
      .clk        (wb_clk_i),
      .resetn     (~wb_rst_i),
      .controlReg (rgb0_control),
      .rgbRED     (rgb0_o[0]),
      .rgbGREEN   (rgb0_o[1]),
      .rgbBLUE    (rgb0_o[2]),
      .clkPWM     (),
      .pwmcount   (rgb0_counter)
   );

   // RGB1 PWM Module
   rgbPWM #(
      .USE_DIVIDER  (1'b1),
      .DIVIDE_COUNT (50),
      .POLARITY     (1'b1),
      .MAX_COUNT    (2048)
   ) rgb1_pwm (
      .clk        (wb_clk_i),
      .resetn     (~wb_rst_i),
      .controlReg (rgb1_control),
      .rgbRED     (rgb1_o[0]),
      .rgbGREEN   (rgb1_o[1]),
      .rgbBLUE    (rgb1_o[2]),
      .clkPWM     (),
      .pwmcount   (rgb1_counter)
   );

endmodule

`default_nettype wire
