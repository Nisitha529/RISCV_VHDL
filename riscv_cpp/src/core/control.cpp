#include "core/control.h"

ControlSignals Control::generate(uint32_t opcode, uint32_t funct3, uint32_t funct7, uint32_t alu_result) {

  ControlSignals c{};
  
  // Default values
  c.alu_op      = ALUOp::ADD;
  c.alu_use_imm = false;
  c.write_rd    = true;
  c.write_mem   = false;
  c.mem_access  = false;
  c.jump        = false;
  c.take_branch = false;
  c.rd_data_src = 0;
  c.mem_width   = 8;
  c.imm_type    = ImmType::NONE;

  // Jump
  if (opcode == 0x6F || opcode == 0x67)
    c.jump = true;

  // ALU OP (matches your Verilog)
  if (opcode == 0x33 && funct3 == 0x0 && funct7 == 0x20)
    c.alu_op = ALUOp::SUB;

  else if ((opcode == 0x13 && funct3 == 0x2) || (opcode == 0x33 && funct3 == 0x2))
    c.alu_op = ALUOp::SLT;

  else if ((opcode == 0x13 && funct3 == 0x3) || (opcode == 0x33 && funct3 == 0x3))
    c.alu_op = ALUOp::SLTU;

  else if ((opcode == 0x13 && funct3 == 0x7) || (opcode == 0x33 && funct3 == 0x7))
    c.alu_op = ALUOp::AND;

  else if ((opcode == 0x13 && funct3 == 0x6) || (opcode == 0x33 && funct3 == 0x6))
    c.alu_op = ALUOp::OR;

  else if ((opcode == 0x13 && funct3 == 0x4) || (opcode == 0x33 && funct3 == 0x4))
    c.alu_op = ALUOp::XOR;

  else if (opcode == 0x33 && funct3 == 0x1)
    c.alu_op = ALUOp::SLL;

  else if (opcode == 0x33 && funct3 == 0x5)
    c.alu_op = (funct7 == 0x20) ? ALUOp::SRA : ALUOp::SRL;

  // ALU operand select
  c.alu_use_imm = (opcode == 0x13 || opcode == 0x03 || opcode == 0x23 || opcode == 0x67);

  // Register write
  if (opcode == 0x63 || opcode == 0x23) 
	  c.write_rd = false;

  // Memory
  c.write_mem = (opcode == 0x23);
  c.mem_access = (opcode == 0x03 || opcode == 0x23);

  // Branch decision
  if (opcode == 0x63) {
    if (funct3 == 0x0) c.take_branch = (alu_result == 0); // BEQ
    if (funct3 == 0x1) c.take_branch = (alu_result != 0); // BNE
    if (funct3 == 0x4) c.take_branch = (alu_result == 1); // BLT
  }

  // Immediate type
  if (opcode == 0x37 || opcode == 0x17) 
    c.imm_type = ImmType::U;
  else if (opcode == 0x6F) 
    c.imm_type = ImmType::J;
  else if (opcode == 0x63) 
	  c.imm_type = ImmType::B;
  else if (opcode == 0x23) 
    c.imm_type = ImmType::S;
  else if (opcode == 0x13 || opcode == 0x03 || opcode == 0x67)
    c.imm_type = ImmType::I;

  return c;
}