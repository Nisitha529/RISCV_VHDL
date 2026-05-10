module stage_id #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5
)(
  input  logic                      clk,
  input  logic                      rst,

  // IF/ID pipeline inputs
  input  logic [DATA_WIDTH - 1 : 0] if_id_pc,
  input  logic [DATA_WIDTH - 1 : 0] if_id_instr,

  input  logic                      if_id_valid,

  // Hazard control
  input  logic                      stall,
  input  logic                      flush,

  // Writeback interface (WB -> RegFile)
  input  logic                      wb_write_enable,

  input  logic [ADDR_WIDTH - 1 : 0] wb_rd_addr,
  input  logic [DATA_WIDTH - 1 : 0] wb_rd_data,

  // ID/EX pipeline register outputs
  output logic [DATA_WIDTH - 1 : 0] id_ex_pc,

  output logic [DATA_WIDTH - 1 : 0] id_ex_A,
  output logic [DATA_WIDTH - 1 : 0] id_ex_B,

  output logic [DATA_WIDTH - 1 : 0] id_ex_imm,

  output logic [ADDR_WIDTH - 1 : 0] id_ex_rs1,
  output logic [ADDR_WIDTH - 1 : 0] id_ex_rs2,
  output logic [ADDR_WIDTH - 1 : 0] id_ex_rd,

  // Control signals
  output logic [3 : 0]              id_ex_alu_op,
  output logic                      id_ex_alu_use_imm,

  output logic                      id_ex_write_rd,

  output logic                      id_ex_write_mem,
  output logic                      id_ex_mem_access,
  output logic [5 : 0]              id_ex_mem_width,

  output logic                      id_ex_jump,
  output logic                      id_ex_is_branch,

  output logic [2 : 0]              id_ex_rd_data_src,

  output logic [2 : 0]              id_ex_imm_type,

  output logic                      id_ex_valid
);

  // Decoder outputs
  logic [6 : 0] opcode;

  logic [4 : 0] rd;

  logic [2 : 0] funct3;

  logic [4 : 0] rs1;
  logic [4 : 0] rs2;

  logic [6 : 0] funct7;

  // Regfile wires
  logic [DATA_WIDTH - 1 : 0] rs1_data;
  logic [DATA_WIDTH - 1 : 0] rs2_data;

  // Immediate wire
  logic [DATA_WIDTH - 1 : 0] imm_out;

  // Intermediate control wires
  logic [3 : 0] alu_op_w;

  logic          alu_use_imm_w;

  logic          write_rd_w;

  logic          write_mem_w;
  logic          mem_access_w;

  logic [5 : 0] mem_width_w;

  logic          jump_w;
  logic          is_branch_w;

  logic [2 : 0] rd_data_src_w;

  logic [2 : 0] imm_type_w;

  // Decoder
  decoder decoder_01 (
    .instr        (if_id_instr),

    .opcode       (opcode),

    .rd           (rd),
    .funct3       (funct3),

    .rs1          (rs1),
    .rs2          (rs2),

    .funct7       (funct7)
  );

  // Control unit now drives intermediate wires
  control_unit control_unit_01 (
    .opcode       (opcode),
    .funct3       (funct3),
    .funct7       (funct7),

    .alu_op       (alu_op_w),
    .alu_use_imm  (alu_use_imm_w),

    .write_rd     (write_rd_w),

    .write_mem    (write_mem_w),
    .mem_access   (mem_access_w),

    .mem_width    (mem_width_w),

    .jump         (jump_w),
    .is_branch    (is_branch_w),

    .rd_data_src  (rd_data_src_w),

    .imm_type     (imm_type_w)
  );

  // Immediate Generator
  immediate_generator imm_gen_01 (
    .instr        (if_id_instr),

    .imm_type     (imm_type_w),

    .imm_out      (imm_out)
  );

  // Register File
  regfile regfile_01 (
    .clk          (clk),
    .rst          (rst),

    .rs1_addr     (rs1),
    .rs2_addr     (rs2),

    .write_enable (wb_write_enable),

    .rd_addr      (wb_rd_addr),
    .rd_data      (wb_rd_data),

    .rs1_data     (rs1_data),
    .rs2_data     (rs2_data)
  );

  // ID/EX pipeline register
  always_ff @(posedge clk) begin : id_ex_ff

    if (rst || flush) begin

      id_ex_pc           <= '0;

      id_ex_A            <= '0;
      id_ex_B            <= '0;

      id_ex_imm          <= '0;

      id_ex_rs1          <= '0;
      id_ex_rs2          <= '0;
      id_ex_rd           <= '0;

      // Reset control signals
      id_ex_alu_op       <= '0;

      id_ex_alu_use_imm  <= 1'b0;

      id_ex_write_rd     <= 1'b0;

      id_ex_write_mem    <= 1'b0;
      id_ex_mem_access   <= 1'b0;

      id_ex_mem_width    <= '0;

      id_ex_jump         <= 1'b0;
      id_ex_is_branch    <= 1'b0;

      id_ex_rd_data_src  <= '0;

      id_ex_imm_type     <= '0;

      id_ex_valid        <= 1'b0;

    end else if (!stall && if_id_valid) begin

      id_ex_pc           <= if_id_pc;

      id_ex_A            <= rs1_data;
      id_ex_B            <= rs2_data;

      id_ex_imm          <= imm_out;

      id_ex_rs1          <= rs1;
      id_ex_rs2          <= rs2;

      id_ex_rd           <= rd;

      // Register control signals
      id_ex_alu_op       <= alu_op_w;

      id_ex_alu_use_imm  <= alu_use_imm_w;

      id_ex_write_rd     <= write_rd_w;

      id_ex_write_mem    <= write_mem_w;
      id_ex_mem_access   <= mem_access_w;

      id_ex_mem_width    <= mem_width_w;

      id_ex_jump         <= jump_w;
      id_ex_is_branch    <= is_branch_w;

      id_ex_rd_data_src  <= rd_data_src_w;

      id_ex_imm_type     <= imm_type_w;

      id_ex_valid        <= 1'b1;

    end
  end

endmodule