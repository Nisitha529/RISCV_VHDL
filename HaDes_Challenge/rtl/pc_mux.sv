module pc_mux #(
parameter DATA_WIDTH = 32
)(
  input  logic [DATA_WIDTH - 1 : 0] pc,

  input  logic                      redirect,
  input  logic [DATA_WIDTH - 1 : 0] redirect_pc,

  output logic [DATA_WIDTH - 1 : 0] next_pc
);

  always_comb begin
    if (redirect) begin
      next_pc = redirect_pc;
    end else begin
      next_pc = pc + 4;
    end

  end

endmodule