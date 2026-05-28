// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_writeback_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_writeback_stage___024root.h"

VL_ATTR_COLD void Vtb_writeback_stage___024root___eval_initial__TOP(Vtb_writeback_stage___024root* vlSelf);
VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__0(Vtb_writeback_stage___024root* vlSelf);
VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__1(Vtb_writeback_stage___024root* vlSelf);
VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__2(Vtb_writeback_stage___024root* vlSelf);

void Vtb_writeback_stage___024root___eval_initial(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial\n"); );
    // Body
    Vtb_writeback_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_writeback_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_writeback_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_writeback_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__clk 
        = vlSelf->tb_writeback_stage__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_writeback_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_writeback_stage.sv", 
                                           75);
        vlSelf->tb_writeback_stage__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->tb_writeback_stage__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_writeback_stage___024root___act_comb__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0 = 0;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0 = 0;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0 = 0;
    // Body
    if ((8U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
        if ((4U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 7U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                = vlSelf->tb_writeback_stage__DOT__rd_data_in;
        }
        vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception 
            = (1U & (IData)((0U == (7U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)))));
    } else {
        if ((4U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause 
                    = ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))
                        ? 6U : 5U);
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__rd_data_in;
            } else if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 4U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__rd_data_in;
            } else {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 2U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 1U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__program_counter_in;
            } else {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__next_program_counter_in;
            }
        } else {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        }
        vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception 
            = (1U & (IData)((0U != (6U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)))));
    }
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal 
        = (1U & ((1U & vlSelf->tb_writeback_stage__DOT__instruction_in[2U])
                  ? (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                             & ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))))
                  : ((vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                      : ((0x40000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                          ? ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                              : (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
        = ((0x300U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
            ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus
            : ((0x304U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie
                : ((0x305U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec
                    : ((0x341U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                        ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc
                        : ((0x342U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                            ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause
                            : ((0x343U == (0xfffU & 
                                           vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                                ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval
                                : ((0x344U == (0xfffU 
                                               & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip
                                    : 0U)))))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr 
        = (IData)((((0x40000000U == (0xc0000000U & 
                                     vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                    & vlSelf->tb_writeback_stage__DOT__instruction_in[2U]) 
                   & ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                       ? (IData)((0x18000000U != (0x18000000U 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                       : (IData)((0U != (0x18000000U 
                                         & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))));
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x27U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x28U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken 
        = ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                       >> 0xbU) & (IData)(vlSelf->tb_writeback_stage__DOT__external_interrupt_in)));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken 
        = ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                       >> 7U) & (IData)(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in)));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data 
        = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data;
    if (((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
         & (IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr))) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable 
            = (IData)((((0x40000000U == (0xc0000000U 
                                         & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                        & vlSelf->tb_writeback_stage__DOT__instruction_in[2U]) 
                       & ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                           ? ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                               ? ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)) & 
                                  (0U != vlSelf->tb_writeback_stage__DOT__source_data_in))
                               : ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)) | 
                                  (0U != vlSelf->tb_writeback_stage__DOT__source_data_in)))
                           : ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                               ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                   ? (0U != vlSelf->tb_writeback_stage__DOT__source_data_in)
                                   : (0U != vlSelf->tb_writeback_stage__DOT__source_data_in))
                               : (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                  >> 0x1bU)))));
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data 
            = ((1U & vlSelf->tb_writeback_stage__DOT__instruction_in[2U])
                ? ((vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                    >> 0x1fU) ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data
                    : ((0x40000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                        ? ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                            ? ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data
                                    : (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       & (~ vlSelf->tb_writeback_stage__DOT__source_data_in)))
                                : ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       | vlSelf->tb_writeback_stage__DOT__source_data_in)
                                    : vlSelf->tb_writeback_stage__DOT__source_data_in))
                            : ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       & (~ vlSelf->tb_writeback_stage__DOT__source_data_in))
                                    : (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       | vlSelf->tb_writeback_stage__DOT__source_data_in))
                                : ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? vlSelf->tb_writeback_stage__DOT__source_data_in
                                    : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data)))
                        : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data))
                : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data);
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0x8000000bU;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 1U;
    } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0x80000007U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 1U;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 0xbU;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 3U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 1U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 1U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
        = vlSelf->tb_writeback_stage__DOT__rd_data_in;
    if ((((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
          & (~ (IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken))) 
         & (0x2fU != (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))))) {
        if (vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                   >> 0x16U)));
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
                = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data;
        } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                   >> 0x16U)));
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
                = vlSelf->tb_writeback_stage__DOT__rd_data_in;
        }
    }
}

