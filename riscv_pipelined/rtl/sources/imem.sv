module imem #(
  parameter DATA_WIDTH = 32,
  parameter MEM_DEPTH  = 1024,
  parameter MEM_FILE   = "program.hex"
)(
  input  logic                      clk, 
  input  logic                      rst,

  input  logic [DATA_WIDTH - 1 : 0] addr,
  input  logic                      instr_addr_valid,

  output reg   [DATA_WIDTH - 1 : 0] instr,
  output reg                        instr_valid
);

  integer i;
  // Instruction memory array
  logic [DATA_WIDTH - 1 : 0] mem [0 : MEM_DEPTH - 1];

  logic [DATA_WIDTH - 1 : 0] word_addr;

  // Program loading
  initial begin
    for (i = 0; i < MEM_DEPTH; i = i + 1) begin
      mem[i] = 32'h00000013;
    end

    $readmemh(MEM_FILE, mem);
  end

  assign word_addr = addr [DATA_WIDTH - 1 : 2];

  // Word-aligned instruction fetch
  // assign instr = mem[addr[31 : 2]];
  always @(posedge clk) begin
    if (rst) begin
      instr         <= '0;
      instr_valid   <= 1'b0;
    end else if (instr_addr_valid) begin
      if (word_addr < MEM_DEPTH) begin
        instr       <= mem[word_addr];
        instr_valid <= 1'b1;
      end else begin
        instr       <= 32'h00000013;
        instr_valid <= 1'b0;
      end
    end else begin
      instr         <= 32'h00000013;
      instr_valid   <= 1'b0;
    end
  end

endmodule