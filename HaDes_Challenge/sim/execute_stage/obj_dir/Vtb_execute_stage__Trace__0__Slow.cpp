// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_execute_stage__Syms.h"


VL_ATTR_COLD void Vtb_execute_stage___024root__trace_init_sub__TOP__0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_execute_stage ");
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+37,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+38,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+39,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+42,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+43,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+44,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+8,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+46,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+47,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+48,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+11,"pass_count", false,-1, 31,0);
    tracep->declBus(c+12,"fail_count", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+49,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+37,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+38,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+39,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+42,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+43,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+44,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+8,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+46,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+47,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+48,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+13,"downstream_stall", false,-1);
    tracep->declBit(c+14,"downstream_jump", false,-1);
    tracep->declBus(c+15,"alu_op", false,-1, 3,0);
    tracep->declBit(c+16,"alu_use_imm", false,-1);
    tracep->declBit(c+17,"is_branch", false,-1);
    tracep->declBit(c+18,"is_jump", false,-1);
    tracep->declBit(c+19,"is_jalr", false,-1);
    tracep->declBit(c+20,"is_load", false,-1);
    tracep->declBit(c+21,"is_store", false,-1);
    tracep->declBit(c+22,"is_fence_i", false,-1);
    tracep->declBit(c+23,"is_system_or_csr", false,-1);
    tracep->declBus(c+2,"alu_op1", false,-1, 31,0);
    tracep->declBus(c+24,"alu_op2", false,-1, 31,0);
    tracep->declBus(c+25,"alu_result", false,-1, 31,0);
    tracep->declBit(c+26,"alu_zero", false,-1);
    tracep->declBit(c+27,"take_branch", false,-1);
    tracep->declBus(c+28,"branch_target", false,-1, 31,0);
    tracep->declBus(c+50,"jump_target", false,-1, 31,0);
    tracep->declBus(c+29,"next_pc_comb", false,-1, 31,0);
    tracep->declBit(c+30,"branch_or_jump_redirect", false,-1);
    tracep->declBit(c+31,"fetch_misaligned", false,-1);
    tracep->declBus(c+32,"rd_value_comb", false,-1, 31,0);
    tracep->declBus(c+51,"source_data_comb", false,-1, 31,0);
    tracep->declBit(c+33,"forward_valid_comb", false,-1);
    tracep->declBus(c+52,"status_forward_comb", false,-1, 3,0);
    tracep->declBus(c+34,"status_backwards_comb", false,-1, 1,0);
    tracep->declBus(c+35,"jump_address_comb", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+53,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+2,"op1", false,-1, 31,0);
    tracep->declBus(c+24,"op2", false,-1, 31,0);
    tracep->declBus(c+15,"alu_op", false,-1, 3,0);
    tracep->declBus(c+25,"result", false,-1, 31,0);
    tracep->declBit(c+26,"zero", false,-1);
    tracep->declBus(c+36,"shamt", false,-1, 4,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+54,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_init_top(Vtb_execute_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_execute_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_execute_stage___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_execute_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_execute_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_register(Vtb_execute_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_execute_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_execute_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_execute_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_full_sub_0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_execute_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_execute_stage___024root*>(voidSelf);
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_execute_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_full_sub_0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_execute_stage__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->tb_execute_stage__DOT__rs1_data_in),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_execute_stage__DOT__rs2_data_in),32);
    bufp->fullWData(oldp+4,(vlSelf->tb_execute_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+7,(vlSelf->tb_execute_stage__DOT__program_counter_in),32);
    bufp->fullCData(oldp+8,(vlSelf->tb_execute_stage__DOT__status_forwards_in),4);
    bufp->fullCData(oldp+9,(vlSelf->tb_execute_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+10,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_in),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_execute_stage__DOT__pass_count),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_execute_stage__DOT__fail_count),32);
    bufp->fullBit(oldp+13,((1U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+14,((2U == (IData)(vlSelf->tb_execute_stage__DOT__status_backwards_in))));
    bufp->fullCData(oldp+15,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+16,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm));
    bufp->fullBit(oldp+17,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch));
    bufp->fullBit(oldp+18,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump));
    bufp->fullBit(oldp+19,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr));
    bufp->fullBit(oldp+20,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_load));
    bufp->fullBit(oldp+21,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store));
    bufp->fullBit(oldp+22,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_fence_i));
    bufp->fullBit(oldp+23,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_system_or_csr));
    bufp->fullIData(oldp+24,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2),32);
    bufp->fullIData(oldp+25,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result),32);
    bufp->fullBit(oldp+26,((0U == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)));
    bufp->fullBit(oldp+27,(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch));
    bufp->fullIData(oldp+28,(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target),32);
    bufp->fullIData(oldp+29,(vlSelf->tb_execute_stage__DOT__dut__DOT__next_pc_comb),32);
    bufp->fullBit(oldp+30,(vlSelf->tb_execute_stage__DOT__dut__DOT__branch_or_jump_redirect));
    bufp->fullBit(oldp+31,(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned));
    bufp->fullIData(oldp+32,(vlSelf->tb_execute_stage__DOT__dut__DOT__rd_value_comb),32);
    bufp->fullBit(oldp+33,(vlSelf->tb_execute_stage__DOT__dut__DOT__forward_valid_comb));
    bufp->fullCData(oldp+34,(vlSelf->tb_execute_stage__DOT__dut__DOT__status_backwards_comb),2);
    bufp->fullIData(oldp+35,(vlSelf->tb_execute_stage__DOT__dut__DOT__jump_address_comb),32);
    bufp->fullCData(oldp+36,((0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op2)),5);
    bufp->fullIData(oldp+37,(vlSelf->tb_execute_stage__DOT__source_data_reg_out),32);
    bufp->fullIData(oldp+38,(vlSelf->tb_execute_stage__DOT__rd_data_reg_out),32);
    bufp->fullWData(oldp+39,(vlSelf->tb_execute_stage__DOT__instruction_reg_out),65);
    bufp->fullIData(oldp+42,(vlSelf->tb_execute_stage__DOT__program_counter_reg_out),32);
    bufp->fullIData(oldp+43,(vlSelf->tb_execute_stage__DOT__next_program_counter_reg_out),32);
    bufp->fullQData(oldp+44,(vlSelf->tb_execute_stage__DOT__forwarding_out),38);
    bufp->fullCData(oldp+46,(vlSelf->tb_execute_stage__DOT__status_forwards_out),4);
    bufp->fullCData(oldp+47,(vlSelf->tb_execute_stage__DOT__status_backwards_out),2);
    bufp->fullIData(oldp+48,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_out),32);
    bufp->fullBit(oldp+49,(vlSelf->tb_execute_stage__DOT__clk));
    bufp->fullIData(oldp+50,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr)
                               ? (0xfffffffeU & (vlSelf->tb_execute_stage__DOT__rs1_data_in 
                                                 + 
                                                 vlSelf->tb_execute_stage__DOT__instruction_in[0U]))
                               : vlSelf->tb_execute_stage__DOT__dut__DOT__branch_target)),32);
    bufp->fullIData(oldp+51,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
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
                                       | (0x2eU == 
                                          (0x3fU & 
                                           ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                             << 5U) 
                                            | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU)))))
                                       ? vlSelf->tb_execute_stage__DOT__instruction_in[0U]
                                       : 0U)))),32);
    bufp->fullCData(oldp+52,(((0U != (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in))
                               ? (IData)(vlSelf->tb_execute_stage__DOT__status_forwards_in)
                               : ((0x31U == (0x3fU 
                                             & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU))))
                                   ? 4U : ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__fetch_misaligned)
                                            ? 2U : 0U)))),4);
    bufp->fullIData(oldp+53,(0x20U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+54,(__Vtemp_h3441a5c4__0),65);
}
