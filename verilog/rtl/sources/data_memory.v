`include "memory_defines.vh"

module data_memory (
  input  wire                      clk,
  input  wire [`WORD_SIZE - 1 : 0] addr,

  input  wire                      write_enable,
  input  wire                      access_enable,

  input  wire [1 : 0]              access_width,

  input  wire [`WORD_SIZE - 1 : 0] wdata,
  output wire [`WORD_SIZE - 1 : 0] rdata
);

wire [`WORD_SIZE - 1 : 0] ram_out; 
wire [`WORD_SIZE - 1 : 0] rom_out;

wire                      ram_en;
wire                      rom_en;

assign ram_en = access_enable && (addr >= `DATA_RAM_BASE_ADDRESS) && (addr < `DATA_RAM_BASE_ADDRESS + `DATA_RAM_MEMORY_SIZE_BYTES);
assign rom_en = access_enable && (addr >= `DATA_ROM_BASE_ADDRESS) && (addr < `DATA_ROM_BASE_ADDRESS + `DATA_ROM_MEMORY_SIZE_BYTES);

wire [`WORD_SIZE - 1 : 0] rel_addr_ram = addr - `DATA_RAM_BASE_ADDRESS;
wire [`WORD_SIZE - 1 : 0] rel_addr_rom = addr - `DATA_ROM_BASE_ADDRESS;

data_ram ram_inst (
  .clk          (clk),
  .addr         (rel_addr_ram),

  .en           (ram_en),
  .we           (write_enable),

  .access_width (access_width),

  .di           (wdata),
  .do           (ram_out)
);

data_rom rom_inst (
  .addr         (rel_addr_rom),
  .en           (rom_en),
  .access_width (access_width),

  .dout         (rom_out)
);

assign rdata = (rom_en) ? rom_out : (ram_en) ? ram_out : 32'hFFFFFFFF;

endmodule