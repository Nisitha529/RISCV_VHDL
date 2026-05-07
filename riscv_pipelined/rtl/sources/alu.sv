module alu #(
	parameter DATA_WIDTH = 32
)(
	input  logic [DATA_WIDTH - 1 : 0] op1,
	input  logic [DATA_WIDTH - 1 : 0] op2,

	input  logic [3: 0]               alu_op,

	output logic [DATA_WIDTH - 1 : 0] result,
	output logic                      zero
);

  logic [4 : 0] shamt;

	assign shamt = op2 [4 : 0];

  always_comb begin : alu_comb
    case (alu_op)
      4'd0    : result = op1 + op2;
      4'd1    : result = op2;
      4'd2    : result = op1 - op2;
      4'd3    : result = op1 & op2;
      4'd4    : result = op1 | op2;
      4'd5    : result = op1 ^ op2;
      4'd6    : result = op1 << shamt;
      4'd7    : result = op1 >> shamt;
      4'd8    : result = $signed(op1) >>> shamt;
      4'd9    : result = ($signed(op1) < $signed(op2)) ? 32'd1 : 32'd0;
      4'd10   : result = (op1 < op2) ? 32'd1 : 32'd0;
      
			default : result = 32'd0;
    endcase
	end

	assign zero = (result == 32'd0);
	
endmodule