module uart_tx # (
  parameter CLKS_PER_BIT = 217; // 25 MHz clock example
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

	

endmodule