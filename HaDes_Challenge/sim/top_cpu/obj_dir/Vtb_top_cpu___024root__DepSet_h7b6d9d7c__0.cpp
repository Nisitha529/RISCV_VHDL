// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu___024root.h"

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_initial__TOP(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__0(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__1(Vtb_top_cpu___024root* vlSelf);
VlCoroutine Vtb_top_cpu___024root___eval_initial__TOP__2(Vtb_top_cpu___024root* vlSelf);

void Vtb_top_cpu___024root___eval_initial(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial\n"); );
    // Body
    Vtb_top_cpu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_top_cpu___024root___eval_initial__TOP__0(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__1(vlSelf);
    Vtb_top_cpu___024root___eval_initial__TOP__2(vlSelf);
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
                                           93);
        vlSelf->tb_top_cpu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_top_cpu__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_top_cpu___024root___act_comb__TOP__0(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken 
        = ((vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                       >> 0xbU) & (IData)(vlSelf->tb_top_cpu__DOT__external_interrupt_in)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken 
        = ((vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mie 
                       >> 7U) & (IData)(vlSelf->tb_top_cpu__DOT__timer_interrupt_in)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__external_interrupt_taken) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause = 0x8000000bU;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__timer_interrupt_taken) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause = 0x80000007U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken = 1U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_taken) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__interrupt_cause;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__pipeline_exception) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_tval;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__exception_cause;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause = 0xbU;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_tval = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_cause = 3U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken = 1U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb 
        = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
    if ((((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_status)) 
          & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken))) 
         & (0x2fU != (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[2U] 
                                << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                          >> 0x1bU)))))) {
        if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__is_csr) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                   >> 0x16U)));
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_read_data;
        } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd_normal) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instruction[1U] 
                                   >> 0x16U)));
            vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__wb_rd_data_comb 
                = vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data;
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__trap_taken) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mtvec;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__csr_mepc;
        vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken = 1U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
            ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_address
            : 0U);
    vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard 
        = ((~ ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                        ? 2U : 0U)) | (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out)))) 
           & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard_raw));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op 
        = ((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state)) 
           & ((2U != ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                               ? 2U : 0U)) ? 2U : 0U)) 
              & ((~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__access_misaligned)) 
                 & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__valid_memory_op))));
    if ((2U == ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                         ? 2U : 0U)) ? 2U : 0U))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_address_out 
            = ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                        ? 2U : 0U)) ? vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out
                : 0U);
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out = 2U;
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_jump_address_out = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out 
            = (((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state)) 
                | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op))
                ? 1U : 0U);
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_status_in 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard)
            ? 1U : (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_status));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb = 0xfU;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb = 0U;
    if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_state))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb 
            = (0xfffffffcU & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_addr);
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_sel;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_is_store;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_store_data;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__launch_memory_op) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_cyc_comb = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_stb_comb = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_adr_comb 
            = (0xfffffffcU & vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_rd_data);
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_sel_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__byte_sel_comb;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_we_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store;
        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__wb_dat_mosi_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__store_data_comb;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = 0U;
    if ((2U == ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__redirect_taken)
                 ? 2U : 0U))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_jump_address_out;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = 2U;
    } else if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_out))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_out;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = 0U;
    } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__memory_backwards_out))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = 1U;
    } else if (vlSelf->tb_top_cpu__DOT__dut__DOT__late_result_use_hazard) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_backwards_in = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in = 0U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in = 0U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb = 0U;
    if ((2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in;
    } else if ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_backwards_in))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb = 1U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_jump_address_in;
    } else if ((((0U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_status)) 
                 & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__branch_or_jump_redirect)) 
                & (~ (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__fetch_misaligned)))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__status_backwards_comb = 2U;
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__jump_address_comb 
            = vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__next_pc_comb;
    }
}

void Vtb_top_cpu___024root___eval_act(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_act\n"); );
    // Body
    if ((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(2U))) {
        Vtb_top_cpu___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void Vtb_top_cpu___024root___nba_sequent__TOP__0(Vtb_top_cpu___024root* vlSelf);

void Vtb_top_cpu___024root___eval_nba(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_top_cpu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_top_cpu___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
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
                    VL_FATAL_MT("tb_top_cpu.sv", 39, "", "Active region did not converge.");
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
                VL_FATAL_MT("tb_top_cpu.sv", 39, "", "NBA region did not converge.");
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
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h569e505b__0.commit("@(posedge tb_top_cpu.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h569e511a__0.commit("@(negedge tb_top_cpu.clk)");
    }
}

void Vtb_top_cpu___024root___timing_resume(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h569e505b__0.resume("@(posedge tb_top_cpu.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h569e511a__0.resume("@(negedge tb_top_cpu.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_top_cpu___024root___eval_debug_assertions(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
