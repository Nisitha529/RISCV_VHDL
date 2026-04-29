#include "cpu/stage_wb.h"

void StageWB::run(const MEM_WB& mem_wb, RegFile& regfile) {

  if (!mem_wb.valid)
    return;

  // Select writeback data
  uint32_t wb_data = 0;

  switch (mem_wb.ctrl.rd_data_src) {
    case 0: // ALU result
      wb_data = mem_wb.alu_result;
      break;

    case 1: // PC + imm (AUIPC)
      wb_data = mem_wb.alu_result;  
      break;

    case 2: // PC + 4 (JAL / JALR)
      wb_data = mem_wb.alu_result;  
      break;

    case 3: // LUI (imm)
      wb_data = mem_wb.alu_result;
      break;

    case 4: // LOAD
      wb_data = mem_wb.mem_data;
    break;

    default:
      wb_data = mem_wb.alu_result;
    break;
  } 

  // Write to register file
  if (mem_wb.ctrl.write_rd) {
    regfile.write(mem_wb.rd, wb_data, true);
  }
}