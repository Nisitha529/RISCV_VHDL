// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_execute_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_execute_stage___024root.h"

VL_ATTR_COLD void Vtb_execute_stage___024root___eval_initial__TOP(Vtb_execute_stage___024root* vlSelf);
VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__0(Vtb_execute_stage___024root* vlSelf);
VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__1(Vtb_execute_stage___024root* vlSelf);
VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__2(Vtb_execute_stage___024root* vlSelf);

void Vtb_execute_stage___024root___eval_initial(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial\n"); );
    // Body
    Vtb_execute_stage___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_execute_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_execute_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_execute_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_execute_stage__DOT__clk 
        = vlSelf->tb_execute_stage__DOT__clk;
}

VL_INLINE_OPT VlCoroutine Vtb_execute_stage___024root___eval_initial__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_execute_stage.sv", 
                                           56);
        vlSelf->tb_execute_stage__DOT__clk = (1U & 
                                              (~ (IData)(vlSelf->tb_execute_stage__DOT__clk)));
    }
}

VL_INLINE_OPT void Vtb_execute_stage___024root___act_comb__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb = 0U;
    if (((0U == (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)) 
         & (0U != (0x1fU & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                            >> 0x16U))))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb 
            = (1U & ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                      ? (IData)(((0U == (0xc0000000U 
                                         & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) 
                                 & ((~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                        >> 0x1dU)) 
                                    | (IData)((0U == 
                                               (0x18000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U]))))))
                      : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1fU) ? (IData)((0U != 
                                               (0x70000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])))
                          : (IData)((0U == (0x60000000U 
                                            & vlSelf->tb_execute_stage__DOT__instruction_in[1U]))))));
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target 
        = (vlSelf->tb_execute_stage__DOT__program_counter_in 
           + vlSelf->tb_execute_stage__DOT__instruction_in[0U]);
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch 
        = ((~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]) 
           & ((~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                  >> 0x1fU)) & ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                 ? (IData)(((0U == 
                                             (0x30000000U 
                                              & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) 
                                            & ((0x8000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                   >= vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                   < vlSelf->tb_execute_stage__DOT__rs2_data_in))))
                                 : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                     >> 0x1dU) & ((0x10000000U 
                                                   & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__rs2_data_in))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                    != vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                    : 
                                                   (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                    == vlSelf->tb_execute_stage__DOT__rs2_data_in)))))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 0U;
    if ((1U & (~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]))) {
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
            if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        }
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm)
            ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
            : vlSelf->tb_execute_stage__DOT__rs2_data_in);
    if ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])) {
        if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                        }
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            }
        } else {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                    }
                } else if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i = 1U;
                        }
                    }
                }
            }
        }
    } else if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU)) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 1U;
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i) 
           | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump) 
              | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                 & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i)
            ? ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)
            : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
                ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                    ? (0xfffffffeU & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                    : vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target)
                : (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                    & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))
                    ? vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target
                    : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      < vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_execute_stage__DOT__rs1_data_in, 
                                                          (0x1fU 
                                                           & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))))
            : ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           >> (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2))
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           << (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           ^ vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           | vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))
                : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           - vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           + vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb 
        = ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
            ? ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                  ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                  ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                      ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                      ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                          ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                      : ((0x8000000U 
                                          & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                          ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                              ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                          : 0U)))) : 
               ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                 ? 0U : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                          ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? 0U : ((0x8000000U & 
                                       vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                       ? 0U : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                                ? 0U
                                                : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                          : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                              ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result))))
            : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                  ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                  ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                      ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                      ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                          ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                      : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                            : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                            ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in))
                            : ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                   + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                : vlSelf->tb_execute_stage__DOT__instruction_in[0U]))))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned = 0U;
    if ((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump) 
          | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
             & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))) 
         & (0U != (3U & vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned = 1U;
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb = 0U;
    if ((2U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 2U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else if ((1U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 1U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else if ((((0U == (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)) 
                 & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect)) 
                & (~ (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 2U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb;
    }
}

void Vtb_execute_stage___024root___eval_act(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_execute_stage___024root___act_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_execute_stage___024root___nba_sequent__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h51205a9a__0;
    IData/*31:0*/ __Vtemp_he7fcc583__0;
    // Body
    if (vlSelf->tb_execute_stage__DOT__rst) {
        vlSelf->tb_execute_stage__DOT__program_counter_reg_out = 0U;
        __Vtemp_h51205a9a__0[1U] = 0x90000000U;
        __Vtemp_h51205a9a__0[2U] = 0U;
        vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_execute_stage__DOT__rd_data_reg_out = 0U;
        __Vtemp_he7fcc583__0 = 0U;
        vlSelf->tb_execute_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_execute_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out = 0U;
        vlSelf->tb_execute_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_execute_stage__DOT__jump_address_backwards_out = 0U;
    } else if ((2U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__program_counter_reg_out = 0U;
        __Vtemp_h51205a9a__0[1U] = 0x90000000U;
        __Vtemp_h51205a9a__0[2U] = 0U;
        vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_execute_stage__DOT__rd_data_reg_out = 0U;
        __Vtemp_he7fcc583__0 = 0U;
        vlSelf->tb_execute_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_execute_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out = 0U;
        vlSelf->tb_execute_stage__DOT__status_backwards_out = 2U;
        vlSelf->tb_execute_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else if ((1U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_execute_stage__DOT__program_counter_reg_out;
        __Vtemp_h51205a9a__0[1U] = vlSelf->tb_execute_stage__DOT__instruction_reg_out[1U];
        __Vtemp_h51205a9a__0[2U] = vlSelf->tb_execute_stage__DOT__instruction_reg_out[2U];
        vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U] 
            = vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U];
        vlSelf->tb_execute_stage__DOT__rd_data_reg_out 
            = vlSelf->tb_execute_stage__DOT__rd_data_reg_out;
        __Vtemp_he7fcc583__0 = vlSelf->tb_execute_stage__DOT__source_data_reg_out;
        vlSelf->tb_execute_stage__DOT__forwarding_out 
            = vlSelf->tb_execute_stage__DOT__forwarding_out;
        vlSelf->tb_execute_stage__DOT__status_forwards_out 
            = vlSelf->tb_execute_stage__DOT__status_forwards_out;
        vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out;
        vlSelf->tb_execute_stage__DOT__status_backwards_out = 1U;
        vlSelf->tb_execute_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else {
        vlSelf->tb_execute_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_execute_stage__DOT__program_counter_in;
        if ((0U == (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in))) {
            __Vtemp_h51205a9a__0[1U] = vlSelf->tb_execute_stage__DOT__instruction_in[1U];
            __Vtemp_h51205a9a__0[2U] = vlSelf->tb_execute_stage__DOT__instruction_in[2U];
            vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U] 
                = vlSelf->tb_execute_stage__DOT__instruction_in[0U];
            vlSelf->tb_execute_stage__DOT__rd_data_reg_out 
                = vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb;
            __Vtemp_he7fcc583__0 = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
                                     ? vlSelf->tb_execute_stage__DOT__rs2_data_in
                                     : ((((0x29U == 
                                           (0x3fU & 
                                            ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                >> 0x1bU)))) 
                                          | (0x2aU 
                                             == (0x3fU 
                                                 & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                       >> 0x1bU))))) 
                                         | (0x2bU == 
                                            (0x3fU 
                                             & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU)))))
                                         ? vlSelf->tb_execute_stage__DOT__rs1_data_in
                                         : ((((0x2cU 
                                               == (0x3fU 
                                                   & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                         >> 0x1bU)))) 
                                              | (0x2dU 
                                                 == 
                                                 (0x3fU 
                                                  & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                        >> 0x1bU))))) 
                                             | (0x2eU 
                                                == 
                                                (0x3fU 
                                                 & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                     << 5U) 
                                                    | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                       >> 0x1bU)))))
                                             ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
                                             : 0U)));
            vlSelf->tb_execute_stage__DOT__forwarding_out 
                = (((QData)((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb)) 
                    << 0x25U) | (((QData)((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb)) 
                                  << 5U) | (QData)((IData)(
                                                           (0x1fU 
                                                            & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                               >> 0x16U))))));
            vlSelf->tb_execute_stage__DOT__status_forwards_out 
                = ((0U != (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in))
                    ? (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)
                    : ((0x31U == (0x3fU & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                            << 5U) 
                                           | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))
                        ? 4U : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned)
                                 ? 2U : 0U)));
            vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out 
                = vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb;
        } else {
            __Vtemp_h51205a9a__0[1U] = 0x90000000U;
            __Vtemp_h51205a9a__0[2U] = 0U;
            vlSelf->tb_execute_stage__DOT__instruction_reg_out[0U] = 0U;
            vlSelf->tb_execute_stage__DOT__rd_data_reg_out = 0U;
            __Vtemp_he7fcc583__0 = 0U;
            vlSelf->tb_execute_stage__DOT__forwarding_out = 0ULL;
            vlSelf->tb_execute_stage__DOT__status_forwards_out 
                = vlSelf->tb_execute_stage__DOT__status_forwards_in;
            vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out 
                = ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in);
        }
        vlSelf->tb_execute_stage__DOT__status_backwards_out 
            = vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb;
        vlSelf->tb_execute_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb;
    }
    vlSelf->tb_execute_stage__DOT__instruction_reg_out[1U] 
        = __Vtemp_h51205a9a__0[1U];
    vlSelf->tb_execute_stage__DOT__instruction_reg_out[2U] 
        = __Vtemp_h51205a9a__0[2U];
    vlSelf->tb_execute_stage__DOT__source_data_reg_out 
        = __Vtemp_he7fcc583__0;
}

