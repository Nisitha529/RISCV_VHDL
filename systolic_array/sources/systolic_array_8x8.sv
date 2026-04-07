`timescale 1ns/1ps

module systolic_array_8x8 # (
  parameter ARRAY_WIDTH = 8,
  parameter DATA_WIDTH  = 32  	
)(
  input                           clk,
  input                           rst_n,
  input                           rst_flush,
	
  input                           valid,

  input  [DATA_WIDTH - 1 : 0]     inp_west  [0 : ARRAY_WIDTH - 1],
  input  [DATA_WIDTH - 1 : 0]     inp_north [0 : ARRAY_WIDTH - 1],

  output [2 * DATA_WIDTH - 1 : 0] results   [0 : ARRAY_WIDTH * ARRAY_WIDTH - 1]
);

  // Internal connections
  wire [DATA_WIDTH - 1 : 0] south [0 : ARRAY_WIDTH * ARRAY_WIDTH - 1];
  wire [DATA_WIDTH - 1 : 0] east  [0 : ARRAY_WIDTH * ARRAY_WIDTH - 1];

  // PE Grid
  genvar i,j;

  generate
    for (i = 0; i < ARRAY_WIDTH; i = i + 1) begin : ROW
      for (j = 0; j < ARRAY_WIDTH; j = j + 1) begin : COL

        wire [DATA_WIDTH - 1 : 0] north_in;
        wire [DATA_WIDTH - 1 : 0] west_in;

        // North input
        if (i == 0) begin
          assign north_in = inp_north [j];
				end else begin
          assign north_in = south [(i - 1) * ARRAY_WIDTH + j];
				end

        // West input
        if (j == 0) begin
          assign west_in = inp_west [i];
				end else begin
          assign west_in = east [i * ARRAY_WIDTH + (j - 1)];
				end

        // Processing element
        block PE (
          .clk          (clk),
          .rst_n        (rst_n),
          .rst_flush    (rst_flush),
          .valid        (valid),

          .input_north  (north_in),
          .input_west   (west_in),

          .output_south (south [i * ARRAY_WIDTH + j]),
          .output_east  (east [i * ARRAY_WIDTH + j]),
          .result       (results [i * ARRAY_WIDTH + j])
        );

      end
    end
  endgenerate

endmodule