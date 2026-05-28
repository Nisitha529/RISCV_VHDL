// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu__Syms.h"
#include "Vtb_mcu___024root.h"

// Parameter definitions for Vtb_mcu___024root
constexpr VlUnpacked<SData/*11:0*/, 16> Vtb_mcu___024root::tb_mcu__DOT__dut__DOT__wb_vga__DOT__PALETTE;


void Vtb_mcu___024root___ctor_var_reset(Vtb_mcu___024root* vlSelf);

Vtb_mcu___024root::Vtb_mcu___024root(Vtb_mcu__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_mcu___024root___ctor_var_reset(this);
}

void Vtb_mcu___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_mcu___024root::~Vtb_mcu___024root() {
}
