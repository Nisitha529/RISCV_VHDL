#include "core/control.h"

ControlSignals Control::generate(uint32_t opcode, uint32_t funct3, uint32_t funct7) {

  ControlSignals control_signals{};
  
  // Default values
  control_signals.alu_op      = ALUOp::ADD;
  control_signals.alu_use_imm = false;

  control_signals.write_rd    = true;

  control_signals.write_mem   = false;
  // control_signals.mem_access  = (opcode == 0x03 || opcode == 0x23);

  control_signals.mem_width   = 32;

  if (opcode == 0x03 || opcode == 0x23) { // LOAD or STORE
    switch (funct3) {
      case 0x0: // LB / SB
        control_signals.mem_width = 8;
      break;

      case 0x1: // LH / SH
        control_signals.mem_width = 16;
      break;

      case 0x2: // LW / SW
        control_signals.mem_width = 32;
      break;

      case 0x4: // LBU
        control_signals.mem_width = 8;
      break;

      case 0x5: // LHU
        control_signals.mem_width = 16;
      break;

      default:
        control_signals.mem_width = 32; // safe fallback
      break;
    }
  }

  control_signals.jump        = false;
  control_signals.is_branch   = false;

  control_signals.rd_data_src = 0;
  
  control_signals.imm_type    = ImmType::NONE;

  // Jump
  if (opcode == 0x6F || opcode == 0x67)
    control_signals.jump      = true;

  // Branch flag 
  if (opcode == 0x63)
    control_signals.is_branch = true;

  // ALU OP 
  if (opcode == 0x33 && funct3 == 0x0 && funct7 == 0x20)
    control_signals.alu_op = ALUOp::SUB;

  else if ((opcode == 0x13 && funct3 == 0x2) || (opcode == 0x33 && funct3 == 0x2))
    control_signals.alu_op = ALUOp::SLT;

  else if ((opcode == 0x13 && funct3 == 0x3) || (opcode == 0x33 && funct3 == 0x3))
    control_signals.alu_op = ALUOp::SLTU;

  else if ((opcode == 0x13 && funct3 == 0x7) || (opcode == 0x33 && funct3 == 0x7))
    control_signals.alu_op = ALUOp::AND;

  else if ((opcode == 0x13 && funct3 == 0x6) || (opcode == 0x33 && funct3 == 0x6))
    control_signals.alu_op = ALUOp::OR;

  else if ((opcode == 0x13 && funct3 == 0x4) || (opcode == 0x33 && funct3 == 0x4))
    control_signals.alu_op = ALUOp::XOR;

  else if (opcode == 0x33 && funct3 == 0x1)
    control_signals.alu_op = ALUOp::SLL;

  else if (opcode == 0x33 && funct3 == 0x5)
    control_signals.alu_op = (funct7 == 0x20) ? ALUOp::SRA : ALUOp::SRL;

  // ALU operand select
  control_signals.alu_use_imm = (opcode == 0x13 || opcode == 0x03 || opcode == 0x23 || opcode == 0x67);

  // Register write
  if (opcode == 0x63 || opcode == 0x23) 
	  control_signals.write_rd = false;

  // Memory
  control_signals.write_mem  = (opcode == 0x23);
  control_signals.mem_access = (opcode == 0x03 || opcode == 0x23);

  // Wrtieback source
  if (opcode == 0x17)                        // AUIPC
    control_signals.rd_data_src = 1;

  else if (opcode == 0x6F || opcode == 0x67) // JAL, JALR
    control_signals.rd_data_src = 2;

  else if (opcode == 0x37)                   // LUI
    control_signals.rd_data_src = 3;

  else if (opcode == 0x03)                   // LOAD
    control_signals.rd_data_src = 4;

  // Immediate type
  if (opcode == 0x37 || opcode == 0x17) 
    control_signals.imm_type = ImmType::U;
  else if (opcode == 0x6F) 
    control_signals.imm_type = ImmType::J;
  else if (opcode == 0x63) 
	  control_signals.imm_type = ImmType::B;
  else if (opcode == 0x23) 
    control_signals.imm_type = ImmType::S;
  else if (opcode == 0x13 || opcode == 0x03 || opcode == 0x67)
    control_signals.imm_type = ImmType::I;

  return control_signals;
}