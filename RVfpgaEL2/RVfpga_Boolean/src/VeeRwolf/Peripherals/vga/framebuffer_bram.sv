//////////////////////////////////////////////////////////////////////
////                                                              ////
////  Frame Buffer Block RAM                                      ////
////                                                              ////
////  Simple dual-port RAM for 640x480 frame buffer               ////
////  - Write port for character/background rendering             ////
////  - Read port for video output (1-cycle latency)              ////
////                                                              ////
//////////////////////////////////////////////////////////////////////

module framebuffer_bram (
    input  logic        clk,
    /* verilator lint_off UNUSEDSIGNAL */
    input  logic        rst,  // Kept for interface consistency but not used (BRAMs don't need reset)
    /* verilator lint_on UNUSEDSIGNAL */
    
    // Write port
    input  logic        we,
    input  logic [18:0] waddr,  // 640*480 = 307200 needs 19 bits
    input  logic        wdata,
    
    // Read port
    input  logic [18:0] raddr,
    output logic        rdata
);

    // Frame buffer memory - will be inferred as BRAM by Vivado
    (* ram_style = "block" *) logic fb_mem [0:307199];
    
    // Registered output for BRAM inference
    logic rdata_reg;
    
    // Synchronous write, synchronous read (Simple Dual-Port RAM)
    always_ff @(posedge clk) begin
        if (we) begin
            fb_mem[waddr] <= wdata;
        end
        
        // Read with 1-cycle latency
        rdata_reg <= fb_mem[raddr];
    end
    
    assign rdata = rdata_reg;

endmodule
