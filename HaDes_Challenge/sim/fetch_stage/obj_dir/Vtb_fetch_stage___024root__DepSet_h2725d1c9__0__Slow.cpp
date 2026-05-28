// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage___024root.h"

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_static(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_final(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_triggers__stl(Vtb_fetch_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__stl(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_stl(Vtb_fetch_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_settle(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_fetch_stage___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_fetch_stage___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_fetch_stage.sv", 27, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_fetch_stage___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__stl(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_fetch_stage___024root___act_comb__TOP__0(Vtb_fetch_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_stl(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_fetch_stage___024root___act_comb__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__act(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_fetch_stage.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_fetch_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__nba(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_fetch_stage.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_fetch_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fetch_stage___024root___ctor_var_reset(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_fetch_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_fetch_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_fetch_stage__DOT__instruction_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__program_counter_reg_out = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__status_forwards_out = VL_RAND_RESET_I(4);
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = VL_RAND_RESET_I(2);
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__pass_count = 0;
    vlSelf->tb_fetch_stage__DOT__fail_count = 0;
    vlSelf->tb_fetch_stage__DOT__addr = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state = VL_RAND_RESET_I(1);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pc = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid = VL_RAND_RESET_I(1);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc = VL_RAND_RESET_I(32);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = VL_RAND_RESET_I(4);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response = VL_RAND_RESET_I(1);
    vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
