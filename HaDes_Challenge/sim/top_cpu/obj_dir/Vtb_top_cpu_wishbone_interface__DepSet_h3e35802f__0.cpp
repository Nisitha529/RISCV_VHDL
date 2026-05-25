// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu_wishbone_interface.h"

std::string VL_TO_STRING(const Vtb_top_cpu_wishbone_interface* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_top_cpu_wishbone_interface::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
