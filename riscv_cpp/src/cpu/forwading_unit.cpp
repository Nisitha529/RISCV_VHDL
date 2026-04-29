#include "cpu/forwarding_unit.h"

ForwardingSignals ForwardingUnit::resolve(const ID_EX& id_ex, const EX_MEM& ex_mem, const MEM_WB& mem_wb) {
 
  ForwardingSignals forwarding_signals{};
  forwarding_signals.forwardA = 0;
  forwarding_signals.forwardB = 0;

  // EX hazard (EX/MEM)
  if (ex_mem.valid && ex_mem.ctrl.write_rd && ex_mem.rd != 0) {
    if (ex_mem.rd == id_ex.rs1)
      forwarding_signals.forwardA = 1;

    if (ex_mem.rd == id_ex.rs2)
      forwarding_signals.forwardB = 1;
  }

  // MEM hazard (MEM/WB)
  if (mem_wb.valid && mem_wb.ctrl.write_rd && mem_wb.rd != 0) {

    if ((mem_wb.rd == id_ex.rs1) && forwarding_signals.forwardA == 0)
      forwarding_signals.forwardA = 2;

    if ((mem_wb.rd == id_ex.rs2) && forwarding_signals.forwardB == 0)
      forwarding_signals.forwardB = 2;
  }

  return forwarding_signals;
}