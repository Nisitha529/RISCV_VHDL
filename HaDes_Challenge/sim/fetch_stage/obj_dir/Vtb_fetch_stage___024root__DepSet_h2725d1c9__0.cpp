// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage___024root.h"

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_initial__TOP(Vtb_fetch_stage___024root* vlSelf);
VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__0(Vtb_fetch_stage___024root* vlSelf);
VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__1(Vtb_fetch_stage___024root* vlSelf);
VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__2(Vtb_fetch_stage___024root* vlSelf);

void Vtb_fetch_stage___024root___eval_initial(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_initial\n"); );
    // Body
    Vtb_fetch_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_fetch_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_fetch_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_fetch_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk 
        = vlSelf->tb_fetch_stage__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__0(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_fetch_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_fetch_stage.sv", 
                                           61);
        vlSelf->tb_fetch_stage__DOT__clk = (1U & (~ (IData)(vlSelf->tb_fetch_stage__DOT__clk)));
    }
}

void Vtb_fetch_stage___024root___act_comb__TOP__0(Vtb_fetch_stage___024root* vlSelf);

void Vtb_fetch_stage___024root___eval_act(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_fetch_stage___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_fetch_stage___024root___nba_sequent__TOP__0(Vtb_fetch_stage___024root* vlSelf);

void Vtb_fetch_stage___024root___eval_nba(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_fetch_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_fetch_stage___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_fetch_stage___024root___eval_triggers__act(Vtb_fetch_stage___024root* vlSelf);
void Vtb_fetch_stage___024root___timing_commit(Vtb_fetch_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__act(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_fetch_stage___024root___timing_resume(Vtb_fetch_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__nba(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fetch_stage___024root___eval(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_fetch_stage___024root___eval_triggers__act(vlSelf);
            Vtb_fetch_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_fetch_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_fetch_stage.sv", 27, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_fetch_stage___024root___timing_resume(vlSelf);
                Vtb_fetch_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_fetch_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_fetch_stage.sv", 27, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_fetch_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_fetch_stage___024root___timing_commit(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h49b00112__0.commit("@(posedge tb_fetch_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h49b000d3__0.commit("@(negedge tb_fetch_stage.clk)");
    }
}

void Vtb_fetch_stage___024root___timing_resume(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h49b00112__0.resume("@(posedge tb_fetch_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h49b000d3__0.resume("@(negedge tb_fetch_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_fetch_stage___024root___eval_debug_assertions(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
