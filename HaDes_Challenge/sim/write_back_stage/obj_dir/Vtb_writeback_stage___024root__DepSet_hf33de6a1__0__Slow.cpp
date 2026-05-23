// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_writeback_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_writeback_stage__Syms.h"
#include "Vtb_writeback_stage___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__stl(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_triggers__stl(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_writeback_stage___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
