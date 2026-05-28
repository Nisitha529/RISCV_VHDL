// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_decode_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_decode_stage___024root.h"

VL_ATTR_COLD void Vtb_decode_stage___024root___eval_initial__TOP(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__0(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__1(Vtb_decode_stage___024root* vlSelf);
VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__2(Vtb_decode_stage___024root* vlSelf);

void Vtb_decode_stage___024root___eval_initial(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial\n"); );
    // Body
    Vtb_decode_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_decode_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_decode_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_decode_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_decode_stage__DOT__clk 
        = vlSelf->tb_decode_stage__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_decode_stage___024root___eval_initial__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_decode_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_decode_stage.sv", 
                                           52);
        vlSelf->tb_decode_stage__DOT__clk = (1U & (~ (IData)(vlSelf->tb_decode_stage__DOT__clk)));
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_decode_stage__ConstPool__TABLE_h1e7fd68f_0;

VL_INLINE_OPT void Vtb_decode_stage___024root___act_comb__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___act_comb__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    if ((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))) {
        vlSelf->tb_decode_stage__DOT__status_backwards_out = 2U;
        vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_decode_stage__DOT__jump_address_backwards_in;
    } else if ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))) {
        vlSelf->tb_decode_stage__DOT__status_backwards_out = 1U;
        vlSelf->tb_decode_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_decode_stage__DOT__jump_address_backwards_in;
    } else {
        vlSelf->tb_decode_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_decode_stage__DOT__jump_address_backwards_out = 0U;
    }
    __Vtableidx1 = (0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in);
    vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type 
        = Vtb_decode_stage__ConstPool__TABLE_h1e7fd68f_0
        [__Vtableidx1];
    vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                    : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_decode_stage__DOT__instruction_in 
                          >> 0x14U)))));
    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_out))));
    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
        = ((0xfffff000U & (0x88000000U | ((0x7c00000U 
                                           & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              << 0xfU)) 
                                          | ((0x3e0000U 
                                              & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                 << 2U)) 
                                             | (0x1f000U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 8U)))))) 
           | (IData)(((((QData)((IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0x14U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb_decode_stage__DOT__dut__DOT__instruction_decoder_inst__DOT__imm_out))) 
                      >> 0x20U)));
    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
    if ((0x40U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        if ((0x20U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((0x10U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                        if ((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                          >> 0xcU)))) {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                        } else if ((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                            if ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                                if ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0xfU));
                                }
                            } else if ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                >> 0xfU));
                            } else {
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                            }
                        } else {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                        ? ((0x1000U 
                                            & vlSelf->tb_decode_stage__DOT__instruction_in)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_decode_stage__DOT__instruction_in)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_decode_stage__DOT__instruction_in)
                                           ? ((0x1000U 
                                               & vlSelf->tb_decode_stage__DOT__instruction_in)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_decode_stage__DOT__instruction_in)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                        }
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                        } else {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                        }
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                    ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_decode_stage__DOT__instruction_in)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                       ? ((0x1000U 
                                           & vlSelf->tb_decode_stage__DOT__instruction_in)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_decode_stage__DOT__instruction_in)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        }
    } else if ((0x20U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        if ((0x10U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        }
    } else if ((0x10U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                if ((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                    } else if ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                        if ((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0x19U))) {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0x14U));
                        } else if ((0x20U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                              >> 0x19U))) {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                            >> 0x14U));
                        } else {
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                        }
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                    }
                } else if ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                } else if ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    if ((0U == (vlSelf->tb_decode_stage__DOT__instruction_in 
                                >> 0x19U))) {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                        >> 0x14U));
                    } else {
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    }
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 0U;
                }
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        }
    } else if ((8U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                } else {
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        }
    } else if ((4U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
    } else if ((2U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
        if ((1U & vlSelf->tb_decode_stage__DOT__instruction_in)) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]);
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                        ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? 0x31U : ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                            ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_decode_stage__DOT__instruction_in)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                           ? ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_decode_stage__DOT__instruction_in)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                               ? ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_decode_stage__DOT__instruction_in)
                                ? 0xbU : 0xaU))) >> 5U));
        } else {
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
        }
    } else {
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]));
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U] = 0U;
    }
    if ((1U & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U])) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used 
            = (1U & ((~ (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])))))));
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])))));
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used 
            = (1U & ((vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])
                                    ? ((vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U])))
                              : (~ (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                                   >> 0x1dU))));
    }
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected = 0U;
    if (vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected 
            = ((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                >> 0x11U))) ? 0U : 
               vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                          >> 0x11U))]);
        if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                               >> 0x11U))) & (IData)(
                                                     (vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                                                      >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__exe_forwarding_in)) 
                == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                             >> 0x11U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__mem_forwarding_in)) 
                       == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in)) 
                       == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                           >> 5U));
        }
    }
    vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected = 0U;
    if (vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected 
            = ((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                >> 0xcU))) ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                          >> 0xcU))]);
        if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                               >> 0xcU))) & (IData)(
                                                    (vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                                                     >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__exe_forwarding_in)) 
                == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                             >> 0xcU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__exe_forwarding_in 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__mem_forwarding_in)) 
                       == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__mem_forwarding_in 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in)) 
                       == (0x1fU & (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected 
                = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                           >> 5U));
        }
    }
}

