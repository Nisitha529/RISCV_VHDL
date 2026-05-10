module stage_mem #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5
)(
  input  logic                      clk,
  input  logic                      rst,
  
  // EX/MEM pipeline inputs
  input  logic [DATA_WIDTH - 1 : 0] ex_mem_alu_result,
  input  logic [DATA_WIDTH - 1 : 0] ex_mem_B,

  input  logic [ADDR_WIDTH - 1 : 0] ex_mem_rd,

  // Control signals
  input  logic                      ex_mem_write_rd,

  input  logic                      ex_mem_write_mem,
  input  logic                      ex_mem_mem_access,
  input  logic [5 : 0]              ex_mem_mem_width,

  input  logic [2 : 0]              ex_mem_rd_data_src,

  input  logic                      ex_mem_valid,

  // Data memory interface
  output logic                      dmem_mem_access,
  output logic                      dmem_write_enable,

  output logic [5 : 0]              dmem_mem_width,

  output logic [DATA_WIDTH - 1 : 0] dmem_addr,
  output logic [DATA_WIDTH - 1 : 0] dmem_write_data,

  input  logic [DATA_WIDTH - 1 : 0] dmem_read_data,

  // MEM/WB pipeline outputs
  output logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result,
  output logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data,

  output logic [ADDR_WIDTH - 1 : 0] mem_wb_rd,

  // Control signals
  output logic                      mem_wb_write_rd,

  output logic [2 : 0]              mem_wb_rd_data_src,

  output logic                      mem_wb_valid
);

  // Data memory control
  assign dmem_mem_access   = ex_mem_mem_access;
  assign dmem_write_enable = ex_mem_write_mem;
  assign dmem_mem_width    = ex_mem_mem_width;
  assign dmem_addr         = ex_mem_alu_result;
  assign dmem_write_data   = ex_mem_B;

  // MEM/WB pipeline generation
  always_ff @(posedge clk) begin : mem_wb_ff
    if (rst) begin
      mem_wb_alu_result    <= '0;
      mem_wb_mem_data      <= '0;
      mem_wb_rd            <= '0;
      mem_wb_write_rd      <= 1'b0;
      mem_wb_rd_data_src   <= '0;
      mem_wb_valid         <= 1'b0;
    end else begin
      // Invalid bubble
      if (!ex_mem_valid) begin
        mem_wb_valid       <= 1'b0;
      end else begin
        // ALU result
        mem_wb_alu_result  <= ex_mem_alu_result;

        // LOAD data
        if (ex_mem_mem_access && !ex_mem_write_mem) begin
          mem_wb_mem_data  <= dmem_read_data;
        end else begin
          mem_wb_mem_data  <= '0;
        end

        // Pipeline propagation
        mem_wb_rd          <= ex_mem_rd;
        mem_wb_write_rd    <= ex_mem_write_rd;
        mem_wb_rd_data_src <= ex_mem_rd_data_src;
        mem_wb_valid       <= 1'b1;

      end
    end
  end

endmodule