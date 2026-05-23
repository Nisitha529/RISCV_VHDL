// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decode_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_decode_stage__Syms.h"
#include "Vtb_decode_stage___024root.h"

void Vtb_decode_stage___024root___ctor_var_reset(Vtb_decode_stage___024root* vlSelf);

Vtb_decode_stage___024root::Vtb_decode_stage___024root(Vtb_decode_stage__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_decode_stage___024root___ctor_var_reset(this);
}

void Vtb_decode_stage___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_decode_stage___024root::~Vtb_decode_stage___024root() {
}
