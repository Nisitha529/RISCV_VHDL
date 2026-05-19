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
  input  logic                      instr_valid,

  output logic [DATA_WIDTH - 1 : 0] imem_addr,
  output logic                      instr_addr_valid,

  // IF/ID pipeline register outputs
  output logic [DATA_WIDTH - 1 : 0] if_id_pc,
  output logic [DATA_WIDTH - 1 : 0] if_id_instr,

  output logic                      if_id_valid
);

  // Internal PC signals
  logic [DATA_WIDTH - 1 : 0] pc;
  logic [DATA_WIDTH - 1 : 0] next_pc;

  logic                      fetch_stall;
  logic [DATA_WIDTH - 1 : 0] fetch_pc;

  logic                      pending_valid;
  logic [DATA_WIDTH - 1 : 0] pending_instr;
  logic [DATA_WIDTH - 1 : 0] pending_pc;

  // PC mux
  pc_mux pc_mux_01 (
    .pc          (pc),

    .redirect    (redirect),
    .redirect_pc (redirect_pc),

    .next_pc     (next_pc)
  );

  // PC register
  pc_reg pc_reg_01 (
    .clk         (clk),
    .rst         (rst),

    .stall       (fetch_stall),

    .next_pc     (next_pc),

    .pc          (pc)
  );

  // Instruction memory address
  assign imem_addr        = pc;

  assign fetch_stall      = stall || !instr_valid;

  assign instr_addr_valid = !stall;

  always_ff @(posedge clk) begin
    if (rst) begin
      fetch_pc <= '0;
    end else if (!stall && instr_addr_valid) begin
      fetch_pc <= pc;
    end
  end

  always_ff @(posedge clk) begin
    if (rst) begin
      pending_valid     <= 1'b0;
      if_id_pc          <= '0;
      if_id_instr       <= '0;
      if_id_valid       <= 1'b0;
    end else begin
      if (instr_valid && stall) begin
        pending_valid   <= 1'b1;
        pending_instr   <= instr_in;
        pending_pc      <= fetch_pc;
      end
      if (!stall) begin
        if (pending_valid) begin
          if_id_pc      <= pending_pc;
          if_id_instr   <= pending_instr;
          if_id_valid   <= 1'b1;
          pending_valid <= 1'b0;   
        end else if (instr_valid) begin
          if_id_pc      <= fetch_pc;
          if_id_instr   <= instr_in;
          if_id_valid   <= 1'b1;
        end else begin
          if_id_valid   <= 1'b0;
        end
      end else begin
        if_id_valid     <= 1'b0;
      end
    end
  end

  // // IF/ID pipeline register
  // always_ff @(posedge clk) begin : if_id_ff
  //   if (rst) begin
  //     if_id_pc    <= '0;
  //     if_id_instr <= '0;

  //     if_id_valid <= 1'b0;
  //   end else if (!fetch_stall && instr_valid) begin
  //     if_id_pc    <= fetch_pc;
  //     if_id_instr <= instr_in;

  //     if_id_valid <= 1'b1;
  //   end else begin
  //     if_id_valid <= 1'b0;
  //   end

  // end

endmodule