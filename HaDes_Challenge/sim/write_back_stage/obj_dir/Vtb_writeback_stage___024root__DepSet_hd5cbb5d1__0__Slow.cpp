// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_writeback_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_writeback_stage___024root.h"

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_static(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_final(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_triggers__stl(Vtb_writeback_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__stl(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_stl(Vtb_writeback_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_settle(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtb_writeback_stage___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtb_writeback_stage___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_writeback_stage.sv", 3, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtb_writeback_stage___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__stl(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtb_writeback_stage___024root___act_comb__TOP__0(Vtb_writeback_stage___024root* vlSelf);

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_stl(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtb_writeback_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__act(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge tb_writeback_stage.clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @(negedge tb_writeback_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__nba(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge tb_writeback_stage.clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @(negedge tb_writeback_stage.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_writeback_stage___024root___ctor_var_reset(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->tb_writeback_stage__DOT__clk = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__rst = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__source_data_in = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__rd_data_in = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->tb_writeback_stage__DOT__instruction_in);
    vlSelf->tb_writeback_stage__DOT__program_counter_in = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__next_program_counter_in = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__external_interrupt_in = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__timer_interrupt_in = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__forwarding_out = VL_RAND_RESET_Q(38);
    vlSelf->tb_writeback_stage__DOT__status_forwards_in = VL_RAND_RESET_I(4);
    vlSelf->tb_writeback_stage__DOT__status_backwards_out = VL_RAND_RESET_I(2);
    vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__pass_count = 0;
    vlSelf->tb_writeback_stage__DOT__fail_count = 0;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address = VL_RAND_RESET_I(32);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb = VL_RAND_RESET_I(1);
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 6; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
