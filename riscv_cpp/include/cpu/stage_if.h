#pragma once
#include <cstdint>
#include "memory/imem.h"
#include "cpu/pipeline.h"

class StageIF {
  public:

    static void run(
      uint32_t&   pc,
      const       IMem& imem,

      // control inputs 
      bool     redirect,
      uint32_t redirect_pc,

      // pipeline output
      IF_ID&   next_if_id
  );
};