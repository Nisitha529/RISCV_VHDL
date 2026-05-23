// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage__Syms.h"
#include "Vtb_fetch_stage_wishbone_interface.h"

void Vtb_fetch_stage_wishbone_interface___ctor_var_reset(Vtb_fetch_stage_wishbone_interface* vlSelf);

Vtb_fetch_stage_wishbone_interface::Vtb_fetch_stage_wishbone_interface(Vtb_fetch_stage__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_fetch_stage_wishbone_interface___ctor_var_reset(this);
}

void Vtb_fetch_stage_wishbone_interface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_fetch_stage_wishbone_interface::~Vtb_fetch_stage_wishbone_interface() {
}
