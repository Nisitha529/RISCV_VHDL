`include "memory_defines.vh"

module data_rom (
  input  wire [`WORD_SIZE - 1 : 0] addr,
  input  wire                      en,
  input  wire [1 : 0]              access_width,

  output reg  [`WORD_SIZE - 1 : 0] dout
);

reg [`WORD_SIZE - 1 : 0] mem [0 : `DATA_ROM_MEMORY_SIZE_WORDS - 1];
integer i;

initial begin
  for (i = 0; i < `DATA_ROM_MEMORY_SIZE_WORDS; i = i + 1) begin
    mem[i] = 32'd0;   
	end
end

wire [31 : 2] word_idx  = addr[31 : 2];
wire [1 : 0]  byte_off  = addr[1 : 0];

wire          access_ok = en && (word_idx < `DATA_ROM_MEMORY_SIZE_WORDS) && (access_width != `MEM_ACCESS_WIDTH_16 || byte_off[0] == 1'b0) && (access_width != `MEM_ACCESS_WIDTH_32 || byte_off == 2'b00);

always @(*) begin
  if (access_ok) begin
    case (access_width)
      `MEM_ACCESS_WIDTH_32: dout = mem[word_idx];
      `MEM_ACCESS_WIDTH_16: begin

        case (byte_off[1])
          1'b0: dout = {16'd0, mem[word_idx][15:0]};
          1'b1: dout = {16'd0, mem[word_idx][31:16]};

          default: dout = 32'd0;
        endcase
      end
    
		  default: begin
        case (byte_off[1:0])
          2'b00: dout   = {24'd0, mem[word_idx][7:0]};
          2'b01: dout   = {24'd0, mem[word_idx][15:8]};
          2'b10: dout   = {24'd0, mem[word_idx][23:16]};
          2'b11: dout   = {24'd0, mem[word_idx][31:24]};
        
				  default: dout = 32'd0;
        endcase
      end

    endcase
  end else
    dout = 32'hFFFFFFFF;
  end

endmodule