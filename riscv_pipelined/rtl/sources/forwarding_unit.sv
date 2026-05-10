module forwarding_unit #(
parameter ADDR_WIDTH = 5
)(
  // ID/EX source registers
  input  logic [ADDR_WIDTH - 1 : 0] id_ex_rs1,
  input  logic [ADDR_WIDTH - 1 : 0] id_ex_rs2,

  // EX/MEM stage
  input  logic                      ex_mem_valid,
  input  logic                      ex_mem_write_rd,

  input  logic [ADDR_WIDTH - 1 : 0] ex_mem_rd,

  // MEM/WB stage
  input  logic                      mem_wb_valid,
  input  logic                      mem_wb_write_rd,

  input  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd,

  // Forwarding outputs
  // 00 -> ID/EX register value
  // 01 -> EX/MEM forwarding
  // 10 -> MEM/WB forwarding

  output logic [1 : 0]              forward_a,
  output logic [1 : 0]              forward_b
);

  always_comb begin : forwarding_comb

    // Default
    forward_a = 2'b00;
    forward_b = 2'b00;

    // EX hazard (highest priority)
    if (ex_mem_valid && ex_mem_write_rd && (ex_mem_rd != 0)) begin
      if ((id_ex_rs1 != 0) && (ex_mem_rd == id_ex_rs1))
        forward_a = 2'b01;

      if ((id_ex_rs2 != 0) && (ex_mem_rd == id_ex_rs2))
        forward_b = 2'b01;

    end

    // MEM hazard
    if (mem_wb_valid && mem_wb_write_rd && (mem_wb_rd != 0)) begin
      if ((id_ex_rs1 != 0) && (mem_wb_rd == id_ex_rs1) && (forward_a == 2'b00))
        forward_a = 2'b10;

      if ((id_ex_rs2 != 0) && (mem_wb_rd == id_ex_rs2) && (forward_b == 2'b00))
       forward_b = 2'b10;

    end
  end

endmodule