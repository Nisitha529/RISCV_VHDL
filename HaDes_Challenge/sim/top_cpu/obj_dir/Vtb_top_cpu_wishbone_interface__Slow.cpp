// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu__Syms.h"
#include "Vtb_top_cpu_wishbone_interface.h"

void Vtb_top_cpu_wishbone_interface___ctor_var_reset(Vtb_top_cpu_wishbone_interface* vlSelf);

Vtb_top_cpu_wishbone_interface::Vtb_top_cpu_wishbone_interface(Vtb_top_cpu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_top_cpu_wishbone_interface___ctor_var_reset(this);
}

void Vtb_top_cpu_wishbone_interface::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_top_cpu_wishbone_interface::~Vtb_top_cpu_wishbone_interface() {
}
