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
        bufp->chgBit(oldp+0,(vlSelf->tb_execute_stage__DOT__rst));
        bufp->chgIData(oldp+1,(vlSelf->tb_execute_stage__DOT__rs1_data_in),32);
        bufp->chgIData(oldp+2,(vlSelf->tb_execute_stage__DOT__rs2_data_in),32);
        bufp->chgWData(oldp+3,(vlSelf->tb_execute_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+6,(vlSelf->tb_execute_stage__DOT__program_counter_in),32);
        bufp->chgCData(oldp+7,(vlSelf->tb_execute_stage__DOT__status_forwards_in),4);
        bufp->chgCData(oldp+8,(vlSelf->tb_execute_stage__DOT__status_backwards_in),2);
        bufp->chgIData(oldp+9,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_in),32);
        bufp->chgIData(oldp+10,(vlSelf->tb_execute_stage__DOT__pass_count),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_execute_stage__DOT__fail_count),32);
        bufp->chgBit(oldp+12,((1U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+13,((2U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[3U] 
                     | vlSelf->__Vm_traceActivity[5U]))) {
        bufp->chgCData(oldp+14,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op),4);
        bufp->chgBit(oldp+15,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm));
        bufp->chgBit(oldp+16,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch));
        bufp->chgBit(oldp+17,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump));
        bufp->chgBit(oldp+18,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr));
        bufp->chgBit(oldp+19,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_load));
        bufp->chgBit(oldp+20,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store));
        bufp->chgBit(oldp+21,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i));
        bufp->chgBit(oldp+22,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr));
        bufp->chgIData(oldp+23,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2),32);
        bufp->chgIData(oldp+24,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result),32);
        bufp->chgBit(oldp+25,((0U == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)));
        bufp->chgBit(oldp+26,(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch));
        bufp->chgIData(oldp+27,(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target),32);
        bufp->chgIData(oldp+28,(vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb),32);
        bufp->chgBit(oldp+29,(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect));
        bufp->chgBit(oldp+30,(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned));
        bufp->chgIData(oldp+31,(vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb),32);
        bufp->chgBit(oldp+32,(vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb));
        bufp->chgCData(oldp+33,(vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb),2);
        bufp->chgIData(oldp+34,(vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb),32);
        bufp->chgCData(oldp+35,((0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgIData(oldp+36,(vlSelf->tb_execute_stage__DOT__source_data_reg_out),32);
        bufp->chgIData(oldp+37,(vlSelf->tb_execute_stage__DOT__rd_data_reg_out),32);
        bufp->chgWData(oldp+38,(vlSelf->tb_execute_stage__DOT__instruction_reg_out),65);
        bufp->chgIData(oldp+41,(vlSelf->tb_execute_stage__DOT__program_counter_reg_out),32);
        bufp->chgIData(oldp+42,(vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out),32);
        bufp->chgQData(oldp+43,(vlSelf->tb_execute_stage__DOT__forwarding_out),38);
        bufp->chgCData(oldp+45,(vlSelf->tb_execute_stage__DOT__status_forwards_out),4);
        bufp->chgCData(oldp+46,(vlSelf->tb_execute_stage__DOT__status_backwards_out),2);
        bufp->chgIData(oldp+47,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_out),32);
    }
    bufp->chgBit(oldp+48,(vlSelf->tb_execute_stage__DOT__clk));
    bufp->chgIData(oldp+49,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                              ? (0xfffffffeU & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                + vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                              : vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target)),32);
    bufp->chgIData(oldp+50,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
                              ? vlSelf->tb_execute_stage__DOT__rs2_data_in
                              : ((((0x29U == (0x3fU 
                                              & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                    >> 0x1bU)))) 
                                   | (0x2aU == (0x3fU 
                                                & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                    << 5U) 
                                                   | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                      >> 0x1bU))))) 
                                  | (0x2bU == (0x3fU 
                                               & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                     >> 0x1bU)))))
                                  ? vlSelf->tb_execute_stage__DOT__rs1_data_in
                                  : ((((0x2cU == (0x3fU 
                                                  & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                      << 5U) 
                                                     | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                        >> 0x1bU)))) 
                                       | (0x2dU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU))))) 
                                      | (0x2eU == (0x3fU 
                                                   & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                       << 5U) 
                                                      | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                         >> 0x1bU)))))
                                      ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
                                      : 0U)))),32);
    bufp->chgCData(oldp+51,(((0U != (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in))
                              ? (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)
                              : ((0x31U == (0x3fU & 
                                            ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                              << 5U) 
                                             | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                >> 0x1bU))))
                                  ? 4U : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned)
                                           ? 2U : 0U)))),4);
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
    vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
}
