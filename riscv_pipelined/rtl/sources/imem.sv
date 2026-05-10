module imem #(
  parameter DATA_WIDTH = 32,
  parameter MEM_DEPTH  = 1024,
  parameter MEM_FILE   = "program.hex"
)(
  input  logic [DATA_WIDTH - 1 : 0] addr,
  output logic [DATA_WIDTH - 1 : 0] instr
);

  integer i;
  // Instruction memory array
  logic [DATA_WIDTH - 1 : 0] mem [0 : MEM_DEPTH - 1];

  // Program loading
  initial begin
    for (i = 0; i < MEM_DEPTH; i = i + 1) begin
      mem[i] = 32'h00000013;
    end

    $readmemh(MEM_FILE, mem);
  end

  // Word-aligned instruction fetch
  assign instr = mem[addr[31 : 2]];

endmodule