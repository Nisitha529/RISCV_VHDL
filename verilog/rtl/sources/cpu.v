`include "cpu_defines.vh"
`include "memory_defines.vh"

module cpu (
  input  wire          clk,
  input  wire          resetn,

  // Instruction memory interface
  input  wire          imem_ready,
  output wire          imem_valid,
  output wire [31 : 0] imem_addr,
  input  wire [31 : 0] imem_rdata,

  // Data memory interface
  input  wire          dmem_ready,
  output wire          dmem_valid,
  output wire [31 : 0] dmem_addr,
  output wire          dmem_write_enable,
  output wire [1 : 0]  dmem_access_width,
  output wire [31 : 0] dmem_wdata,
  input  wire [31 : 0] dmem_rdata
  
  // Debug
  // output wire [31 : 0] trace_regs [0 : 31]
);

  wire [31 : 0] instruction;
  wire [4 : 0]  rs1_addr; 
  wire [4 : 0]  rs2_addr; 
  wire [4 : 0]  rd_addr;

  wire [31 : 0] imm;
  wire [6 : 0]  opcode;
  wire [2 : 0]  funct3;
  wire [6 : 0]  funct7;

  wire [31 : 0] rs1_data; 
  wire [31 : 0] rs2_data; 
  reg  [31 : 0] rd_data;
  wire [31 : 0] alu_result;
  reg  [31 : 0] pc; 
	reg  [31 : 0] pc_next; 
	wire [31 : 0] pc_4; 
	wire [31 : 0] pc_imm;

  wire          alu_use_imm; 
	wire          write_rd; 
	wire          write_mem; 
	wire          take_branch; 
	wire          jump; 
	wire          mem_access;

  wire [2 : 0]  rd_data_src;
  wire [3 : 0]  aluop;
  wire [1 : 0]  mem_access_width;
  reg  [1 : 0]  pc_next_sel;

  wire          enable;
  reg  [31 : 0] mem_data;

  // Decoder
  decode decode_inst (
    .instr            (instruction),

    .rs1              (rs1_addr),
    .rs2              (rs2_addr),

    .rd               (rd_addr),

    .imm              (imm),

    .opcode           (opcode),
    .funct3           (funct3),
    .funct7           (funct7)
  );

  // Control unit
  control_unit control_inst (
    .opcode           (opcode),
    .funct3           (funct3),
    .funct7           (funct7),

    .alu_result       (alu_result),

    .alu_use_imm      (alu_use_imm),

    .write_rd         (write_rd),
    .write_mem        (write_mem),
    .take_branch      (take_branch),
    .rd_data_src      (rd_data_src),

    .jump             (jump),
    
		.aluop            (aluop),
    
		.mem_access_width (mem_access_width),
    .mem_access       (mem_access)
  );

  // Register file
  regfile regfile_inst (
    .clk              (clk),
    .resetn           (resetn),

    .regwrite         (write_rd),
    
		.rs1_addr         (rs1_addr),
    .rs2_addr         (rs2_addr),

    .rd_addr          (rd_addr),
    .rd_data          (rd_data),

    .rs1_data         (rs1_data),
    .rs2_data         (rs2_data)

    // .regs             (trace_regs)
  );

  // ALU
  alu alu_inst (
    .op1              (rs1_data),
    .op2              ((alu_use_imm) ? imm : rs2_data),
    .aluop            (aluop),
    .result           (alu_result)
  );

  // PC logic
  assign pc_4   = pc + 4;
  assign pc_imm = pc + imm;

  always @(*) begin
    pc_next_sel = `PC_NEXT_SRC_PC_4;

    if (jump && (opcode == `INSTR_OP_JALR)) begin
      pc_next_sel = `PC_NEXT_SRC_PC_ALU_RES;
		end else if ((jump && (opcode == `INSTR_OP_JAL)) || take_branch) begin
      pc_next_sel = `PC_NEXT_SRC_PC_IMM;
		end
  end

  always @(*) begin
    case (pc_next_sel)
      `PC_NEXT_SRC_PC_ALU_RES: pc_next   = { alu_result[31:1], 1'b0 };
      `PC_NEXT_SRC_PC_IMM:     pc_next   = pc_imm;
      
			default:                 pc_next   = pc_4;
    endcase
  end

  // Write‑back mux
  always @(*) begin
    case (rd_data_src)
      `RD_DATA_SRC_IMM:          rd_data = imm;
      `RD_DATA_SRC_MEM_DATA_OUT: rd_data = mem_data;
      `RD_DATA_SRC_PC_4:         rd_data = pc_4;
      `RD_DATA_SRC_PC_IMM:       rd_data = pc_imm;
      
			default:                   rd_data = alu_result;
    endcase
  end

  // Instruction memory interface
  assign imem_valid        = 1'b1;
  assign imem_addr         = pc;
  assign instruction       = imem_rdata;

  // Data memory interface
  assign dmem_valid        = mem_access;
  assign dmem_addr         = alu_result;
  assign dmem_wdata        = rs2_data;
  assign dmem_write_enable = write_mem;
  assign dmem_access_width = mem_access_width;

  // Load data sign‑extension (simplified, only LB, LH, LW)
  always @(*) begin
    if (opcode == `INSTR_OP_LOAD && funct3 == `INSTR_F3_LH) begin
      mem_data = { {16{dmem_rdata[15]}}, dmem_rdata[15:0] };
		end else if (opcode == `INSTR_OP_LOAD && funct3 == `INSTR_F3_LB) begin
      mem_data = { {24{dmem_rdata[7]}}, dmem_rdata[7:0] };
		end else begin
      mem_data = dmem_rdata;
		end
  end

  // Stall / enable
  assign enable = imem_ready && ((~mem_access) || dmem_ready);

  // Program counter register
  always @(posedge clk) begin
    if (!resetn) begin
      pc <= 32'd0;
		end else if (enable) begin
      pc <= pc_next;
		end
  end

endmodule