void Vtb_writeback_stage___024root___eval_act(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_writeback_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_writeback_stage___024root___nba_sequent__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    IData/*31:0*/ __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus;
    __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus = 0;
    // Body
    __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
        = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus;
    if (vlSelf->tb_writeback_stage__DOT__rst) {
        __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus = 0U;
        vlSelf->tb_writeback_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out = 0U;
        vlSelf->tb_writeback_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie = 0U;
    } else {
        if (vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken) {
            __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                = ((0xffffff7fU & __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus) 
                   | (0x80U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                               << 4U)));
            __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                = (0xfffffff7U & __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus);
            vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval 
                = vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause 
                = vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc 
                = vlSelf->tb_writeback_stage__DOT__program_counter_in;
        } else {
            if (((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
                 & (0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                        << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU)))))) {
                __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                    = ((0xfffffff7U & __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus) 
                       | (8U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                                >> 4U)));
                __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                    = (0x80U | __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus);
            } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable) {
                if ((0x300U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                    __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                        = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                }
            }
            if ((1U & (~ ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
                          & (0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU)))))))) {
                if (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable) {
                    if ((0x300U != (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                        if ((0x304U != (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                            if ((0x305U != (0xfffU 
                                            & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                if ((0x341U != (0xfffU 
                                                & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                    if ((0x342U != 
                                         (0xfffU & 
                                          vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                        if ((0x343U 
                                             == (0xfffU 
                                                 & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                            vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval 
                                                = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                                        }
                                    }
                                    if ((0x342U == 
                                         (0xfffU & 
                                          vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause 
                                            = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                                    }
                                }
                                if ((0x341U == (0xfffU 
                                                & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc 
                                        = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                                }
                            }
                        }
                    }
                }
            }
        }
        if (vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken) {
            vlSelf->tb_writeback_stage__DOT__status_backwards_out = 2U;
            vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out 
                = vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address;
        } else {
            vlSelf->tb_writeback_stage__DOT__status_backwards_out = 0U;
            vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out = 0U;
        }
        vlSelf->tb_writeback_stage__DOT__forwarding_out 
            = (((QData)((IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb)) 
                << 0x25U) | (((QData)((IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb)) 
                              << 5U) | (QData)((IData)(
                                                       (0x1fU 
                                                        & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                           >> 0x16U))))));
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip 
            = ((0xffffff7fU & vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in) 
                  << 7U));
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip 
            = ((0xfffff7ffU & vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip) 
               | ((IData)(vlSelf->tb_writeback_stage__DOT__external_interrupt_in) 
                  << 0xbU));
        if ((1U & (~ (IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken)))) {
            if ((1U & (~ ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
                          & (0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU)))))))) {
                if (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable) {
                    if ((0x300U != (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                        if ((0x304U != (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                            if ((0x305U != (0xfffU 
                                            & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                if ((0x341U != (0xfffU 
                                                & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                    if ((0x342U != 
                                         (0xfffU & 
                                          vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                        if ((0x343U 
                                             != (0xfffU 
                                                 & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                            if ((0x344U 
                                                 == 
                                                 (0xfffU 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                                vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip 
                                                    = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                                            }
                                        }
                                    }
                                }
                            }
                            if ((0x305U == (0xfffU 
                                            & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                                vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec 
                                    = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                            }
                        }
                        if ((0x304U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))) {
                            vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                                = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data;
                        }
                    }
                }
            }
        }
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
        = __Vdly__tb_writeback_stage__DOT__dut__DOT__csr_mstatus;
}

VL_INLINE_OPT void Vtb_writeback_stage___024root___nba_comb__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___nba_comb__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0 = 0;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0 = 0;
    CData/*0:0*/ tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0;
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0 = 0;
    // Body
    if ((8U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
        if ((4U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        } else {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 7U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                = vlSelf->tb_writeback_stage__DOT__rd_data_in;
        }
        vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception 
            = (1U & (IData)((0U == (7U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)))));
    } else {
        if ((4U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause 
                    = ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))
                        ? 6U : 5U);
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__rd_data_in;
            } else if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 4U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__rd_data_in;
            } else {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 2U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
            if ((1U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))) {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 1U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__program_counter_in;
            } else {
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
                vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval 
                    = vlSelf->tb_writeback_stage__DOT__next_program_counter_in;
            }
        } else {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause = 0U;
            vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval = 0U;
        }
        vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception 
            = (1U & (IData)((0U != (6U & (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)))));
    }
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal 
        = (1U & ((1U & vlSelf->tb_writeback_stage__DOT__instruction_in[2U])
                  ? (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                             & ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))))
                  : ((vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                      : ((0x40000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                          ? ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                              : (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr 
        = (IData)((((0x40000000U == (0xc0000000U & 
                                     vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                    & vlSelf->tb_writeback_stage__DOT__instruction_in[2U]) 
                   & ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                       ? (IData)((0x18000000U != (0x18000000U 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                       : (IData)((0U != (0x18000000U 
                                         & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))));
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x27U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0 
        = ((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
           & (0x28U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
        = ((0x300U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
            ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus
            : ((0x304U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie
                : ((0x305U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec
                    : ((0x341U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                        ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc
                        : ((0x342U == (0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                            ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause
                            : ((0x343U == (0xfffU & 
                                           vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                                ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval
                                : ((0x344U == (0xfffU 
                                               & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))
                                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip
                                    : 0U)))))));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken 
        = ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                       >> 0xbU) & (IData)(vlSelf->tb_writeback_stage__DOT__external_interrupt_in)));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken 
        = ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                       >> 7U) & (IData)(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in)));
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data 
        = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data;
    if (((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
         & (IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr))) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable 
            = (IData)((((0x40000000U == (0xc0000000U 
                                         & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])) 
                        & vlSelf->tb_writeback_stage__DOT__instruction_in[2U]) 
                       & ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                           ? ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                               ? ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)) & 
                                  (0U != vlSelf->tb_writeback_stage__DOT__source_data_in))
                               : ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)) | 
                                  (0U != vlSelf->tb_writeback_stage__DOT__source_data_in)))
                           : ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                               ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                   ? (0U != vlSelf->tb_writeback_stage__DOT__source_data_in)
                                   : (0U != vlSelf->tb_writeback_stage__DOT__source_data_in))
                               : (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                  >> 0x1bU)))));
        vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data 
            = ((1U & vlSelf->tb_writeback_stage__DOT__instruction_in[2U])
                ? ((vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                    >> 0x1fU) ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data
                    : ((0x40000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                        ? ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                            ? ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data
                                    : (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       & (~ vlSelf->tb_writeback_stage__DOT__source_data_in)))
                                : ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       | vlSelf->tb_writeback_stage__DOT__source_data_in)
                                    : vlSelf->tb_writeback_stage__DOT__source_data_in))
                            : ((0x10000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                ? ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       & (~ vlSelf->tb_writeback_stage__DOT__source_data_in))
                                    : (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data 
                                       | vlSelf->tb_writeback_stage__DOT__source_data_in))
                                : ((0x8000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                    ? vlSelf->tb_writeback_stage__DOT__source_data_in
                                    : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data)))
                        : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data))
                : vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data);
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0x8000000bU;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 1U;
    } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause = 0x80000007U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken = 1U;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hc0a4638a__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 0xbU;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_hcb080270__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval = 0U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause = 3U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken = 1U;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address = 0U;
    if (vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 1U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec;
    } else if (tb_writeback_stage__DOT__dut__DOT____VdfgExtracted_h8f4b082b__0) {
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken = 1U;
        vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address 
            = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc;
    }
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb = 0U;
    vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
        = vlSelf->tb_writeback_stage__DOT__rd_data_in;
    if ((((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in)) 
          & (~ (IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken))) 
         & (0x2fU != (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))))) {
        if (vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                   >> 0x16U)));
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
                = vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data;
        } else if (vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal) {
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb 
                = (0U != (0x1fU & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                   >> 0x16U)));
            vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb 
                = vlSelf->tb_writeback_stage__DOT__rd_data_in;
        }
    }
}

void Vtb_writeback_stage___024root___eval_nba(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_writeback_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_writeback_stage___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_writeback_stage___024root___eval_triggers__act(Vtb_writeback_stage___024root* vlSelf);
void Vtb_writeback_stage___024root___timing_commit(Vtb_writeback_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__act(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_writeback_stage___024root___timing_resume(Vtb_writeback_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__nba(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_writeback_stage___024root___eval(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval\n"); );
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
            Vtb_writeback_stage___024root___eval_triggers__act(vlSelf);
            Vtb_writeback_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_writeback_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_writeback_stage.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_writeback_stage___024root___timing_resume(vlSelf);
                Vtb_writeback_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_writeback_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_writeback_stage.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_writeback_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_writeback_stage___024root___timing_commit(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_ha16a72ed__0.commit("@(posedge tb_writeback_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_ha16a73b4__0.commit("@(negedge tb_writeback_stage.clk)");
    }
}

void Vtb_writeback_stage___024root___timing_resume(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_ha16a72ed__0.resume("@(posedge tb_writeback_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_ha16a73b4__0.resume("@(negedge tb_writeback_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_writeback_stage___024root___eval_debug_assertions(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
