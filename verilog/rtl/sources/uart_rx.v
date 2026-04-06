module uart_rx #(
  parameter CLKS_PER_BIT = 217
) (
  input              i_clock,
  input              rst_n,

  input              i_rx_serial,
	
  output reg         o_rx_dv,
  output reg [7 : 0] o_rx_byte
);

  localparam S_IDLE         = 3'b000;
  localparam S_RX_START_BIT = 3'b001;
  localparam S_RX_DATA_BITS = 3'b010;
  localparam S_RX_STOP_BIT  = 3'b011;
  localparam S_CLEANUP      = 3'b100;

  localparam CLK_CNT_WIDTH  = $clog2(CLKS_PER_BIT);

  reg                         r_rx_data_r   = 1'b1;
  reg                         r_rx_data     = 1'b1;
  reg [CLK_CNT_WIDTH - 1 : 0] r_clock_count = 0;
  reg [2 : 0]                 r_bit_index   = 0;
  reg [7 : 0]                 r_rx_byte     = 0;
  reg [2 : 0]                 r_sm_main     = S_IDLE;

  always @(posedge i_clock) begin
    r_rx_data_r <= i_rx_serial;
    r_rx_data   <= r_rx_data_r;
  end

  always @(posedge i_clock) begin
    if (!rst_n) begin
      o_rx_byte                    <= 8'd0;
      o_rx_dv                      <= 1'b0;
      r_clock_count                <= 0;
      r_bit_index                  <= 0;
      r_rx_byte                    <= 8'd0;
      r_sm_main                    <= S_IDLE;
    end else begin
      case (r_sm_main)
        S_IDLE : begin
          o_rx_dv                  <= 1'b0;
          r_clock_count            <= 0;
          r_bit_index              <= 0;

          if (r_rx_data == 1'b0) begin
            r_sm_main              <= S_RX_START_BIT;
					end 

        end

        S_RX_START_BIT : begin
          if (r_clock_count == (CLKS_PER_BIT - 1) / 2) begin
            if (r_rx_data == 1'b0) begin
              r_clock_count        <= 0;
              r_sm_main            <= S_RX_DATA_BITS;
            end else begin
              r_sm_main            <= S_IDLE;
            end
          end else begin
            r_clock_count          <= r_clock_count + 1'b1;
          end
        end

        S_RX_DATA_BITS : begin
          if (r_clock_count < CLKS_PER_BIT - 1) begin
            r_clock_count          <= r_clock_count + 1'b1;
          end else begin
            r_clock_count          <= 0;
            r_rx_byte[r_bit_index] <= r_rx_data;

            if (r_bit_index < 7) begin
              r_bit_index          <= r_bit_index + 1'b1;
						end else begin
              r_bit_index          <= 0;
              r_sm_main            <= S_RX_STOP_BIT;
            end

          end
        end

        S_RX_STOP_BIT : begin
          if (r_clock_count < CLKS_PER_BIT - 1) begin
            r_clock_count          <= r_clock_count + 1'b1;
          end else begin
            o_rx_byte              <= r_rx_byte;
            o_rx_dv                <= 1'b1;
            r_clock_count          <= 0;
            r_sm_main              <= S_CLEANUP;
          end
        end

        S_CLEANUP : begin
          o_rx_dv                  <= 1'b0;
          r_sm_main                <= S_IDLE;
        end

        default : r_sm_main        <= S_IDLE;
      endcase
    end
  end

endmodule