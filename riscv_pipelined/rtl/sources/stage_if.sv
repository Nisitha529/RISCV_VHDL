module stage_if #(
  parameter DATA_WIDTH = 32
)(
  input  logic                      clk,
  input  logic                      rst,

  // Hazard control
  input  logic                      stall,

  // Branch / jump redirect
  input  logic                      redirect,
  input  logic [DATA_WIDTH - 1 : 0] redirect_pc,

  // Instruction memory interface
  input  logic [DATA_WIDTH - 1 : 0] instr_in,
  output logic [DATA_WIDTH - 1 : 0] imem_addr,

  // IF/ID pipeline register outputs
  output logic [DATA_WIDTH - 1 : 0] if_id_pc,
  output logic [DATA_WIDTH - 1 : 0] if_id_instr,

  output logic                      if_id_valid
);

  // Internal PC signals
  logic [DATA_WIDTH - 1 : 0] pc;
  logic [DATA_WIDTH - 1 : 0] next_pc;

  // PC mux
  pc_mux pc_mux_inst (
    .pc          (pc),

    .redirect    (redirect),
    .redirect_pc (redirect_pc),

    .next_pc     (next_pc)
  );

  // PC register
  pc_reg pc_reg_inst (
    .clk         (clk),
    .rst         (rst),

    .stall       (stall),

    .next_pc     (next_pc),

    .pc          (pc)
  );

  // Instruction memory address
  assign imem_addr = pc;

  // IF/ID pipeline register
  always_ff @(posedge clk) begin : if_id_ff
    if (rst) begin
      if_id_pc    <= '0;
      if_id_instr <= '0;
      if_id_valid <= 1'b0;
    end else if (!stall) begin
      if_id_pc    <= pc;
      if_id_instr <= instr_in;
      if_id_valid <= 1'b1;
    end

  end

endmodule