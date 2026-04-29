#pragma once
#include <cstdint>
#include "core/decoder.h"
#include "core/control.h"
#include "core/immediate.h"
#include "core/regfile.h"
#include "cpu/pipeline.h"

class StageID {
  public:
    static void run(uint32_t instr, uint32_t pc, const RegFile& regfile, ID_EX& next_id_ex);
};