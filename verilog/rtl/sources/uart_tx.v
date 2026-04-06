module uart_tx # (
  parameter CLKS_PER_BIT = 217 // 25 MHz clock example
)(
  input              i_clock,
  input              rst_n,

  input              i_tx_dv,
  input      [7 : 0] i_tx_byte,

  output             o_tx_active,
  output reg         o_tx_serial,
  output             o_tx_done
);

  localparam S_IDLE         = 3'b000;
  localparam S_TX_START_BIT = 3'b001;
  localparam S_TX_DATA_BITS = 3'b010;
  localparam S_TX_STOP_BIT  = 3'b011;
  localparam S_CLEANUP      = 3'b100;

  // registers
  reg [2 : 0]                         r_sm_main     = S_IDLE;
  reg [$clog2 (CLKS_PER_BIT) - 1 : 0] r_clock_count = 0;
  reg [2 : 0]                         r_bit_index   = 0;
  reg [7 : 0]                         r_tx_data     = 0;
  reg                                 r_tx_done     = 0;
  reg                                 r_tx_active   = 0;

  always @(posedge i_clock) begin
	  if (!rst_n) begin
		  o_tx_serial           <= 1'b1;
		  r_tx_done             <= 1'b0;
      r_clock_count         <= 0;
		  r_bit_index           <= 0;
		  r_sm_main             <= S_IDLE;

		  r_tx_data             <= 8'd0;
		  r_tx_active           <= 1'b0;
	  end else begin
		  case (r_sm_main) 
        S_IDLE : begin
				  o_tx_serial       <= 1'b1;
				  r_tx_done         <= 1'b0;

				  r_clock_count     <= 0;
				  r_bit_index       <= 0;

				  if (i_tx_dv) begin
					  r_tx_active     <= 1'b1;
					  r_tx_data       <= i_tx_byte;
					  r_sm_main       <= S_TX_START_BIT;
				  end

			  end

        S_TX_START_BIT : begin
					o_tx_serial       <= 1'b0;

					if (r_clock_count < CLKS_PER_BIT - 1) begin
						r_clock_count   <= r_clock_count + 1;
					end else begin
						r_clock_count   <= 0;
						r_sm_main       <= S_TX_DATA_BITS;
					end
					
				end

				S_TX_DATA_BITS : begin
					o_tx_serial       <= r_tx_data [r_bit_index];

					if (r_clock_count < CLKS_PER_BIT - 1) begin
						r_clock_count   <= r_clock_count + 1;
					end else begin
						r_clock_count   <= 0;

						if (r_bit_index < 7) begin
							r_bit_index   <= r_bit_index + 1;
						end else begin
							r_bit_index   <= 0;
							r_sm_main     <= S_TX_STOP_BIT;
						end
					end
				end

				S_TX_STOP_BIT : begin
					o_tx_serial       <= 1'b1;

					if (r_clock_count < CLKS_PER_BIT - 1) begin
						r_clock_count   <= r_clock_count + 1;
					end else begin
						r_clock_count   <= 0;
						r_tx_done       <= 1'b1;
						r_tx_active     <= 1'b0;
						r_sm_main       <= S_CLEANUP;
					end
				end

				S_CLEANUP : begin
					r_tx_done         <= 1'b1;
					r_sm_main         <= S_IDLE;
				end

				default : r_sm_main <= S_IDLE;

		  endcase
		
	  end
  end

	assign o_tx_active = r_tx_active;
	assign o_tx_done   = r_tx_done;

endmodule