void Vtb_decode_stage___024root___eval_act(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_decode_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_decode_stage___024root___nba_sequent__TOP__0(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v0;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v0 = 0;
    CData/*4:0*/ __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 = 0;
    IData/*31:0*/ __Vdlyvval__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvval__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 = 0;
    CData/*0:0*/ __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 = 0;
    VlWide<3>/*95:0*/ __Vtemp_ha137b473__0;
    // Body
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v0 = 0U;
    __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 = 0U;
    if (vlSelf->tb_decode_stage__DOT__rst) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__i = 0x20U;
        vlSelf->tb_decode_stage__DOT__program_counter_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__rs2_data_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__rs1_data_reg_out = 0U;
        vlSelf->tb_decode_stage__DOT__status_forwards_out = 1U;
        __Vtemp_ha137b473__0[1U] = 0x90000000U;
        __Vtemp_ha137b473__0[2U] = 0U;
        vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] = 0U;
        __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v0 = 1U;
    } else {
        if ((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))) {
            vlSelf->tb_decode_stage__DOT__program_counter_reg_out = 0U;
            vlSelf->tb_decode_stage__DOT__rs2_data_reg_out = 0U;
            vlSelf->tb_decode_stage__DOT__rs1_data_reg_out = 0U;
            vlSelf->tb_decode_stage__DOT__status_forwards_out = 1U;
            __Vtemp_ha137b473__0[1U] = 0x90000000U;
            __Vtemp_ha137b473__0[2U] = 0U;
            vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] = 0U;
        } else if ((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))) {
            vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_decode_stage__DOT__program_counter_reg_out;
            vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                = vlSelf->tb_decode_stage__DOT__rs2_data_reg_out;
            vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                = vlSelf->tb_decode_stage__DOT__rs1_data_reg_out;
            vlSelf->tb_decode_stage__DOT__status_forwards_out 
                = vlSelf->tb_decode_stage__DOT__status_forwards_out;
            __Vtemp_ha137b473__0[1U] = vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U];
            __Vtemp_ha137b473__0[2U] = vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U];
            vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                = vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U];
        } else {
            vlSelf->tb_decode_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_decode_stage__DOT__program_counter_in;
            if ((0U == (IData)(vlSelf->tb_decode_stage__DOT__status_forwards_in))) {
                vlSelf->tb_decode_stage__DOT__rs2_data_reg_out 
                    = vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_selected;
                vlSelf->tb_decode_stage__DOT__rs1_data_reg_out 
                    = vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_selected;
                vlSelf->tb_decode_stage__DOT__status_forwards_out 
                    = ((0x31U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                                            << 5U) 
                                           | (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                              >> 0x1bU))))
                        ? 4U : ((0x27U == (0x3fU & 
                                           ((vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                 ? 9U : ((0x28U == 
                                          (0x3fU & 
                                           ((vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U] 
                                               >> 0x1bU))))
                                          ? 0xaU : 0U)));
                __Vtemp_ha137b473__0[1U] = vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[1U];
                __Vtemp_ha137b473__0[2U] = vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[2U];
                vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] 
                    = vlSelf->tb_decode_stage__DOT__dut__DOT__decoded_instruction[0U];
            } else {
                vlSelf->tb_decode_stage__DOT__rs2_data_reg_out = 0U;
                vlSelf->tb_decode_stage__DOT__rs1_data_reg_out = 0U;
                vlSelf->tb_decode_stage__DOT__status_forwards_out 
                    = vlSelf->tb_decode_stage__DOT__status_forwards_in;
                __Vtemp_ha137b473__0[1U] = 0x90000000U;
                __Vtemp_ha137b473__0[2U] = 0U;
                vlSelf->tb_decode_stage__DOT__instruction_reg_out[0U] = 0U;
            }
        }
        if (((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                      >> 0x25U)) & (0U != (0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))))) {
            __Vdlyvval__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 
                = (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                           >> 5U));
            __Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 = 1U;
            __Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32 
                = (0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in));
        }
    }
    vlSelf->tb_decode_stage__DOT__instruction_reg_out[1U] 
        = __Vtemp_ha137b473__0[1U];
    vlSelf->tb_decode_stage__DOT__instruction_reg_out[2U] 
        = __Vtemp_ha137b473__0[2U];
    if (__Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v0) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[1U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[2U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[3U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[4U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[5U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[6U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[7U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[8U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[9U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xaU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xbU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xcU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xdU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xeU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0xfU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x10U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x11U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x12U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x13U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x14U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x15U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x16U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x17U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x18U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x19U] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1aU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1bU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1cU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1dU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1eU] = 0U;
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[0x1fU] = 0U;
    }
    if (__Vdlyvset__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32) {
        vlSelf->tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs[__Vdlyvdim0__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32] 
            = __Vdlyvval__tb_decode_stage__DOT__dut__DOT__register_file_inst__DOT__regs__v32;
    }
}

void Vtb_decode_stage___024root___eval_nba(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_decode_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_decode_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_decode_stage___024root___eval_triggers__act(Vtb_decode_stage___024root* vlSelf);
void Vtb_decode_stage___024root___timing_commit(Vtb_decode_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__act(Vtb_decode_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_decode_stage___024root___timing_resume(Vtb_decode_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_decode_stage___024root___dump_triggers__nba(Vtb_decode_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_decode_stage___024root___eval(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval\n"); );
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
            Vtb_decode_stage___024root___eval_triggers__act(vlSelf);
            Vtb_decode_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_decode_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_decode_stage.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_decode_stage___024root___timing_resume(vlSelf);
                Vtb_decode_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_decode_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_decode_stage.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_decode_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_decode_stage___024root___timing_commit(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_h222ba413__0.commit("@(posedge tb_decode_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h222ba3d2__0.commit("@(negedge tb_decode_stage.clk)");
    }
}

void Vtb_decode_stage___024root___timing_resume(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_h222ba413__0.resume("@(posedge tb_decode_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h222ba3d2__0.resume("@(negedge tb_decode_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_decode_stage___024root___eval_debug_assertions(Vtb_decode_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
