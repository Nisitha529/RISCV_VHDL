module forwarding_unit #(
  parameter ADDR_WIDTH = 5
)(

  // ----------------------------------------
  // ID/EX source registers
  // ----------------------------------------

  input  logic [ADDR_WIDTH-1:0] id_ex_rs1,
  input  logic [ADDR_WIDTH-1:0] id_ex_rs2,

  // ----------------------------------------
  // EX/MEM stage
  // ----------------------------------------

  input  logic                  ex_mem_valid,
  input  logic                  ex_mem_write_rd,

  // NEW:
  // prevents forwarding from LOAD in EX stage
  input  logic                  ex_mem_is_load,

  input  logic [ADDR_WIDTH-1:0] ex_mem_rd,

  // ----------------------------------------
  // MEM/WB stage
  // ----------------------------------------

  input  logic                  mem_wb_valid,
  input  logic                  mem_wb_write_rd,

  input  logic [ADDR_WIDTH-1:0] mem_wb_rd,

  // ----------------------------------------
  // Forwarding outputs
  // ----------------------------------------

  output logic [1:0]            forward_a,
  output logic [1:0]            forward_b
);

  // ----------------------------------------
  // Forwarding encoding
  // ----------------------------------------

  localparam FWD_NONE = 2'b00;
  localparam FWD_EX   = 2'b01;
  localparam FWD_MEM  = 2'b10;

  // ----------------------------------------
  // Match signals
  // ----------------------------------------

  logic ex_rs1_match;
  logic ex_rs2_match;

  logic mem_rs1_match;
  logic mem_rs2_match;

  // ----------------------------------------
  // EX stage matches
  // ----------------------------------------

  assign ex_rs1_match =
    ex_mem_valid             &&
    ex_mem_write_rd          &&
    !ex_mem_is_load          &&   // IMPORTANT FIX
    (ex_mem_rd != 0)         &&
    (id_ex_rs1 != 0)         &&
    (ex_mem_rd == id_ex_rs1);

  assign ex_rs2_match =
    ex_mem_valid             &&
    ex_mem_write_rd          &&
    !ex_mem_is_load          &&
    (ex_mem_rd != 0)         &&
    (id_ex_rs2 != 0)         &&
    (ex_mem_rd == id_ex_rs2);

  // ----------------------------------------
  // MEM stage matches
  // ----------------------------------------

  assign mem_rs1_match =
    mem_wb_valid             &&
    mem_wb_write_rd          &&
    (mem_wb_rd != 0)         &&
    (id_ex_rs1 != 0)         &&
    (mem_wb_rd == id_ex_rs1);

  assign mem_rs2_match =
    mem_wb_valid             &&
    mem_wb_write_rd          &&
    (mem_wb_rd != 0)         &&
    (id_ex_rs2 != 0)         &&
    (mem_wb_rd == id_ex_rs2);

  // ----------------------------------------
  // Forwarding select
  // ----------------------------------------

  always_comb begin

    forward_a = FWD_NONE;
    forward_b = FWD_NONE;

    // EX has priority
    if (ex_rs1_match)
      forward_a = FWD_EX;
    else if (mem_rs1_match)
      forward_a = FWD_MEM;

    if (ex_rs2_match)
      forward_b = FWD_EX;
    else if (mem_rs2_match)
      forward_b = FWD_MEM;

  end

endmodule