`include "cpu_defines.vh"
`include "memory_defines.vh"

module control_unit (
  input  wire [6 : 0]  opcode,
  input  wire [2 : 0]  funct3,
  input  wire [6 : 0]  funct7,

  input  wire [31 : 0] alu_result,

  output reg           alu_use_imm,

  output reg           write_rd,
  output reg           write_mem,
  output reg           take_branch,
  output reg [2 : 0]   rd_data_src,

  output reg           jump,

  output reg [3 : 0]   aluop,

  output reg [1 : 0]   mem_access_width,
  output reg           mem_access
);

  reg [2:0] branch;

  always @(*) begin
    jump = (opcode == `INSTR_OP_JAL) || (opcode == `INSTR_OP_JALR);
  end

  always @(*) begin
    branch = `BRANCH_TYPE_NONE;
    
    if (opcode == `INSTR_OP_BRANCH) begin
      if (funct3 == `INSTR_F3_BEQ) begin
        branch = `BRANCH_TYPE_BEQ;
      end else if (funct3 == `INSTR_F3_BNE) begin
        branch = `BRANCH_TYPE_BNE;
      end else if (funct3 == `INSTR_F3_BLT) begin  
        branch = `BRANCH_TYPE_BLT;
      end else if (funct3 == `INSTR_F3_BGE) begin 
        branch = `BRANCH_TYPE_BGE;
      end
    end
  end

  always @(*) begin
    aluop   = `ALU_OP_ADD; 
    
    if ((opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SUB && funct7 == `INSTR_F7_SUB) || (opcode == `INSTR_OP_BRANCH && (funct3 == `INSTR_F3_BEQ || funct3 == `INSTR_F3_BNE))) begin
      aluop = `ALU_OP_SUB;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_SLTI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SLT && funct7 == `INSTR_F7_SLT) || (opcode == `INSTR_OP_BRANCH && (funct3 == `INSTR_F3_BLT || funct3 == `INSTR_F3_BGE))) begin
      aluop = `ALU_OP_SLT;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_SLTIU) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SLTU && funct7 == `INSTR_F7_SLTU) || (opcode == `INSTR_OP_BRANCH && (funct3 == `INSTR_F3_BLTU || funct3 == `INSTR_F3_BGEU))) begin
      aluop = `ALU_OP_SLTU;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_ANDI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_AND && funct7 == `INSTR_F7_AND)) begin
      aluop = `ALU_OP_AND;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_ORI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_OR && funct7 == `INSTR_F7_OR)) begin
      aluop = `ALU_OP_OR;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_XORI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_XOR && funct7 == `INSTR_F7_XOR)) begin
      aluop = `ALU_OP_XOR;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_SLLI && funct7 == `INSTR_F7_SLLI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SLL && funct7 == `INSTR_F7_SLL)) begin
      aluop = `ALU_OP_SLL;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_SRLI && funct7 == `INSTR_F7_SRLI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SRL && funct7 == `INSTR_F7_SRL)) begin
      aluop = `ALU_OP_SRL;
    end else if ((opcode == `INSTR_OP_REG_IMM && funct3 == `INSTR_F3_SRAI && funct7 == `INSTR_F7_SRAI) || (opcode == `INSTR_OP_REG_REG && funct3 == `INSTR_F3_SRA && funct7 == `INSTR_F7_SRA)) begin
      aluop = `ALU_OP_SRA;
    end 
  end

  // ALU operand B source
  always @(*) begin
    alu_use_imm = (opcode == `INSTR_OP_REG_IMM) || (opcode == `INSTR_OP_JALR) || (opcode == `INSTR_OP_LOAD) || (opcode == `INSTR_OP_STORE);
  end

  // Register write enable
  always @(*) begin
    write_rd    = ~((opcode == `INSTR_OP_BRANCH) || (opcode == `INSTR_OP_STORE) || (opcode == `INSTR_OP_FENCE) || (opcode == `INSTR_OP_SYSTEM));
  end

  // Data memory write enable
  always @(*) begin 
		write_mem   = (opcode == `INSTR_OP_STORE);
	end

  // Memory access enable
  always @(*) begin 
		mem_access  = (opcode == `INSTR_OP_LOAD) || (opcode == `INSTR_OP_STORE);
	end

  // Branch taken condition
  always @(*) begin
    take_branch = 0;
  
	  if (opcode == `INSTR_OP_BRANCH) begin
      case (branch)
        `BRANCH_TYPE_BEQ: take_branch = (alu_result == 32'd0);
        `BRANCH_TYPE_BNE: take_branch = (alu_result != 32'd0);
        `BRANCH_TYPE_BLT: take_branch = (alu_result == 32'd1);
        `BRANCH_TYPE_BGE: take_branch = (alu_result == 32'd0);
    
		    default: take_branch = 0;
      endcase
    end
  end

  // Register write data source
  always @(*) begin
    rd_data_src   = `RD_DATA_SRC_ALU_RESULT;
    
		if (opcode == `INSTR_OP_AUIPC) begin     
			rd_data_src = `RD_DATA_SRC_PC_IMM;
		end else if (opcode == `INSTR_OP_JAL) begin
			rd_data_src = `RD_DATA_SRC_PC_4;
		end else if (opcode == `INSTR_OP_JALR) begin
			rd_data_src = `RD_DATA_SRC_PC_4;
		end else if (opcode == `INSTR_OP_LUI) begin 
			rd_data_src = `RD_DATA_SRC_IMM;
		end else if (opcode == `INSTR_OP_LOAD) begin 
			rd_data_src = `RD_DATA_SRC_MEM_DATA_OUT;
		end
  end

  // Memory access width
  always @(*) begin
    mem_access_width = `MEM_ACCESS_WIDTH_8; 
    
		if ((opcode == `INSTR_OP_LOAD && funct3 == `INSTR_F3_LW) || (opcode == `INSTR_OP_STORE && funct3 == `INSTR_F3_SW)) begin
      mem_access_width = `MEM_ACCESS_WIDTH_32;
		end else if ((opcode == `INSTR_OP_LOAD && (funct3 == `INSTR_F3_LH || funct3 == `INSTR_F3_LHU)) || (opcode == `INSTR_OP_STORE && funct3 == `INSTR_F3_SH)) begin
      mem_access_width = `MEM_ACCESS_WIDTH_16;
		end
  end

endmodule