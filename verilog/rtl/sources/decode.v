`include "cpu_defines.vh"
`include "memory_defines.vh"

module decode (
  input  wire [`WORD_SIZE - 1 : 0] instr,

  output wire [4 : 0]              rs1,
  output wire [4 : 0]              rs2,

  output wire [4 : 0]              rd,

  output wire [`WORD_SIZE - 1 : 0] imm,

  output wire [6 : 0]              opcode,
  output wire [2 : 0]              funct3,
  output wire [6 : 0]              funct7
);

assign opcode = instr[6:0];
assign rd     = instr[11:7];
assign rs1    = instr[19:15];
assign rs2    = instr[24:20];
assign funct3 = instr[14:12];
assign funct7 = instr[31:25];

// Immediate generation
reg [31:0] imm_u;
reg [31:0] imm_j; 
reg [31:0] imm_i; 
reg [31:0] imm_b; 
reg [31:0] imm_s;

always @(*) begin
  imm_u = { instr[31:12], 12'd0 };                                          // U-type
  imm_j = { {12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0 }; // J-type
  imm_i = { {20{instr[31]}}, instr[30:20] };                                // I-type
  imm_b = { {20{instr[31]}}, instr[7], instr[30:25], instr[11:8], 1'b0 };   // B-type
  imm_s = { {21{instr[31]}}, instr[30:25], instr[11:7] };                   // S-type
end

always @(*) begin
  case (opcode)
    `INSTR_OP_LUI, `INSTR_OP_AUIPC:                    imm = imm_u;
    `INSTR_OP_JAL:                                     imm = imm_j;
    `INSTR_OP_JALR, `INSTR_OP_LOAD, `INSTR_OP_REG_IMM: imm = imm_i;
    `INSTR_OP_BRANCH:                                  imm = imm_b;
    `INSTR_OP_STORE:                                   imm = imm_s;
    
		default:                                           imm = 32'd0;
  endcase
end

endmodule