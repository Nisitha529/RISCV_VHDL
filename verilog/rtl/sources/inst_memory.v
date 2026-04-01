`include "memory_defines.vh"

module inst_memory (
  input                            clk,
  
  input  wire                      en,
  input  wire [`WORD_SIZE - 1 : 0] addr,

  output reg  [`WORD_SIZE - 1 : 0] data,
  
  input  wire                      load_we,
  input  wire [`WORD_SIZE - 1 : 0] load_addr,
  input  wire [`WORD_SIZE - 1 : 0] load_data
);

  // ROM content 
reg [`WORD_SIZE - 1 : 0] mem [0 : `INSTRUCTION_MEMORY_SIZE_WORDS - 1];

integer i;

`ifdef INIT_FROM_HEX
  initial begin
    $readmemh("/media/nisitha/My_Passport/MOODLE/Vivado_projects/RISCV_VHDL/verilog/rtl/sources/program.hex", mem);
    // Fill any remaining words with NOP if the file is shorter
    for (i = 0; i < `INSTRUCTION_MEMORY_SIZE_WORDS; i = i + 1) begin
        if (mem[i] === 32'hx) mem[i] = 32'h00000013;
    end
  end
 `endif

  wire [`WORD_SIZE - 3 : 0] word_index    = addr[31 : 2];
  wire [`WORD_SIZE - 3 : 0] load_index    = load_addr[31 : 2];

  wire                      access_enable = en && (word_index < `INSTRUCTION_MEMORY_SIZE_WORDS) && (addr[1 : 0] == 2'b00);
  wire                      load_valid    = load_we && (load_index < `INSTRUCTION_MEMORY_SIZE_WORDS) && (load_addr[1 : 0] == 2'b00);

  always @ (posedge clk) begin
    if (load_valid) begin
      mem[load_index] <= load_data;
    end
  end

  always @(*) begin
    if (access_enable) begin
      data = mem[word_index];
    end else begin
      data = 32'h00000013;   
    end
  end

endmodule