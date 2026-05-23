// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_instruction_decoder.h for the primary calling header

#include "verilated.h"

#include "Vtb_instruction_decoder__Syms.h"
#include "Vtb_instruction_decoder___024root.h"

void Vtb_instruction_decoder___024root___ctor_var_reset(Vtb_instruction_decoder___024root* vlSelf);

Vtb_instruction_decoder___024root::Vtb_instruction_decoder___024root(Vtb_instruction_decoder__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_instruction_decoder___024root___ctor_var_reset(this);
}

void Vtb_instruction_decoder___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_instruction_decoder___024root::~Vtb_instruction_decoder___024root() {
}
