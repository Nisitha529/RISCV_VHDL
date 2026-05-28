// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu__Syms.h"
#include "Vtb_mcu_wishbone_interface.h"

void Vtb_mcu_wishbone_interface___ctor_var_reset(Vtb_mcu_wishbone_interface* vlSelf);

Vtb_mcu_wishbone_interface::Vtb_mcu_wishbone_interface(Vtb_mcu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mcu_wishbone_interface___ctor_var_reset(this);
}

void Vtb_mcu_wishbone_interface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mcu_wishbone_interface::~Vtb_mcu_wishbone_interface() {
}
