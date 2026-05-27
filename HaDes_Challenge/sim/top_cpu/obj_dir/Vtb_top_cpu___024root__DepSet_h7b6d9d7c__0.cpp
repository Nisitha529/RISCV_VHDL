// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu___024root.h"

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_initial__TOP(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__0(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__1(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__2(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__3(Vtb_top_cpu___024root* vlSelf);

void Vtb_top_cpu___024root___eval_initial(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_top_cpu___024root___eval_initial__TOP(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__0(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__1(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__2(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__3(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_top_cpu__DOT__clk 
        = vlSelf->tb_top_cpu__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__0(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_top_cpu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_top_cpu.sv", 
                                           10);
        vlSelf->tb_top_cpu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_top_cpu__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__1(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_top_cpu__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       15);
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       15);
    co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                       "@(posedge tb_top_cpu.clk)", 
                                                       "tb_top_cpu.sv", 
                                                       15);
    vlSelf->tb_top_cpu__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__2(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ tb_top_cpu__DOT____Vrepeat1;
    tb_top_cpu__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__0__reg_num;
    __Vtask_tb_top_cpu__DOT__check_register__0__reg_num = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__0__expected;
    __Vtask_tb_top_cpu__DOT__check_register__0__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__0__actual;
    __Vtask_tb_top_cpu__DOT__check_register__0__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__1__reg_num;
    __Vtask_tb_top_cpu__DOT__check_register__1__reg_num = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__1__expected;
    __Vtask_tb_top_cpu__DOT__check_register__1__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__1__actual;
    __Vtask_tb_top_cpu__DOT__check_register__1__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__2__reg_num;
    __Vtask_tb_top_cpu__DOT__check_register__2__reg_num = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__2__expected;
    __Vtask_tb_top_cpu__DOT__check_register__2__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__2__actual;
    __Vtask_tb_top_cpu__DOT__check_register__2__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__3__reg_num;
    __Vtask_tb_top_cpu__DOT__check_register__3__reg_num = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__3__expected;
    __Vtask_tb_top_cpu__DOT__check_register__3__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_register__3__actual;
    __Vtask_tb_top_cpu__DOT__check_register__3__actual = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_memory__4__addr;
    __Vtask_tb_top_cpu__DOT__check_memory__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_memory__4__expected;
    __Vtask_tb_top_cpu__DOT__check_memory__4__expected = 0;
    IData/*31:0*/ __Vtask_tb_top_cpu__DOT__check_memory__4__actual;
    __Vtask_tb_top_cpu__DOT__check_memory__4__actual = 0;
    // Body
    tb_top_cpu__DOT____Vrepeat1 = 0x78U;
    while (VL_LTS_III(32, 0U, tb_top_cpu__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                           "@(posedge tb_top_cpu.clk)", 
                                                           "tb_top_cpu.sv", 
                                                           142);
        tb_top_cpu__DOT____Vrepeat1 = (tb_top_cpu__DOT____Vrepeat1 
                                       - (IData)(1U));
    }
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_top_cpu.sv", 
                                       143);
    VL_WRITEF("\nTest results:\n");
    __Vtask_tb_top_cpu__DOT__check_register__0__expected = 0xaU;
    __Vtask_tb_top_cpu__DOT__check_register__0__reg_num = 1U;
    __Vtask_tb_top_cpu__DOT__check_register__0__actual 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
        [(0x1fU & __Vtask_tb_top_cpu__DOT__check_register__0__reg_num)];
    if (VL_UNLIKELY((__Vtask_tb_top_cpu__DOT__check_register__0__actual 
                     != __Vtask_tb_top_cpu__DOT__check_register__0__expected))) {
        VL_WRITEF("[FAIL] x%0d = %0# / 0x%08x (expected %0# / 0x%08x)\n",
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__expected,
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__expected);
        VL_FINISH_MT("tb_top_cpu.sv", 119, "");
    } else {
        VL_WRITEF("[PASS] x%0d = %0#\n",32,__Vtask_tb_top_cpu__DOT__check_register__0__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__0__actual);
    }
    __Vtask_tb_top_cpu__DOT__check_register__1__expected = 0x14U;
    __Vtask_tb_top_cpu__DOT__check_register__1__reg_num = 2U;
    __Vtask_tb_top_cpu__DOT__check_register__1__actual 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
        [(0x1fU & __Vtask_tb_top_cpu__DOT__check_register__1__reg_num)];
    if (VL_UNLIKELY((__Vtask_tb_top_cpu__DOT__check_register__1__actual 
                     != __Vtask_tb_top_cpu__DOT__check_register__1__expected))) {
        VL_WRITEF("[FAIL] x%0d = %0# / 0x%08x (expected %0# / 0x%08x)\n",
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__expected,
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__expected);
        VL_FINISH_MT("tb_top_cpu.sv", 119, "");
    } else {
        VL_WRITEF("[PASS] x%0d = %0#\n",32,__Vtask_tb_top_cpu__DOT__check_register__1__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__1__actual);
    }
    __Vtask_tb_top_cpu__DOT__check_register__2__expected = 0x1eU;
    __Vtask_tb_top_cpu__DOT__check_register__2__reg_num = 3U;
    __Vtask_tb_top_cpu__DOT__check_register__2__actual 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
        [(0x1fU & __Vtask_tb_top_cpu__DOT__check_register__2__reg_num)];
    if (VL_UNLIKELY((__Vtask_tb_top_cpu__DOT__check_register__2__actual 
                     != __Vtask_tb_top_cpu__DOT__check_register__2__expected))) {
        VL_WRITEF("[FAIL] x%0d = %0# / 0x%08x (expected %0# / 0x%08x)\n",
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__expected,
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__expected);
        VL_FINISH_MT("tb_top_cpu.sv", 119, "");
    } else {
        VL_WRITEF("[PASS] x%0d = %0#\n",32,__Vtask_tb_top_cpu__DOT__check_register__2__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__2__actual);
    }
    __Vtask_tb_top_cpu__DOT__check_register__3__expected = 0x1eU;
    __Vtask_tb_top_cpu__DOT__check_register__3__reg_num = 4U;
    __Vtask_tb_top_cpu__DOT__check_register__3__actual 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
        [(0x1fU & __Vtask_tb_top_cpu__DOT__check_register__3__reg_num)];
    if (VL_UNLIKELY((__Vtask_tb_top_cpu__DOT__check_register__3__actual 
                     != __Vtask_tb_top_cpu__DOT__check_register__3__expected))) {
        VL_WRITEF("[FAIL] x%0d = %0# / 0x%08x (expected %0# / 0x%08x)\n",
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__expected,
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__expected);
        VL_FINISH_MT("tb_top_cpu.sv", 119, "");
    } else {
        VL_WRITEF("[PASS] x%0d = %0#\n",32,__Vtask_tb_top_cpu__DOT__check_register__3__reg_num,
                  32,__Vtask_tb_top_cpu__DOT__check_register__3__actual);
    }
    __Vtask_tb_top_cpu__DOT__check_memory__4__expected = 0x1eU;
    __Vtask_tb_top_cpu__DOT__check_memory__4__addr = 0x800U;
    __Vtask_tb_top_cpu__DOT__check_memory__4__actual 
        = vlSelf->tb_top_cpu__DOT__dmem[(0x3ffU & (__Vtask_tb_top_cpu__DOT__check_memory__4__addr 
                                                   >> 2U))];
    if (VL_UNLIKELY((__Vtask_tb_top_cpu__DOT__check_memory__4__actual 
                     != __Vtask_tb_top_cpu__DOT__check_memory__4__expected))) {
        VL_WRITEF("[FAIL] Memory[%x] = %x (expected %x)\n",
                  32,__Vtask_tb_top_cpu__DOT__check_memory__4__addr,
                  32,__Vtask_tb_top_cpu__DOT__check_memory__4__actual,
                  32,__Vtask_tb_top_cpu__DOT__check_memory__4__expected);
        VL_FINISH_MT("tb_top_cpu.sv", 134, "");
    } else {
        VL_WRITEF("[PASS] Memory[%x] = %x\n",32,__Vtask_tb_top_cpu__DOT__check_memory__4__addr,
                  32,__Vtask_tb_top_cpu__DOT__check_memory__4__actual);
    }
    VL_WRITEF("\n=====================================\nALL TESTS PASSED\n=====================================\n\n");
    VL_FINISH_MT("tb_top_cpu.sv", 155, "");
}

VL_INLINE_OPT VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__3(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP__3\n"); );
    // Init
    IData/*31:0*/ tb_top_cpu__DOT____Vrepeat2;
    tb_top_cpu__DOT____Vrepeat2 = 0;
    // Body
    tb_top_cpu__DOT____Vrepeat2 = 0x2710U;
    while (VL_LTS_III(32, 0U, tb_top_cpu__DOT____Vrepeat2)) {
        co_await vlSelf->__VtrigSched_h569e505b__0.trigger(
                                                           "@(posedge tb_top_cpu.clk)", 
                                                           "tb_top_cpu.sv", 
                                                           159);
        tb_top_cpu__DOT____Vrepeat2 = (tb_top_cpu__DOT____Vrepeat2 
                                       - (IData)(1U));
    }
    VL_WRITEF("\n[FAIL] Simulation timeout\n\n");
    VL_FINISH_MT("tb_top_cpu.sv", 161, "");
}

void Vtb_top_cpu___024root___eval_act(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_act\n"); );
}

void Vtb_top_cpu___024root___nba_sequent__TOP__0(Vtb_top_cpu___024root* vlSelf);
void Vtb_top_cpu___024root___nba_sequent__TOP__1(Vtb_top_cpu___024root* vlSelf);
void Vtb_top_cpu___024root___nba_comb__TOP__0(Vtb_top_cpu___024root* vlSelf);

void Vtb_top_cpu___024root___eval_nba(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_top_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_top_cpu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtb_top_cpu___024root___nba_comb__TOP__0(vlSelf);
    }
}

void Vtb_top_cpu___024root___eval_triggers__act(Vtb_top_cpu___024root* vlSelf);
void Vtb_top_cpu___024root___timing_commit(Vtb_top_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__act(Vtb_top_cpu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_top_cpu___024root___timing_resume(Vtb_top_cpu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__nba(Vtb_top_cpu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_top_cpu___024root___eval(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval\n"); );
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
            Vtb_top_cpu___024root___eval_triggers__act(vlSelf);
            Vtb_top_cpu___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_top_cpu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_top_cpu.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_top_cpu___024root___timing_resume(vlSelf);
                Vtb_top_cpu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_top_cpu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_top_cpu.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_top_cpu___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_top_cpu___024root___timing_commit(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_h569e505b__0.commit("@(posedge tb_top_cpu.clk)");
    }
}

void Vtb_top_cpu___024root___timing_resume(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_h569e505b__0.resume("@(posedge tb_top_cpu.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_top_cpu___024root___eval_debug_assertions(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
