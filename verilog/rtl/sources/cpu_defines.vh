`ifndef CPU_DEFINES_VH
`define CPU_DEFINES_VH

`define WORD_SIZE                32
`define REG_COUNT                32
`define REG_ADDR_WIDTH           5

// NOP instruction
`define INSTR_NOP                32'h00000013

// ALU operation codes 
`define ALU_OP_ADD               4'd0
`define ALU_OP_SUB               4'd1
`define ALU_OP_SLT               4'd2
`define ALU_OP_SLTU              4'd3
`define ALU_OP_AND               4'd4
`define ALU_OP_OR                4'd5
`define ALU_OP_XOR               4'd6
`define ALU_OP_SLL               4'd7
`define ALU_OP_SRL               4'd8
`define ALU_OP_SRA               4'd9
`define ALU_OP_PASS              4'd10

// Opcodes 
`define INSTR_OP_LUI             7'b0110111
`define INSTR_OP_AUIPC           7'b0010111
`define INSTR_OP_JAL             7'b1101111
`define INSTR_OP_JALR            7'b1100111
`define INSTR_OP_BRANCH          7'b1100011
`define INSTR_OP_LOAD            7'b0000011
`define INSTR_OP_STORE           7'b0100011
`define INSTR_OP_REG_IMM         7'b0010011
`define INSTR_OP_REG_REG         7'b0110011
`define INSTR_OP_FENCE           7'b0001111
`define INSTR_OP_SYSTEM          7'b1110011

// Funct3 
`define INSTR_F3_ADD             3'b000
`define INSTR_F3_SUB             3'b000
`define INSTR_F3_SLL             3'b001
`define INSTR_F3_SLT             3'b010
`define INSTR_F3_SLTU            3'b011
`define INSTR_F3_XOR             3'b100
`define INSTR_F3_SRL             3'b101
`define INSTR_F3_SRA             3'b101
`define INSTR_F3_OR              3'b110
`define INSTR_F3_AND             3'b111

`define INSTR_F3_ADDI            3'b000
`define INSTR_F3_SLLI            3'b001
`define INSTR_F3_SLTI            3'b010
`define INSTR_F3_SLTIU           3'b011
`define INSTR_F3_XORI            3'b100
`define INSTR_F3_SRLI            3'b101
`define INSTR_F3_SRAI            3'b101
`define INSTR_F3_ORI             3'b110
`define INSTR_F3_ANDI            3'b111

`define INSTR_F3_LB              3'b000
`define INSTR_F3_LH              3'b001
`define INSTR_F3_LW              3'b010
`define INSTR_F3_LBU             3'b100
`define INSTR_F3_LHU             3'b101

`define INSTR_F3_SB              3'b000
`define INSTR_F3_SH              3'b001
`define INSTR_F3_SW              3'b010

`define INSTR_F3_BEQ             3'b000
`define INSTR_F3_BNE             3'b001
`define INSTR_F3_BLT             3'b100
`define INSTR_F3_BGE             3'b101
`define INSTR_F3_BLTU            3'b110
`define INSTR_F3_BGEU            3'b111

`define INSTR_F3_FENCE           3'b000
`define INSTR_F3_ECALL           3'b000
`define INSTR_F3_EBREAK          3'b000

// Funct7 (7 bits)
`define INSTR_F7_SLLI            7'b0000000
`define INSTR_F7_SRLI            7'b0000000
`define INSTR_F7_SRAI            7'b0100000
`define INSTR_F7_ADD             7'b0000000
`define INSTR_F7_SUB             7'b0100000
`define INSTR_F7_SLL             7'b0000000
`define INSTR_F7_SLT             7'b0000000
`define INSTR_F7_SLTU            7'b0000000
`define INSTR_F7_XOR             7'b0000000
`define INSTR_F7_SRL             7'b0000000
`define INSTR_F7_SRA             7'b0100000
`define INSTR_F7_OR              7'b0000000
`define INSTR_F7_AND             7'b0000000

// Control unit output encodings

// PC next source 
`define PC_NEXT_SRC_PC_ALU_RES   2'b00
`define PC_NEXT_SRC_PC_IMM       2'b01
`define PC_NEXT_SRC_PC_4         2'b10

// Branch type 
`define BRANCH_TYPE_NONE         3'b000
`define BRANCH_TYPE_BEQ          3'b001
`define BRANCH_TYPE_BNE          3'b010
`define BRANCH_TYPE_BLT          3'b011
`define BRANCH_TYPE_BGE          3'b100

// Register write data source 
`define RD_DATA_SRC_PC_IMM       3'b000
`define RD_DATA_SRC_PC_4         3'b001
`define RD_DATA_SRC_IMM          3'b010
`define RD_DATA_SRC_ALU_RESULT   3'b011
`define RD_DATA_SRC_MEM_DATA_OUT 3'b100

// Memory access width
`define MEM_ACCESS_WIDTH_8       2'b00
`define MEM_ACCESS_WIDTH_16      2'b01
`define MEM_ACCESS_WIDTH_32      2'b10

`endif