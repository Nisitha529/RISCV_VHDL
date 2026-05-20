module stage_ex #(
  parameter DATA_WIDTH = 32,
  parameter ADDR_WIDTH = 5
)(
  input  logic                      clk,
  input  logic                      rst,

  // ID/EX pipeline inputs
  input  logic [DATA_WIDTH - 1 : 0] id_ex_pc,

  input  logic [DATA_WIDTH - 1 : 0] id_ex_A,
  input  logic [DATA_WIDTH - 1 : 0] id_ex_B,

  input  logic [DATA_WIDTH - 1 : 0] id_ex_imm,

  input  logic [ADDR_WIDTH - 1 : 0] id_ex_rs1,
  input  logic [ADDR_WIDTH - 1 : 0] id_ex_rs2,
  input  logic [ADDR_WIDTH - 1 : 0] id_ex_rd,

  // Control signals
  input  logic [3 : 0]              id_ex_alu_op,
  input  logic                      id_ex_alu_use_imm,

  input  logic                      id_ex_write_rd,

  input  logic                      id_ex_write_mem,
  input  logic                      id_ex_mem_access,
  input  logic [5 : 0]              id_ex_mem_width,

  input  logic                      id_ex_jump,
  input  logic                      id_ex_is_branch,

  input  logic [2 : 0]              id_ex_rd_data_src,

  input  logic [2 : 0]              id_ex_imm_type,

  input  logic                      id_ex_valid,

  // EX/MEM forwarding inputs
  input  logic                      fwd_ex_mem_valid,
  input  logic                      fwd_ex_mem_write_rd,

  input  logic [ADDR_WIDTH - 1 : 0] fwd_ex_mem_rd,

  input  logic [DATA_WIDTH - 1 : 0] fwd_ex_mem_alu_result,

  // MEM/WB forwarding inputs
  input  logic                      mem_wb_valid,
  input  logic                      mem_wb_write_rd,

  input  logic [ADDR_WIDTH - 1 : 0] mem_wb_rd,

  input  logic [DATA_WIDTH - 1 : 0] mem_wb_alu_result,
  input  logic [DATA_WIDTH - 1 : 0] mem_wb_mem_data,

  input  logic [2 : 0]              mem_wb_rd_data_src,

  // EX/MEM pipeline outputs
  output logic [DATA_WIDTH - 1 : 0] ex_mem_pc,

  output logic [DATA_WIDTH - 1 : 0] ex_mem_alu_result,
  output logic [DATA_WIDTH - 1 : 0] ex_mem_B,

  output logic [ADDR_WIDTH - 1 : 0] ex_mem_rd,

  // Control signals
  output logic [3 : 0]              ex_mem_alu_op,
  output logic                      ex_mem_alu_use_imm,

  output logic                      ex_mem_write_rd,

  output logic                      ex_mem_write_mem,
  output logic                      ex_mem_mem_access,
  output logic [5 : 0]              ex_mem_mem_width,

  output logic                      ex_mem_jump,
  output logic                      ex_mem_is_branch,

  output logic [2 : 0]              ex_mem_rd_data_src,

  output logic [2 : 0]              ex_mem_imm_type,

  // Branch
  output logic                      ex_mem_take_branch,
  output logic [DATA_WIDTH - 1 : 0] ex_mem_branch_target,

  output logic                      ex_mem_valid
);

  // Forwarding wires
  logic [1 : 0]              forward_a;
  logic [1 : 0]              forward_b;

  // ALU operand wires
  logic [DATA_WIDTH - 1 : 0] wb_value;

  logic [DATA_WIDTH - 1 : 0] opA;
  logic [DATA_WIDTH - 1 : 0] regB;

  logic [DATA_WIDTH - 1 : 0] opB;

  // ALU outputs
  logic [DATA_WIDTH - 1 : 0] alu_result;
  logic                      alu_zero;

  // Branch logic
  logic                      take_branch;

  logic [DATA_WIDTH - 1 : 0] branch_target;
  
  logic                      ex_mem_is_load;

  // Forwarding unit
  forwarding_unit forwarding_unit_01 (
    .id_ex_rs1       (id_ex_rs1),
    .id_ex_rs2       (id_ex_rs2),

    .ex_mem_valid    (fwd_ex_mem_valid),
    .ex_mem_write_rd (fwd_ex_mem_write_rd),

    .ex_mem_is_load  (ex_mem_is_load),

    .ex_mem_rd       (fwd_ex_mem_rd),

    .mem_wb_valid    (mem_wb_valid),
    .mem_wb_write_rd (mem_wb_write_rd),

    .mem_wb_rd       (mem_wb_rd),

    .forward_a        (forward_a),
    .forward_b        (forward_b)
  );

  // ALU
  alu alu_01 (
    .op1             (opA),
    .op2             (opB),

    .alu_op          (id_ex_alu_op),

    .result          (alu_result),
    .zero            (alu_zero)
  );

  assign ex_mem_is_load = id_ex_mem_access && !id_ex_write_mem;

  // WB value selection
  always_comb begin

    case (mem_wb_rd_data_src)
      3'd4:
        wb_value = mem_wb_mem_data;

      default:
        wb_value = mem_wb_alu_result;

    endcase

  end

  // Forwarded operand A
  always_comb begin : operandA_comb
    case (forward_a)
      2'b00   : opA = id_ex_A;
      2'b01   : opA = fwd_ex_mem_alu_result;
      2'b10   : opA = wb_value;

      default : opA = id_ex_A;

    endcase
  end

  // Forwarded operand B
  always_comb begin : operandB_comb
    case (forward_b)
      2'b00   : regB = id_ex_B;
      2'b01   : regB = fwd_ex_mem_alu_result;
      2'b10   : regB = wb_value;

      default : regB = id_ex_B;

    endcase
  end

  // Immediate selection
  assign opB = (id_ex_alu_use_imm) ? id_ex_imm : regB;

  // Branch logic
  always_comb begin : branch_comb
    take_branch = 1'b0;

    if (id_ex_is_branch) begin
      case (id_ex_alu_op)
        // BEQ / BNE
        4'd2 : begin
          if (alu_result == 32'd0)
            take_branch = 1'b1;
        
        end

        // BLT
        4'd9 : begin
          if (alu_result == 32'd1)
            take_branch = 1'b1;

        end

        // BLTU
        4'd10 : begin
          if (alu_result == 32'd1)
            take_branch = 1'b1;

        end

        default : begin
          take_branch = 1'b0;

        end

      endcase
    end
  end

  // Branch target
  assign branch_target = id_ex_pc + id_ex_imm;

  // EX/MEM pipeline outputs
  always_ff @(posedge clk) begin : ex_mem_ff
    if (rst) begin
      ex_mem_pc            <= '0;

      ex_mem_alu_result    <= '0;
      ex_mem_B             <= '0;

      ex_mem_rd            <= '0;

      ex_mem_alu_op        <= '0;
      ex_mem_alu_use_imm   <= '0;

      ex_mem_write_rd      <= '0;

      ex_mem_write_mem     <= '0;
      ex_mem_mem_access    <= '0;
      ex_mem_mem_width     <= '0;

      ex_mem_jump          <= '0;
      ex_mem_is_branch     <= '0;

      ex_mem_rd_data_src   <= '0;

      ex_mem_imm_type      <= '0;

      ex_mem_take_branch   <= '0;

      ex_mem_branch_target <= '0;

      ex_mem_valid         <= 1'b0;

    end else begin
      ex_mem_pc            <= id_ex_pc;

      ex_mem_alu_result    <= alu_result;

      ex_mem_B             <= regB;

      ex_mem_rd            <= id_ex_rd;

      ex_mem_alu_op        <= id_ex_alu_op;
      ex_mem_alu_use_imm   <= id_ex_alu_use_imm;

      ex_mem_write_rd      <= id_ex_write_rd;

      ex_mem_write_mem     <= id_ex_write_mem;
      ex_mem_mem_access    <= id_ex_mem_access;
      ex_mem_mem_width     <= id_ex_mem_width;

      ex_mem_jump          <= id_ex_jump;
      ex_mem_is_branch     <= id_ex_is_branch;

      ex_mem_rd_data_src   <= id_ex_rd_data_src;

      ex_mem_imm_type      <= id_ex_imm_type;

      ex_mem_take_branch   <= take_branch;

      ex_mem_branch_target <= branch_target;

      ex_mem_valid         <= id_ex_valid;
    end
  end

endmodule