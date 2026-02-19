// SPDX-License-Identifier: Apache-2.0
// Copyright 2019 Western Digital Corporation or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

//********************************************************************************
// $Id$
//
// Function: VeeRwolf Basys3 clock generation
// Comments:
//
//********************************************************************************

module clk_gen_boolean
  (input  wire i_clk,
   input  wire     i_rst,
   output wire     o_clk_core,  // 12.5 MHz
   output wire     o_clk_hdmi,  // 125 MHz
   output wire     o_clk_vga,   // 25 MHz
   output wire     o_clk_locked,
   output reg o_rst_core);

   wire   clkfb;
   wire   locked;
   reg 	  locked_r;
   
   // Unbuffered clock outputs from PLL
   wire   clk_core_unbuf;
   wire   clk_hdmi_unbuf;
   wire   clk_vga_unbuf;

   PLLE2_BASE
     #(.BANDWIDTH("OPTIMIZED"),
       .CLKFBOUT_MULT(10),      // 100MHz * 10 = 1000MHz (VCO frequency)
       .CLKIN1_PERIOD(10.0),    //100MHz
       .CLKOUT0_DIVIDE(80),     // 1000MHz / 80 = 12.5 MHz (core clk)
       .CLKOUT1_DIVIDE(8),      // 1000MHz / 8 = 125 MHz (HDMI clk)
       .CLKOUT2_DIVIDE(40),     // 1000MHz / 40 = 25 MHz (VGA clk)
       .DIVCLK_DIVIDE(1),
       .STARTUP_WAIT("FALSE"))
   PLLE2_BASE_inst
     (.CLKOUT0(clk_core_unbuf),
      .CLKOUT1(clk_hdmi_unbuf),
      .CLKOUT2(clk_vga_unbuf),
      .CLKOUT3(),
      .CLKOUT4(),
      .CLKOUT5(),
      .CLKFBOUT(clkfb),
      .LOCKED(locked),
      .CLKIN1(i_clk),
      .PWRDWN(1'b0),
      .RST(i_rst),
      .CLKFBIN(clkfb));

   // Global clock buffers for proper routing
   BUFG bufg_core (
      .I(clk_core_unbuf),
      .O(o_clk_core)
   );

   BUFG bufg_hdmi (
      .I(clk_hdmi_unbuf),
      .O(o_clk_hdmi)
   );

   BUFG bufg_vga (
      .I(clk_vga_unbuf),
      .O(o_clk_vga)
   );

   assign o_clk_locked = locked;

   always @(posedge o_clk_core) begin
      locked_r <= locked;
      o_rst_core <= !locked_r;
   end

endmodule
