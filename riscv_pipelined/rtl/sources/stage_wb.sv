module stage_wb #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5
)(
  // MEM/WB pipeline inputs
  input  logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result,
  input  logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data,

  input  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd,

  // Control
  input  logic                      mem_wb_write_rd,
  input  logic [2 : 0]              mem_wb_rd_data_src,

  input  logic                      mem_wb_valid,

  // Register file interface
  output logic                      regfile_write_enable,

  output logic [ADDR_WIDTH - 1 : 0] regfile_rd_addr,
  output logic [DATA_WIDTH - 1 : 0] regfile_rd_data
);

  logic [DATA_WIDTH - 1 : 0] wb_data;

  // Writeback selection
  always_comb begin : wb_select_comb

    case (mem_wb_rd_data_src)

      // ALU result
      3'd0    : wb_data = mem_wb_alu_result;

      // AUIPC
      3'd1    : wb_data = mem_wb_alu_result;

      // JAL / JALR
      3'd2    : wb_data = mem_wb_alu_result;

      // LUI
      3'd3    : wb_data = mem_wb_alu_result;

      // LOAD
      3'd4    : wb_data = mem_wb_mem_data;

      default : wb_data = mem_wb_alu_result;

    endcase
  end

  // Register file outputs

  assign regfile_write_enable = mem_wb_valid && mem_wb_write_rd;

  assign regfile_rd_addr      = mem_wb_rd;

  assign regfile_rd_data      = wb_data;

endmodule