VL_INLINE_OPT void Vtb_execute_stage___024root___nba_comb__TOP__0(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target 
        = (vlSelf->tb_execute_stage__DOT__program_counter_in 
           + vlSelf->tb_execute_stage__DOT__instruction_in[0U]);
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch 
        = ((~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]) 
           & ((~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                  >> 0x1fU)) & ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                 ? (IData)(((0U == 
                                             (0x30000000U 
                                              & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) 
                                            & ((0x8000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                   >= vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                   < vlSelf->tb_execute_stage__DOT__rs2_data_in))))
                                 : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                     >> 0x1dU) & ((0x10000000U 
                                                   & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__rs2_data_in))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                    != vlSelf->tb_execute_stage__DOT__rs2_data_in)
                                                    : 
                                                   (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                    == vlSelf->tb_execute_stage__DOT__rs2_data_in)))))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 0U;
    if ((1U & (~ vlSelf->tb_execute_stage__DOT__instruction_in[2U]))) {
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
            }
        } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
            if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_store = 1U;
                    }
                }
            } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm = 1U;
            }
        }
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb = 0U;
    if (((0U == (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)) 
         & (0U != (0x1fU & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                            >> 0x16U))))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb 
            = (1U & ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                      ? (IData)(((0U == (0xc0000000U 
                                         & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) 
                                 & ((~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                        >> 0x1dU)) 
                                    | (IData)((0U == 
                                               (0x18000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U]))))))
                      : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1fU) ? (IData)((0U != 
                                               (0x70000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])))
                          : (IData)((0U == (0x60000000U 
                                            & vlSelf->tb_execute_stage__DOT__instruction_in[1U]))))));
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm)
            ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
            : vlSelf->tb_execute_stage__DOT__rs2_data_in);
    if ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])) {
        if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                        }
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            } else if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 0U;
            }
        } else {
            if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
            } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                    }
                } else if ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                    if ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
                        if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i = 1U;
                        }
                    }
                }
            }
        }
    } else if ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU)) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op = 1U;
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i) 
           | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump) 
              | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                 & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb 
        = ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i)
            ? ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)
            : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
                ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                    ? (0xfffffffeU & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                    : vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target)
                : (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                    & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))
                    ? vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target
                    : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      < vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_execute_stage__DOT__rs1_data_in, vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_execute_stage__DOT__rs1_data_in, 
                                                          (0x1fU 
                                                           & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))))
            : ((4U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           >> (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2))
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           << (0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           ^ vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           | vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))
                : ((2U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           - vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2))
                    : ((1U & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op))
                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2
                        : (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                           + vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb 
        = ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
            ? ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                  ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                  ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                      ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                      ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                          ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                      : ((0x8000000U 
                                          & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                          ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                              ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                          : 0U)))) : 
               ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                 ? 0U : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                          ? ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? 0U : ((0x8000000U & 
                                       vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                       ? 0U : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                                ? 0U
                                                : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                          : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                              ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result))))
            : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                  ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                  ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                      ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                      ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                          ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                                      : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                    ? ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                            : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                                ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                        ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch)
                            ? 0U : vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                            ? ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in))
                            : ((0x8000000U & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                   + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                : vlSelf->tb_execute_stage__DOT__instruction_in[0U]))))));
    vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned = 0U;
    if ((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump) 
          | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
             & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))) 
         & (0U != (3U & vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned = 1U;
    }
    vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 0U;
    vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb = 0U;
    if ((2U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 2U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else if ((1U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 1U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__jump_address_backwards_in;
    } else if ((((0U == (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)) 
                 & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect)) 
                & (~ (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned)))) {
        vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb = 2U;
        vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb 
            = vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb;
    }
}

void Vtb_execute_stage___024root___eval_nba(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtb_execute_stage___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_execute_stage___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
}

void Vtb_execute_stage___024root___eval_triggers__act(Vtb_execute_stage___024root* vlSelf);
void Vtb_execute_stage___024root___timing_commit(Vtb_execute_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_stage___024root___dump_triggers__act(Vtb_execute_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_execute_stage___024root___timing_resume(Vtb_execute_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_execute_stage___024root___dump_triggers__nba(Vtb_execute_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_execute_stage___024root___eval(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval\n"); );
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
            Vtb_execute_stage___024root___eval_triggers__act(vlSelf);
            Vtb_execute_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_execute_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_execute_stage.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_execute_stage___024root___timing_resume(vlSelf);
                Vtb_execute_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_execute_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_execute_stage.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_execute_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_execute_stage___024root___timing_commit(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(0U))))) {
        vlSelf->__VtrigSched_hc23b5e66__0.commit("@(posedge tb_execute_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_hc23b5f27__0.commit("@(negedge tb_execute_stage.clk)");
    }
}

void Vtb_execute_stage___024root___timing_resume(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VtrigSched_hc23b5e66__0.resume("@(posedge tb_execute_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_hc23b5f27__0.resume("@(negedge tb_execute_stage.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_execute_stage___024root___eval_debug_assertions(Vtb_execute_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
