// stage_mem.sv
`timescale 1ns/1ps

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

  input  logic                      ex_mem_write_rd,

  input  logic                      ex_mem_write_mem,
  input  logic                      ex_mem_mem_access,
  input  logic [5 : 0]              ex_mem_mem_width,

  input  logic [2 : 0]              ex_mem_rd_data_src,

  input  logic                      ex_mem_valid,

  input  logic                      dmem_mem_ready, 
  output logic                      dmem_mem_valid,

  output logic                      dmem_write_enable,

  output logic [5 : 0]              dmem_mem_width,

  output logic [DATA_WIDTH - 1 : 0] dmem_addr,
  output logic [DATA_WIDTH - 1 : 0] dmem_write_data,

  input  logic [DATA_WIDTH - 1 : 0] dmem_read_data,
  input  logic                      dmem_read_valid,  

  output logic                      stall_mem,

  // MEM/WB pipeline outputs
  output logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result,
  output logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data,

  output logic [ADDR_WIDTH - 1 : 0] mem_wb_rd,

  output logic                      mem_wb_write_rd,

  output logic [2 : 0]              mem_wb_rd_data_src,

  output logic                      mem_wb_valid
);

  // Drive dmem interface only when memory is ready
  assign dmem_write_enable = ex_mem_write_mem;
  assign dmem_mem_width    = ex_mem_mem_width;
  assign dmem_addr         = ex_mem_alu_result;
  assign dmem_write_data   = ex_mem_B;

  assign dmem_mem_valid    = ex_mem_valid && ex_mem_mem_access && dmem_mem_ready;

  // Load data staging
  logic [DATA_WIDTH - 1 : 0] load_data_reg;
  logic                      load_valid_reg;

  // MEM/WB pipeline register with stall logic for memory
  always_ff @(posedge clk) begin
    if (rst) begin
      mem_wb_alu_result    <= '0;
      mem_wb_mem_data      <= '0;
      mem_wb_rd            <= '0;
      mem_wb_write_rd      <= 1'b0;
      mem_wb_rd_data_src   <= '0;
      mem_wb_valid         <= 1'b0;

      load_data_reg        <= '0;
      load_valid_reg       <= 1'b0;

      stall_mem            <= 1'b0;
    end else begin
      // Defaults (will be overridden if needed)
      mem_wb_valid <= 1'b0;
      stall_mem    <= 1'b0;

      if (ex_mem_valid) begin
        // Always propagate ALU result and control info
        mem_wb_alu_result  <= ex_mem_alu_result;
        mem_wb_rd          <= ex_mem_rd;
        mem_wb_write_rd    <= ex_mem_write_rd;
        mem_wb_rd_data_src <= ex_mem_rd_data_src;

        // This instruction needs memory access
        if (ex_mem_mem_access) begin
          if (!dmem_mem_ready) begin
            // Memory not ready (misaligned or out of bounds)
            // Stall the pipeline and do NOT commit anything to MEM/WB.
            stall_mem <= 1'b1;
            // Do not set mem_wb_valid
          end else begin
            // Memory is ready
            if (ex_mem_write_mem) begin
              // Store: no read data, always valid in the same cycle
              mem_wb_valid <= 1'b1;
            end else begin
              // Load: wait for read_valid (one extra cycle)
              if (dmem_read_valid) begin
                // Data available this cycle
                mem_wb_mem_data <= dmem_read_data;
                mem_wb_valid    <= 1'b1;
                load_valid_reg  <= 1'b0;
              end else begin
                // Data not ready yet – stall and remember the load
                load_data_reg    <= dmem_read_data;   // will be valid next cycle
                load_valid_reg   <= 1'b1;
                stall_mem        <= 1'b1;
                // Do not set mem_wb_valid
              end
            end
          end
        end else begin
          // No memory access, hence always valid.
          mem_wb_valid <= 1'b1;
        end
      end else if (load_valid_reg) begin
        // No valid instruction in EX/MEM, but we may have a previously stalled load that now has its data ready.
        // The stalled load's data is now available
        // No stall needed because we are consuming the data.
        mem_wb_mem_data <= load_data_reg;
        mem_wb_valid    <= 1'b1;
        load_valid_reg  <= 1'b0;
      end
    end
  end

endmodule