`timescale 1ns/1ps

module data_feeder #(
  parameter N          = 4,
  parameter DATA_WIDTH = 32
)(
  input                           clk,
  input                           rst_n,
  
  input                           start,

  input      [DATA_WIDTH - 1 : 0] mata [0 : N - 1][0 : N - 1],
  input      [DATA_WIDTH - 1 : 0] matb [0 : N - 1][0 : N - 1],

  output reg [DATA_WIDTH - 1 : 0] inp_north [0 : N - 1],
  output reg [DATA_WIDTH - 1 : 0] inp_west  [0 : N - 1],

  output reg                      valid,
  output reg                      done
);

  integer t;
  integer i;

  always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      t     <= 0;
      valid <= 0;
      done  <= 0;

      for (i = 0; i < N; i = i + 1) begin
        inp_north [i] <= 0;
        inp_west [i]  <= 0;
      end
      
    end else begin
      if (start && !done) begin
        valid <= 1;
        
        for (i = 0; i < N; i = i + 1) begin

          // A flows right
          if ((t - i) >= 0 && (t - i) < N) begin
            inp_west[i] <= mata[i][t - i];
          end else begin
            inp_west[i] <= 0;
          end

          // B flows down
          if ((t - i) >= 0 && (t - i) < N) begin
            inp_north[i] <= matb[t - i][i];
          end else begin
            inp_north[i] <= 0;
          end
          
        end
        
        t <= t + 1;

        if (t == (2 * N + N - 2)) begin
          done  <= 1;
          valid <= 0;
        end
        
      end else begin
        valid <= 0;
      end
      
    end
  end

endmodule