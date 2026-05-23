// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_execute_stage__Syms.h"


void Vtb_execute_stage___024root__trace_chg_sub_0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_execute_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_execute_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_stage___024root*>(voidSelf);
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_execute_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_execute_stage___024root__trace_chg_sub_0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_execute_stage__DOT__rs1_data_in),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_execute_stage__DOT__rs2_data_in),32);
        bufp->chgWData(oldp+2,(vlSelf->tb_execute_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+5,(vlSelf->tb_execute_stage__DOT__program_counter_in),32);
        bufp->chgCData(oldp+6,(vlSelf->tb_execute_stage__DOT__status_forwards_in),4);
        bufp->chgCData(oldp+7,(((0x31U == (0x3fU & 
                                           ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU))))
                                 ? 4U : 0U)),4);
        bufp->chgCData(oldp+8,(vlSelf->tb_execute_stage__DOT__status_backwards_in),2);
        bufp->chgIData(oldp+9,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_in),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_execute_stage__DOT__instruction_in[0U]),32);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[4U]))) {
        bufp->chgCData(oldp+11,(((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                   & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                                  | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                                  ? 2U : 0U)),2);
        bufp->chgCData(oldp+12,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+13,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm));
        bufp->chgBit(oldp+14,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch));
        bufp->chgBit(oldp+15,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump));
        bufp->chgBit(oldp+16,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store));
        bufp->chgBit(oldp+17,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_load));
        bufp->chgBit(oldp+18,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr));
        bufp->chgIData(oldp+19,(vlSelf->tb_execute_stage__DOT__dut__DOT__op2),32);
        bufp->chgIData(oldp+20,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result),32);
        bufp->chgBit(oldp+21,((0U == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)));
        bufp->chgBit(oldp+22,(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch));
        bufp->chgCData(oldp+23,((0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__op2)),5);
    }
    bufp->chgBit(oldp+24,(vlSelf->tb_execute_stage__DOT__clk));
    bufp->chgBit(oldp+25,(vlSelf->tb_execute_stage__DOT__rst));
    bufp->chgIData(oldp+26,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
                              ? vlSelf->tb_execute_stage__DOT__rs2_data_in
                              : 0U)),32);
    bufp->chgIData(oldp+27,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                              | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store))
                              ? 0U : ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                                       ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                       : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                           >> 0x1fU)
                                           ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                           : ((0x40000000U 
                                               & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                               ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                               : ((0x20000000U 
                                                   & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                   ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                   : 
                                                  ((0x10000000U 
                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                    ? 
                                                   ((0x8000000U 
                                                     & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                     ? 
                                                    ((IData)(4U) 
                                                     + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->tb_execute_stage__DOT__program_counter_in))
                                                    : 
                                                   ((0x8000000U 
                                                     & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                     ? 
                                                    (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                                     + 
                                                     vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                                     : 
                                                    vlSelf->tb_execute_stage__DOT__instruction_in[0U])))))))),32);
    bufp->chgIData(oldp+28,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                                  ? (0xfffffffeU & 
                                     (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                      + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                                  : (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                     + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                              : (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                  & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))
                                  ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                     + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                  : ((IData)(4U) + vlSelf->tb_execute_stage__DOT__program_counter_in)))),32);
    bufp->chgQData(oldp+29,((((QData)((IData)((1U & 
                                               (~ ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                                   | ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store) 
                                                      | (0U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                             >> 0x16U))))))))) 
                              << 0x25U) | (((QData)((IData)(
                                                            (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                                              | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store))
                                                              ? 0U
                                                              : 
                                                             ((1U 
                                                               & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                                                               ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                               : 
                                                              ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                                >> 0x1fU)
                                                                ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                                : 
                                                               ((0x40000000U 
                                                                 & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                                 ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                                 : 
                                                                ((0x20000000U 
                                                                  & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                                  ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                                  : 
                                                                 ((0x10000000U 
                                                                   & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                                   ? 
                                                                  ((0x8000000U 
                                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                                    ? 
                                                                   ((IData)(4U) 
                                                                    + vlSelf->tb_execute_stage__DOT__program_counter_in)
                                                                    : 
                                                                   ((IData)(4U) 
                                                                    + vlSelf->tb_execute_stage__DOT__program_counter_in))
                                                                   : 
                                                                  ((0x8000000U 
                                                                    & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                                    ? 
                                                                   (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                                                    + 
                                                                    vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                                                    : 
                                                                   vlSelf->tb_execute_stage__DOT__instruction_in[0U]))))))))) 
                                            << 5U) 
                                           | (QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                                 >> 0x16U))))))),38);
    bufp->chgIData(oldp+31,(((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                               & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                              | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                              ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
                                  ? ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                                      ? (0xfffffffeU 
                                         & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                            + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                                      : (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                         + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                                  : (((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                      & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch))
                                      ? (vlSelf->tb_execute_stage__DOT__program_counter_in 
                                         + vlSelf->tb_execute_stage__DOT__instruction_in[0U])
                                      : ((IData)(4U) 
                                         + vlSelf->tb_execute_stage__DOT__program_counter_in)))
                              : 0U)),32);
}

void Vtb_execute_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_execute_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_stage___024root*>(voidSelf);
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
