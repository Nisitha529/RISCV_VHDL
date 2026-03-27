`include "cpu_defines.vh"
`include "memory_defines.vh"

module alu (
  input  wire [`WORD_SIZE - 1 : 0] op1,
  input  wire [`WORD_SIZE - 1 : 0] op2,
  input  wire [3 : 0]              aluop,
  
  output reg  [`WORD_SIZE - 1 : 0] result
);

  wire [4:0] shamt = op2[4:0];

  always @(*) begin
    case (aluop)
      `ALU_OP_ADD:  result = op1 + op2;
      `ALU_OP_PASS: result = op2;
      `ALU_OP_SUB:  result = op1 - op2;
      `ALU_OP_AND:  result = op1 & op2;
      `ALU_OP_OR:   result = op1 | op2;
      `ALU_OP_XOR:  result = op1 ^ op2;
      `ALU_OP_SLL:  result = op1 << shamt;
      `ALU_OP_SRL:  result = op1 >> shamt;
      `ALU_OP_SRA:  result = $signed(op1) >>> shamt;
      `ALU_OP_SLT:  result = ($signed(op1) < $signed(op2)) ? 32'd1 : 32'd0;
      `ALU_OP_SLTU: result = (op1 < op2) ? 32'd1 : 32'd0;
      
			default:      result = 32'd0;
    endcase
  end

endmodule