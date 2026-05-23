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
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+1,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+27,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+28,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+29,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+30,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+7,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+8,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+12,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+32,"jump_address_backwards_out", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"rst", false,-1);
    tracep->declBus(c+1,"rs1_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rs2_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+27,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+28,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+29,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+30,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+7,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+8,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+12,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+32,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBit(c+14,"alu_use_imm", false,-1);
    tracep->declBit(c+15,"is_branch", false,-1);
    tracep->declBit(c+16,"is_jump", false,-1);
    tracep->declBit(c+17,"is_store", false,-1);
    tracep->declBit(c+18,"is_load", false,-1);
    tracep->declBit(c+19,"is_jalr", false,-1);
    tracep->declBus(c+1,"op1", false,-1, 31,0);
    tracep->declBus(c+20,"op2", false,-1, 31,0);
    tracep->declBus(c+21,"alu_result", false,-1, 31,0);
    tracep->declBit(c+22,"alu_zero", false,-1);
    tracep->declBit(c+23,"take_branch", false,-1);
    tracep->declBus(c+11,"jump_target", false,-1, 31,0);
    tracep->declBus(c+29,"next_pc", false,-1, 31,0);
    tracep->declBus(c+28,"rd_value", false,-1, 31,0);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+33,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1,"op1", false,-1, 31,0);
    tracep->declBus(c+20,"op2", false,-1, 31,0);
    tracep->declBus(c+13,"alu_op", false,-1, 3,0);
    tracep->declBus(c+21,"result", false,-1, 31,0);
    tracep->declBit(c+22,"zero", false,-1);
    tracep->declBus(c+24,"shamt", false,-1, 4,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_execute_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_execute_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_execute_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_execute_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+34,"NOP", false,-1, 64,0);
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
    bufp->fullIData(oldp+1,(vlSelf->tb_execute_stage__DOT__rs1_data_in),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_execute_stage__DOT__rs2_data_in),32);
    bufp->fullWData(oldp+3,(vlSelf->tb_execute_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+6,(vlSelf->tb_execute_stage__DOT__program_counter_in),32);
    bufp->fullCData(oldp+7,(vlSelf->tb_execute_stage__DOT__status_forwards_in),4);
    bufp->fullCData(oldp+8,(((0x31U == (0x3fU & ((vlSelf->tb_execute_stage__DOT__instruction_in[2U] 
                                                  << 5U) 
                                                 | (vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                                    >> 0x1bU))))
                              ? 4U : 0U)),4);
    bufp->fullCData(oldp+9,(vlSelf->tb_execute_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+10,(vlSelf->tb_execute_stage__DOT__jump_address_backwards_in),32);
    bufp->fullIData(oldp+11,(vlSelf->tb_execute_stage__DOT__instruction_in[0U]),32);
    bufp->fullCData(oldp+12,(((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                                & (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch)) 
                               | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump))
                               ? 2U : 0U)),2);
    bufp->fullCData(oldp+13,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+14,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_use_imm));
    bufp->fullBit(oldp+15,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch));
    bufp->fullBit(oldp+16,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump));
    bufp->fullBit(oldp+17,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store));
    bufp->fullBit(oldp+18,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_load));
    bufp->fullBit(oldp+19,(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jalr));
    bufp->fullIData(oldp+20,(vlSelf->tb_execute_stage__DOT__dut__DOT__op2),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result),32);
    bufp->fullBit(oldp+22,((0U == vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result)));
    bufp->fullBit(oldp+23,(vlSelf->tb_execute_stage__DOT__dut__DOT__take_branch));
    bufp->fullCData(oldp+24,((0x1fU & vlSelf->tb_execute_stage__DOT__dut__DOT__op2)),5);
    bufp->fullBit(oldp+25,(vlSelf->tb_execute_stage__DOT__clk));
    bufp->fullBit(oldp+26,(vlSelf->tb_execute_stage__DOT__rst));
    bufp->fullIData(oldp+27,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store)
                               ? vlSelf->tb_execute_stage__DOT__rs2_data_in
                               : 0U)),32);
    bufp->fullIData(oldp+28,((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
                               | (IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_store))
                               ? 0U : ((1U & vlSelf->tb_execute_stage__DOT__instruction_in[2U])
                                        ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                        : ((vlSelf->tb_execute_stage__DOT__instruction_in[1U] 
                                            >> 0x1fU)
                                            ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                            : ((0x40000000U 
                                                & vlSelf->tb_execute_stage__DOT__instruction_in[1U])
                                                ? vlSelf->tb_execute_stage__DOT__dut__DOT__alu_result
                                                : (
                                                   (0x20000000U 
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
    bufp->fullIData(oldp+29,(((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_jump)
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
    bufp->fullQData(oldp+30,((((QData)((IData)((1U 
                                                & (~ 
                                                   ((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
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
    bufp->fullIData(oldp+32,(((((IData)(vlSelf->tb_execute_stage__DOT__dut__DOT__is_branch) 
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
    bufp->fullIData(oldp+33,(0x20U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+34,(__Vtemp_h3441a5c4__0),65);
}
