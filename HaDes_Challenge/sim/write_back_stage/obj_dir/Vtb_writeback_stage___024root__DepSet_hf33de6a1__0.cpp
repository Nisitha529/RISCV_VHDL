// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_writeback_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_writeback_stage__Syms.h"
#include "Vtb_writeback_stage___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__act(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_writeback_stage___024root___eval_triggers__act(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->tb_writeback_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(2U) = ((IData)(vlSelf->tb_writeback_stage__DOT__rst) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__rst));
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__clk 
        = vlSelf->tb_writeback_stage__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__rst 
        = vlSelf->tb_writeback_stage__DOT__rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(2U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_writeback_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}
