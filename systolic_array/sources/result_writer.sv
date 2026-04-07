module result_writer # (
  parameter ARRAY_WIDTH = 8  
)(
  input                                          clk,
  input                                          rst_n,

  input                                          rst_flush,
  input                                          complete_matmul,

  input      [63 : 0]                            results [0 : ARRAY_WIDTH * ARRAY_WIDTH - 1],

  output reg                                     bram_we,
  output reg [10 : 0]                            bram_addr,
  output reg [ARRAY_WIDTH * ARRAY_WIDTH - 1 : 0] bram_din,

  output reg                                     result_done
);

  reg [6 : 0] counter;

  localparam SIZE = ARRAY_WIDTH * ARRAY_WIDTH;

  always @ (posedge clk) begin
    if (!rst_n || rst_flush) begin
      counter         <= 0;
      bram_addr       <= 0;
      bram_we         <= 0;
      result_done     <= 0;
    end else begin

      if (complete_matmul) begin
        if (counter < SIZE) begin
          bram_we     <= 1;
          bram_din    <= results[counter];
          bram_addr   <= counter;
          counter     <= counter + 1;
        end else begin
          bram_we     <= 1;
          bram_din    <= 64'hFFFF_FFFF_FFFF_FFFF;
          bram_addr   <= 0;
          result_done <= 1;
        end
      end else begin
        bram_we       <= 0;
      end
    end
  end

endmodule