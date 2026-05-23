// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage__Syms.h"
#include "Vtb_memory_stage___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__act(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory_stage___024root___eval_triggers__act(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->tb_memory_stage__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->tb_memory_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(2U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(3U) = ((IData)(vlSelf->tb_memory_stage__DOT__rst) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__rst));
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk 
        = vlSelf->tb_memory_stage__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__rst 
        = vlSelf->tb_memory_stage__DOT__rst;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(3U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_memory_stage___024root___act_comb__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_store 
        = (((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))) 
            | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                             >> 0x1bU))))) 
           | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_load 
        = (((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))) 
              | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) 
             | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                             >> 0x1bU))))) 
            | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU))))) 
           | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU)))));
    vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width = 0x20U;
    if ((1U & (~ vlSelf->tb_memory_stage__DOT__instruction_in[2U]))) {
        if ((vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                            = ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                                ? 0x20U : 0x10U);
                    }
                }
            }
        } else if ((0x40000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
            if ((0x20000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                    = ((0x10000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                            ? 8U : 0x10U) : ((0x8000000U 
                                              & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                                              ? 8U : 0x20U));
            } else if ((0x10000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                    = ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                        ? 0x10U : 8U);
            }
        }
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel = 0xfU;
    if ((8U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? 8U : 4U) : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                                   ? 2U : 1U));
    } else if ((0x10U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? 0xcU : 3U);
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data = 0U;
    if ((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
          & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack)) 
         & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)))) {
        if ((8U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                        ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                 >> 0x10U)))
                    : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                        ? (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
            if ((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
                if ((0x80U & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data)) {
                    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                        = (0xffffff00U | (0xffU & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data));
                }
            }
        } else if ((0x10U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso));
            if ((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
                if ((0x8000U & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data)) {
                    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                        = (0xffff0000U | (0xffffU & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data));
                }
            }
        } else {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso;
        }
    }
}

VL_INLINE_OPT void Vtb_memory_stage___024root___nba_sequent__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state;
    __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0;
    // Body
    __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state;
    vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
    vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
    if (vlSelf->tb_memory_stage__DOT__rst) {
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__source_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] = 0U;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.stb = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.adr = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.sel = 0xfU;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.we = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_mosi = 0U;
    } else {
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        vlSelf->tb_memory_stage__DOT__source_data_reg_out 
            = vlSelf->tb_memory_stage__DOT__source_data_in;
        vlSelf->tb_memory_stage__DOT__status_forwards_out 
            = ((0x31U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))
                ? 4U : 0U);
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[0U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[1U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[2U];
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
            = ((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
                 & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack)) 
                & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)))
                ? vlSelf->tb_memory_stage__DOT__dut__DOT__load_data
                : vlSelf->tb_memory_stage__DOT__rd_data_in);
        if ((((0U != (0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                               >> 0x16U))) & (~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store))) 
             & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load)) 
                | (((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
                    & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack)) 
                   & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)))))) {
            vlSelf->tb_memory_stage__DOT__forwarding_out 
                = (0x2000000000ULL | vlSelf->tb_memory_stage__DOT__forwarding_out);
            vlSelf->tb_memory_stage__DOT__forwarding_out 
                = ((0x200000001fULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
                   | ((QData)((IData)(((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
                                         & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack)) 
                                        & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)))
                                        ? vlSelf->tb_memory_stage__DOT__dut__DOT__load_data
                                        : vlSelf->tb_memory_stage__DOT__rd_data_in))) 
                      << 5U));
            vlSelf->tb_memory_stage__DOT__forwarding_out 
                = ((0x3fffffffe0ULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
                   | (IData)((IData)((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                               >> 0x16U)))));
        } else {
            vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        }
        if ((0U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state))) {
            if ((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
                  | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store)) 
                 & (0x31U != (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                        << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU)))))) {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc = 1U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.stb = 1U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.adr 
                    = vlSelf->tb_memory_stage__DOT__rd_data_in;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.sel 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.we 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__is_store;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_mosi 
                    = vlSelf->tb_memory_stage__DOT__source_data_in;
                __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 1U;
            } else {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc = 0U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.stb = 0U;
            }
        } else if ((1U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state))) {
            if (((IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack) 
                 | (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err))) {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc = 0U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.stb = 0U;
                __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
            } else {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc = 1U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.stb = 1U;
            }
        } else {
            __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
        }
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state;
}

