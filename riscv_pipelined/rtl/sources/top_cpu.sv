module top_cpu #(
  parameter DATA_WIDTH  = 32,
  parameter ADDR_WIDTH  = 32,

  parameter IMEM_DEPTH  = 256,
  parameter DMEM_DEPTH  = 256,

  parameter MEM_FILE    = "program.hex"
)(
  input logic clk,
  input logic rst
);

  // IF stage wires
  logic [31 : 0] if_id_pc;
  logic [31 : 0] if_id_instr;

  logic          if_id_valid;

  logic [31 : 0] imem_addr;
  logic          imem_instr_addr_valid;

  logic [31 : 0] imem_instr;
  logic          imem_instr_valid;

  // ID/EX wires
  logic [31 : 0] id_ex_pc;

  logic [31 : 0] id_ex_A;
  logic [31 : 0] id_ex_B;

  logic [31 : 0] id_ex_imm;

  logic [4 : 0]  id_ex_rs1;
  logic [4 : 0]  id_ex_rs2;
  logic [4 : 0]  id_ex_rd;

  logic [3 : 0]  id_ex_alu_op;
  logic          id_ex_alu_use_imm;

  logic          id_ex_write_rd;

  logic          id_ex_write_mem;
  logic          id_ex_mem_access;

  logic [5 : 0]  id_ex_mem_width;

  logic          id_ex_jump;
  logic          id_ex_is_branch;

  logic [2 : 0]  id_ex_rd_data_src;

  logic [2 : 0]  id_ex_imm_type;

  logic          id_ex_valid;

  // EX/MEM wires
  logic [31 : 0] ex_mem_pc;

  logic [31 : 0] ex_mem_alu_result;
  logic [31 : 0] ex_mem_B;

  logic [4 : 0]  ex_mem_rd;

  logic [3 : 0]  ex_mem_alu_op;

  logic          ex_mem_alu_use_imm;

  logic          ex_mem_write_rd;

  logic          ex_mem_write_mem;
  logic          ex_mem_mem_access;

  logic [5 : 0]  ex_mem_mem_width;

  logic          ex_mem_jump;
  logic          ex_mem_is_branch;

  logic [2 : 0]  ex_mem_rd_data_src;

  logic [2 : 0]  ex_mem_imm_type;

  logic          ex_mem_take_branch;

  logic [31 : 0] ex_mem_branch_target;

  logic          ex_mem_valid;

  // MEM/WB wires
  logic [31 : 0] mem_wb_alu_result;
  logic [31 : 0] mem_wb_mem_data;

  logic [4 : 0]  mem_wb_rd;

  logic          mem_wb_write_rd;

  logic [2 : 0]  mem_wb_rd_data_src;

  logic          mem_wb_valid;

  // WB -> Regfile
  logic          regfile_write_enable;

  logic [4 : 0]  regfile_rd_addr;

  logic [31 : 0] regfile_rd_data;

  // Hazard wires
  logic stall;
  logic flush;
  logic stall_mem;

  // DMEM interface
  logic          dmem_mem_valid;
  logic          dmem_mem_ready;

  logic          dmem_write_enable;

  logic [5 : 0]  dmem_mem_width;

  logic [31 : 0] dmem_addr;
  logic [31 : 0] dmem_write_data;

  logic [31 : 0] dmem_read_data;
  logic          dmem_read_valid;

  // Flush pipeline when branch/jump redirect happens
  assign flush = ex_mem_valid && (ex_mem_take_branch || ex_mem_jump);

  assign stall = stall_mem;

  // IMEM
  imem #(
    .DATA_WIDTH            (32),
    .MEM_DEPTH             (IMEM_DEPTH),
    .MEM_FILE              (MEM_FILE)
  ) imem_01 (
    .clk                   (clk),
    .rst                   (rst),

    .addr                  (imem_addr),
    .instr_addr_valid      (imem_instr_addr_valid),

    .instr                 (imem_instr),
    .instr_valid           (imem_instr_valid)
  );

  // DMEM
  dmem #(
    .DATA_WIDTH            (DATA_WIDTH),
    .ADDR_WIDTH            (ADDR_WIDTH),
    .MEM_DEPTH             (DMEM_DEPTH)
  ) dmem_01 (
    .clk                   (clk),
    .rst                   (rst),

    .mem_valid             (dmem_mem_valid),
    .mem_ready             (dmem_mem_ready),

    .write_enable          (dmem_write_enable),

    .mem_width             (dmem_mem_width),

    .addr                  (dmem_addr),
    .write_data            (dmem_write_data),

    .read_data             (dmem_read_data),
    .read_valid            (dmem_read_valid)
  );

  // IF STAGE
  stage_if stage_if_01 (
    .clk                   (clk),
    .rst                   (rst),

    .stall                 (stall),

    .redirect              (flush),
    .redirect_pc           (ex_mem_branch_target),

    .instr_in              (imem_instr),
    .instr_valid           (imem_instr_valid),

    .imem_addr             (imem_addr),
    .instr_addr_valid      (imem_instr_addr_valid),

    .if_id_pc              (if_id_pc),
    .if_id_instr           (if_id_instr),

    .if_id_valid           (if_id_valid)
  );

  // ID STAGE
  stage_id stage_id_01 (
    .clk                   (clk),
    .rst                   (rst),

    .if_id_pc              (if_id_pc),
    .if_id_instr           (if_id_instr),

    .if_id_valid           (if_id_valid),

    .stall                 (stall),

    .flush                 (flush),

    .wb_write_enable       (regfile_write_enable),

    .wb_rd_addr            (regfile_rd_addr),
    .wb_rd_data            (regfile_rd_data),

    .id_ex_pc              (id_ex_pc),

    .id_ex_A               (id_ex_A),
    .id_ex_B               (id_ex_B),

    .id_ex_imm             (id_ex_imm),

    .id_ex_rs1             (id_ex_rs1),
    .id_ex_rs2             (id_ex_rs2),
    .id_ex_rd              (id_ex_rd),

    .id_ex_alu_op          (id_ex_alu_op),
    .id_ex_alu_use_imm     (id_ex_alu_use_imm),

    .id_ex_write_rd        (id_ex_write_rd),

    .id_ex_write_mem       (id_ex_write_mem),
    .id_ex_mem_access      (id_ex_mem_access),
    .id_ex_mem_width       (id_ex_mem_width),

    .id_ex_jump            (id_ex_jump),
    .id_ex_is_branch       (id_ex_is_branch),

    .id_ex_rd_data_src     (id_ex_rd_data_src),

    .id_ex_imm_type        (id_ex_imm_type),

    .id_ex_valid           (id_ex_valid)
  );

  // EX STAGE
  stage_ex stage_ex_01 (
    .clk                   (clk),
    .rst                   (rst),

    .id_ex_pc              (id_ex_pc),

    .id_ex_A               (id_ex_A),
    .id_ex_B               (id_ex_B),

    .id_ex_imm             (id_ex_imm),

    .id_ex_rs1             (id_ex_rs1),
    .id_ex_rs2             (id_ex_rs2),
    .id_ex_rd              (id_ex_rd),

    .id_ex_alu_op          (id_ex_alu_op),
    .id_ex_alu_use_imm     (id_ex_alu_use_imm),

    .id_ex_write_rd        (id_ex_write_rd),

    .id_ex_write_mem       (id_ex_write_mem),
    .id_ex_mem_access      (id_ex_mem_access),
    .id_ex_mem_width       (id_ex_mem_width),

    .id_ex_jump            (id_ex_jump),
    .id_ex_is_branch       (id_ex_is_branch),

    .id_ex_rd_data_src     (id_ex_rd_data_src),

    .id_ex_imm_type        (id_ex_imm_type),

    .id_ex_valid           (id_ex_valid),

    .fwd_ex_mem_valid      (ex_mem_valid),
    .fwd_ex_mem_write_rd   (ex_mem_write_rd),

    .fwd_ex_mem_rd         (ex_mem_rd),

    .fwd_ex_mem_alu_result (ex_mem_alu_result),

    .mem_wb_valid          (mem_wb_valid),
    .mem_wb_write_rd       (mem_wb_write_rd),

    .mem_wb_rd             (mem_wb_rd),

    .mem_wb_alu_result     (mem_wb_alu_result),
    .mem_wb_mem_data       (mem_wb_mem_data),

    .mem_wb_rd_data_src    (mem_wb_rd_data_src),

    .ex_mem_pc             (ex_mem_pc),

    .ex_mem_alu_result     (ex_mem_alu_result),
    .ex_mem_B              (ex_mem_B),

    .ex_mem_rd             (ex_mem_rd),

    .ex_mem_alu_op         (ex_mem_alu_op),
    .ex_mem_alu_use_imm    (ex_mem_alu_use_imm),

    .ex_mem_write_rd       (ex_mem_write_rd),

    .ex_mem_write_mem      (ex_mem_write_mem),
    .ex_mem_mem_access     (ex_mem_mem_access),
    .ex_mem_mem_width      (ex_mem_mem_width),

    .ex_mem_jump           (ex_mem_jump),
    .ex_mem_is_branch      (ex_mem_is_branch),

    .ex_mem_rd_data_src    (ex_mem_rd_data_src),

    .ex_mem_imm_type       (ex_mem_imm_type),

    .ex_mem_take_branch    (ex_mem_take_branch),
    .ex_mem_branch_target  (ex_mem_branch_target),

    .ex_mem_valid          (ex_mem_valid)
  );

  // MEM STAGE
  stage_mem stage_mem_01 (
    .clk                   (clk),
    .rst                   (rst),

    .ex_mem_alu_result     (ex_mem_alu_result),
    .ex_mem_B              (ex_mem_B),

    .ex_mem_rd             (ex_mem_rd),

    .ex_mem_write_rd       (ex_mem_write_rd),

    .ex_mem_write_mem      (ex_mem_write_mem),
    .ex_mem_mem_access     (ex_mem_mem_access),
    .ex_mem_mem_width      (ex_mem_mem_width),

    .ex_mem_rd_data_src    (ex_mem_rd_data_src),

    .ex_mem_valid          (ex_mem_valid),

    .dmem_mem_ready        (dmem_mem_ready),
    .dmem_mem_valid        (dmem_mem_valid),
    
    .dmem_write_enable     (dmem_write_enable),

    .dmem_mem_width        (dmem_mem_width),

    .dmem_addr             (dmem_addr),
    .dmem_write_data       (dmem_write_data),

    .dmem_read_data        (dmem_read_data),
    .dmem_read_valid       (dmem_read_valid),

    .stall_mem             (stall_mem),

    .mem_wb_alu_result     (mem_wb_alu_result),
    .mem_wb_mem_data       (mem_wb_mem_data),

    .mem_wb_rd             (mem_wb_rd),

    .mem_wb_write_rd       (mem_wb_write_rd),

    .mem_wb_rd_data_src    (mem_wb_rd_data_src),

    .mem_wb_valid          (mem_wb_valid)
  );

  // WB STAGE
  stage_wb stage_wb_01 (
    .mem_wb_alu_result     (mem_wb_alu_result),
    .mem_wb_mem_data       (mem_wb_mem_data),

    .mem_wb_rd             (mem_wb_rd),

    .mem_wb_write_rd       (mem_wb_write_rd),
    .mem_wb_rd_data_src    (mem_wb_rd_data_src),

    .mem_wb_valid          (mem_wb_valid),

    .regfile_write_enable  (regfile_write_enable),

    .regfile_rd_addr       (regfile_rd_addr),
    .regfile_rd_data       (regfile_rd_data)
  );

endmodule