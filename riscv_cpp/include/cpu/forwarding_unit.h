#pragma once
#include "cpu/pipeline.h"

struct ForwardingSignals {
  uint8_t forwardA;        // 0 = ID/EX, 1 = EX/MEM, 2 = MEM/WB
  uint8_t forwardB;
};

class ForwardingUnit {
  public:
    static ForwardingSignals resolve(const ID_EX& id_ex, const EX_MEM& ex_mem, const MEM_WB& mem_wb);
};