VL_INLINE_OPT void Vtb_memory_stage___024root___nba_sequent__TOP__1(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___nba_sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vdlyvdim0__tb_memory_stage__DOT__memory__v0;
    __Vdlyvdim0__tb_memory_stage__DOT__memory__v0 = 0;
    IData/*31:0*/ __Vdlyvval__tb_memory_stage__DOT__memory__v0;
    __Vdlyvval__tb_memory_stage__DOT__memory__v0 = 0;
    CData/*0:0*/ __Vdlyvset__tb_memory_stage__DOT__memory__v0;
    __Vdlyvset__tb_memory_stage__DOT__memory__v0 = 0;
    // Body
    __Vdlyvset__tb_memory_stage__DOT__memory__v0 = 0U;
    if (vlSelf->tb_memory_stage__DOT__rst) {
        vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
    } else {
        vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 0U;
        vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 0U;
        if (((IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc) 
             & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.stb))) {
            if (vlSelf->tb_memory_stage__DOT__force_error) {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.err = 1U;
                vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso = 0U;
            } else if ((1U & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.we)))) {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                    = vlSelf->tb_memory_stage__DOT__memory
                    [(0x3ffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.adr 
                                >> 2U))];
            }
            if ((1U & (~ (IData)(vlSelf->tb_memory_stage__DOT__force_error)))) {
                vlSymsp->TOP__tb_memory_stage__DOT__wb.ack = 1U;
            }
        }
    }
    if ((1U & (~ (IData)(vlSelf->tb_memory_stage__DOT__rst)))) {
        if (((IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc) 
             & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.stb))) {
            if ((1U & (~ (IData)(vlSelf->tb_memory_stage__DOT__force_error)))) {
                if (vlSymsp->TOP__tb_memory_stage__DOT__wb.we) {
                    __Vdlyvval__tb_memory_stage__DOT__memory__v0 
                        = vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_mosi;
                    __Vdlyvset__tb_memory_stage__DOT__memory__v0 = 1U;
                    __Vdlyvdim0__tb_memory_stage__DOT__memory__v0 
                        = (0x3ffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.adr 
                                     >> 2U));
                }
            }
        }
    }
    if (__Vdlyvset__tb_memory_stage__DOT__memory__v0) {
        vlSelf->tb_memory_stage__DOT__memory[__Vdlyvdim0__tb_memory_stage__DOT__memory__v0] 
            = __Vdlyvval__tb_memory_stage__DOT__memory__v0;
    }
}

VL_INLINE_OPT void Vtb_memory_stage___024root___nba_comb__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width = 0x20U;
    if ((1U & (~ vlSelf->tb_memory_stage__DOT__instruction_in[2U]))) {
        if ((vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                            = ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                                ? 0x20U : 0x10U);
                    }
                }
            }
        } else if ((0x40000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
            if ((0x20000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                    = ((0x10000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                            ? 8U : 0x10U) : ((0x8000000U 
                                              & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                                              ? 8U : 0x20U));
            } else if ((0x10000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width 
                    = ((0x8000000U & vlSelf->tb_memory_stage__DOT__instruction_in[1U])
                        ? 0x10U : 8U);
            }
        }
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_store 
        = (((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))) 
            | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                             >> 0x1bU))))) 
           | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_load 
        = (((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))) 
              | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) 
             | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                             >> 0x1bU))))) 
            | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU))))) 
           | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU)))));
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel = 0xfU;
    if ((8U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? 8U : 4U) : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                                   ? 2U : 1U));
    } else if ((0x10U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? 0xcU : 3U);
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data = 0U;
    if ((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
          & (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack)) 
         & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)))) {
        if ((8U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                        ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                           >> 0x18U) : (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                 >> 0x10U)))
                    : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                        ? (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                    >> 8U)) : (0xffU 
                                               & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
            if ((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
                if ((0x80U & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data)) {
                    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                        = (0xffffff00U | (0xffU & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data));
                }
            }
        } else if ((0x10U == (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                       >> 0x10U) : (0xffffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso));
            if ((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
                if ((0x8000U & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data)) {
                    vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                        = (0xffff0000U | (0xffffU & vlSelf->tb_memory_stage__DOT__dut__DOT__load_data));
                }
            }
        } else {
            vlSelf->tb_memory_stage__DOT__dut__DOT__load_data 
                = vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso;
        }
    }
}
