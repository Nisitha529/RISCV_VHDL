`timescale 1ns/1ps
module block #(
  parameter  DATA_WIDTH = 32
)(
  input      [DATA_WIDTH-1:0]   input_north,
  input      [DATA_WIDTH-1:0]   input_west,

  input                         clk,
  input                         rst_n,
  input                         rst_flush,
  input                         valid,

  output reg [DATA_WIDTH-1:0]   output_south,
  output reg [DATA_WIDTH-1:0]   output_east,
  output reg [2*DATA_WIDTH-1:0] result
);

  reg        [2*DATA_WIDTH-1:0] mult_reg;

  always @(posedge clk) begin
    if (!rst_n || rst_flush) begin
      output_south   <= {DATA_WIDTH{1'b0}};
      output_east    <= {DATA_WIDTH{1'b0}};
      result         <= {2*DATA_WIDTH{1'b0}};
      mult_reg       <= {2*DATA_WIDTH{1'b0}};
    end else begin
//      if (valid) begin
        output_south <= input_north;
        output_east  <= input_west;
        
        mult_reg     <= input_north * input_west;
        
        result       <= result + mult_reg;
//      end
    end
  end
    
endmodule