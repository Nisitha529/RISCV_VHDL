#include "cpu/stage_ex.h"
#include "cpu/forwarding_unit.h"

void StageEX::run(const ID_EX& id_ex, const EX_MEM& ex_mem, const MEM_WB& mem_wb, EX_MEM& next_ex_mem) {

  if (!id_ex.valid) {
    next_ex_mem.valid = false;
    return;
  }

  // Forwarding logic
  auto fwd = ForwardingUnit::resolve (id_ex, ex_mem, mem_wb);

  uint32_t wb_value = (mem_wb.ctrl.rd_data_src == 4) ? mem_wb.mem_data : mem_wb.alu_result;

  // Select ALU operands
  uint32_t opA  = (fwd.forwardA == 1) ? ex_mem.alu_result : (fwd.forwardA == 2) ? wb_value : id_ex.A;
  uint32_t regB = (fwd.forwardB == 1) ? ex_mem.alu_result : (fwd.forwardB == 2) ? wb_value : id_ex.B;

  uint32_t opB  = id_ex.ctrl.alu_use_imm ? id_ex.imm : regB;
  // uint32_t opA = id_ex.A;
  // uint32_t opB = id_ex.ctrl.alu_use_imm ? id_ex.imm : id_ex.B;

  // Execute ALU
  ALUInput alu_in {
    opA,
    opB,
    
    id_ex.ctrl.alu_op
  };

  auto alu_out        = ALU::execute(alu_in);
  uint32_t alu_result = alu_out.result;

  // Branch evaluation
  bool take_branch = false;

  if (id_ex.ctrl.is_branch) {

    switch (id_ex.ctrl.alu_op) {
      case ALUOp::SUB:  // BEQ / BNE use subtraction
        take_branch = (alu_result == 0);
      break;

      case ALUOp::SLT:  // BLT
        take_branch = (alu_result == 1);
      break;

      case ALUOp::SLTU: // BLTU
        take_branch = (alu_result == 1);
      break;

      default:
        take_branch = false;
    }
  }

  // Branch target
  uint32_t branch_target    = id_ex.pc + id_ex.imm;

  // Filling EX/MEM register
  next_ex_mem.pc            = id_ex.pc;

  next_ex_mem.alu_result    = alu_result;
  next_ex_mem.B             = regB; // id_ex.B;

  next_ex_mem.rd            = id_ex.rd;

  next_ex_mem.ctrl          = id_ex.ctrl;

  next_ex_mem.take_branch   = take_branch;
  next_ex_mem.branch_target = branch_target;

  next_ex_mem.valid         = true;
}