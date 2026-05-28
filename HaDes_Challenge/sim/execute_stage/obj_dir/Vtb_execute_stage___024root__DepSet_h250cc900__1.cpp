// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_execute_stage__Syms.h"
#include "Vtb_execute_stage___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__2(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ tb_execute_stage__DOT____Vrepeat1;
    tb_execute_stage__DOT____Vrepeat1 = 0;
    // Body
    tb_execute_stage__DOT____Vrepeat1 = 0x1388U;
    while (VL_LTS_III(32, 0U, tb_execute_stage__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_hc23b5e66__0.trigger(
                                                           "@(posedge tb_execute_stage.clk)", 
                                                           "tb_execute_stage.sv", 
                                                           479);
        tb_execute_stage__DOT____Vrepeat1 = (tb_execute_stage__DOT____Vrepeat1 
                                             - (IData)(1U));
    }
    VL_WRITEF("[FAIL] Simulation timeout\n[%0t] %%Error: tb_execute_stage.sv:481: Assertion failed in %Ntb_execute_stage\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_execute_stage.sv", 481, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_stage___024root___dump_triggers__act(Vtb_execute_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_execute_stage___024root___eval_triggers__act(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_execute_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->tb_execute_stage__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__clk));
    vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__clk 
        = vlSelf->tb_execute_stage__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_execute_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}
