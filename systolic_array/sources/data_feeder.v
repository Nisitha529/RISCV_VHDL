`timescale 1ns/1ps

module data_feeder #(
  parameter N          = 8,
  parameter DATA_WIDTH = 32
)(
  input                           clk,
  input                           rst_n,

  input                           start,

  input      [DATA_WIDTH - 1 : 0] mata      [0 : N - 1][0 : N - 1],
  input      [DATA_WIDTH - 1 : 0] matb      [0 : N - 1][0 : N - 1],

  output reg [DATA_WIDTH - 1 : 0] inp_north [0 : N - 1],
  output reg [DATA_WIDTH - 1 : 0] inp_west  [0 : N - 1],

  output reg                      valid,
  output reg                      done
);

  integer i;
  integer j;
  integer idx;

  reg [$clog2(2 * N) : 0] t;

  always @(posedge clk) begin
    if (!rst_n) begin
      t              <= 0;
      valid          <= 0;
      done           <= 0;

      for (i = 0; i < N; i++) begin
        inp_north[i] <= 0;
        inp_west[i]  <= 0;
      end

    end else begin

      if (start) begin

        if (t < 2*N - 1) begin
          valid      <= 1;

          // WEST (B)
          for (i=0;i<N;i++) begin
            idx <= t - i;
            
						if (idx >= 0 && idx < N) begin
       inp_west[i] <= matb[i][idx];
						end else begin
            inp_west[i] <= 0;
						end
end

// NORTH (A)
for (j=0;j<N;j++) begin
idx <= t - j;
if (idx >= 0 && idx < N)
inp_north[j] <= mata[idx][j];
else
inp_north[j] <= 0;
end

t <= t + 1;

end else begin
valid <= 0;
done  <= 1;

for (i=0;i<N;i++) begin
inp_north[i] <= 0;
inp_west[i]  <= 0;
end
end

end else begin
valid <= 0;
done  <= 0;
t     <= 0;
end
end
end

endmodule