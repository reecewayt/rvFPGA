// Font ROM Module
// Synthesizable ROM for VGA character display
// Reads complete 16x16 character bitmap in a single cycle

module font_rom #(
    parameter MEM_FILE = "bigfont.mem",
    parameter ADDR_WIDTH = 8,           // 256 addresses for 256 characters
    parameter DATA_WIDTH = 256,         // 16 rows x 16 bits per row = 256 bits per character
    parameter CHAR_WIDTH = 16,          // Character width in pixels
    parameter ROM_DEPTH = 4096
) (
    input  logic                    clk,
    input  logic [ADDR_WIDTH-1:0]   addr,      // Character address (0-255)
    output logic [DATA_WIDTH-1:0]   data       // Complete 16x16 character bitmap
);

    // ROM storage array - stores individual rows
    logic [CHAR_WIDTH-1:0] rom [0:ROM_DEPTH-1];
    
    // Initialize ROM from memory file
    initial begin
        $readmemh(MEM_FILE, rom);
    end

    // Calculate starting row address for the character
    logic [11:0] char_addr;
    assign char_addr = {addr, 4'b0000};  // addr << 4, each character takes 16 rows
    
    // Synchronous read for synthesis - read all 16 rows in one cycle
    always_ff @(posedge clk) begin
        data[15:0]    <= rom[char_addr];
        data[31:16]   <= rom[char_addr + 1];
        data[47:32]   <= rom[char_addr + 2];
        data[63:48]   <= rom[char_addr + 3];
        data[79:64]   <= rom[char_addr + 4];
        data[95:80]   <= rom[char_addr + 5];
        data[111:96]  <= rom[char_addr + 6];
        data[127:112] <= rom[char_addr + 7];
        data[143:128] <= rom[char_addr + 8];
        data[159:144] <= rom[char_addr + 9];
        data[175:160] <= rom[char_addr + 10];
        data[191:176] <= rom[char_addr + 11];
        data[207:192] <= rom[char_addr + 12];
        data[223:208] <= rom[char_addr + 13];
        data[239:224] <= rom[char_addr + 14];
        data[255:240] <= rom[char_addr + 15];
    end

endmodule
