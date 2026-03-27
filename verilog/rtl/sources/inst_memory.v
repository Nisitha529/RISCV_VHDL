`include "memory_defines.vh"

module inst_memory (
  input  wire                      en,
  input  wire [`WORD_SIZE - 1 : 0] addr,

  output reg  [`WORD_SIZE - 1 : 0] data
);

  // ROM content 
reg [`WORD_SIZE - 1 : 0] mem [0 : `INSTRUCTION_MEMORY_SIZE_WORDS - 1];

integer i;

initial begin
    $readmemh("/media/nisitha/My_Passport/MOODLE/Vivado_projects/RISCV_VHDL/verilog/rtl/sources/program.hex", mem);
    // Fill any remaining words with NOP if the file is shorter
    for (i = 0; i < `INSTRUCTION_MEMORY_SIZE_WORDS; i = i + 1) begin
        if (mem[i] === 32'hx) mem[i] = 32'h00000013;
    end
end

wire word_index    = addr[31 : 2];
wire access_enable = en && (word_index < `INSTRUCTION_MEMORY_SIZE_WORDS) && (addr[1 : 0] == 2'b00);

always @(*) begin
  if (access_enable) begin
    data = mem[word_index];
  end else begin
    data = 32'h00000013;   
  end
end

endmodule