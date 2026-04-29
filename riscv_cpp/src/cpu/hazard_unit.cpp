#include "cpu/hazard_unit.h"
#include "core/decoder.h"

HazardSignals HazardUnit::detect(const IF_ID& if_id, const ID_EX& id_ex, const EX_MEM& ex_mem) {

  HazardSignals hazard_signals{};
  
  hazard_signals.stall = false;
  hazard_signals.flush = false;

  if (!if_id.valid || !id_ex.valid)
    return hazard_signals;

  auto decoded = Decoder::decode(if_id.instr);

  uint32_t rs1 = decoded.rs1;
  uint32_t rs2 = decoded.rs2;

  // Load-use hazard
  if (id_ex.ctrl.mem_access && !id_ex.ctrl.write_mem) { // LOAD
    if ((id_ex.rd == rs1) || (id_ex.rd == rs2)) {
      hazard_signals.stall = true;
    }
  }

  // Control hazard (branch / jump)
  if (ex_mem.valid && (ex_mem.take_branch || ex_mem.ctrl.jump)) {
    hazard_signals.flush = true;
  }

  return hazard_signals;
}