module pc_reg #(
parameter DATA_WIDTH = 32
)(
  input  logic                      clk,
  input  logic                      rst,

  input  logic                      stall,

  input  logic [DATA_WIDTH - 1 : 0] next_pc,

  output logic [DATA_WIDTH - 1 : 0] pc
);

  always_ff @(posedge clk) begin
    if (rst) begin
      pc <= '0;
    end else if (!stall) begin
      pc <= next_pc;
    end

  end

endmodule