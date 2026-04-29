#pragma once
#include "cpu/pipeline.h"

struct HazardSignals {
  bool stall;
  bool flush;
};

class HazardUnit {
  public:
    static HazardSignals detect(const IF_ID& if_id, const ID_EX& id_ex, const EX_MEM& ex_mem);
};