// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage_wishbone_interface.h"

std::string VL_TO_STRING(const Vtb_fetch_stage_wishbone_interface* obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb_fetch_stage_wishbone_interface::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->name() : "null");
}
