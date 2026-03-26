`include "memory_defines.vh"

module data_ram (
  input  wire                      clk,
  input  wire [`WORD_SIZE - 1 : 0] addr,

  input  wire                      en,
  input  wire                      we,

  input  wire [1 : 0]              access_width,

  input  wire [`WORD_SIZE - 1 : 0] di,
  output reg  [`WORD_SIZE - 1 : 0] do
);

	reg [`WORD_SIZE - 1 : 0] mem [0 : `DATA_RAM_MEMORY_SIZE_WORDS - 1];
	integer i;

	initial begin
		for (i = 0; i < `DATA_RAM_MEMORY_SIZE_WORDS; i = i + 1) begin
			mem[i] = 32'd0;
		end
	end

	wire [31 : 2] word_idx  = addr[31 : 2];
	wire [1 : 0]  byte_off  = addr[1:0];
	wire          access_ok = en && (word_idx < `DATA_RAM_MEMORY_SIZE_WORDS) && (access_width != `MEM_ACCESS_WIDTH_16 || byte_off[0] == 1'b0) && (access_width != `MEM_ACCESS_WIDTH_32 || byte_off == 2'b00);

	always @(*) begin
		if (access_ok) begin
			case (access_width)
				`MEM_ACCESS_WIDTH_32: do = mem[word_idx];
				`MEM_ACCESS_WIDTH_16: begin
				
					case (byte_off[1])
						1'b0: do = {16'd0, mem[word_idx][15:0]};
						1'b1: do = {16'd0, mem[word_idx][31:16]};
					
						default: do = 32'd0;
					endcase

				end

				default: begin
					case (byte_off[1:0])
						2'b00: do = {24'd0, mem[word_idx][7:0]};
						2'b01: do = {24'd0, mem[word_idx][15:8]};
						2'b10: do = {24'd0, mem[word_idx][23:16]};
						2'b11: do = {24'd0, mem[word_idx][31:24]};
					
						default: do = 32'd0;
					endcase
				end

			endcase
		end else
			do = 32'hFFFFFFFF;
		end

	always @(posedge clk) begin
		if (access_ok && we) begin
			case (access_width)
				`MEM_ACCESS_WIDTH_32: mem[word_idx] <= di;
				`MEM_ACCESS_WIDTH_16: begin
					if (byte_off[1] == 1'b0) begin
						mem[word_idx][15:0] <= di[15:0];
					end else begin
						mem[word_idx][31:16] <= di[15:0];
					end
				end
				
				default: begin
					case (byte_off[1:0])
						2'b00: mem[word_idx][7:0]   <= di[7:0];
						2'b01: mem[word_idx][15:8]  <= di[7:0];
						2'b10: mem[word_idx][23:16] <= di[7:0];
						2'b11: mem[word_idx][31:24] <= di[7:0];
					endcase

				end
			endcase
		end
	end

endmodule