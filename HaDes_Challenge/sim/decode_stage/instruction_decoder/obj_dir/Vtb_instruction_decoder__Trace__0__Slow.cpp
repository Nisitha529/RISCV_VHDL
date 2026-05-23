// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_instruction_decoder__Syms.h"


VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_init_sub__TOP__0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_instruction_decoder ");
    tracep->declBus(c+1,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+17,"instruction_out", false,-1, 64,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+1,"instruction_in", false,-1, 31,0);
    tracep->declArray(c+17,"instruction_out", false,-1, 64,0);
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+20,"alu_op", false,-1, 3,0);
    tracep->declBit(c+8,"alu_use_imm", false,-1);
    tracep->declBit(c+21,"write_rd", false,-1);
    tracep->declBit(c+9,"write_mem", false,-1);
    tracep->declBit(c+10,"mem_access", false,-1);
    tracep->declBus(c+22,"mem_width", false,-1, 5,0);
    tracep->declBit(c+23,"jump", false,-1);
    tracep->declBit(c+24,"branch", false,-1);
    tracep->declBus(c+25,"rd_data_src", false,-1, 2,0);
    tracep->declBus(c+26,"imm_type", false,-1, 2,0);
    tracep->declBus(c+27,"imm_gen", false,-1, 31,0);
    tracep->declBus(c+11,"csr_addr", false,-1, 11,0);
    tracep->pushNamePrefix("ctrl_inst ");
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->declBus(c+20,"alu_op", false,-1, 3,0);
    tracep->declBit(c+8,"alu_use_imm", false,-1);
    tracep->declBit(c+21,"write_rd", false,-1);
    tracep->declBit(c+9,"write_mem", false,-1);
    tracep->declBit(c+10,"mem_access", false,-1);
    tracep->declBus(c+22,"mem_width", false,-1, 5,0);
    tracep->declBit(c+23,"jump", false,-1);
    tracep->declBit(c+24,"is_branch", false,-1);
    tracep->declBus(c+25,"rd_data_src", false,-1, 2,0);
    tracep->declBus(c+26,"imm_type", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+2,"opcode", false,-1, 6,0);
    tracep->declBus(c+3,"rd", false,-1, 4,0);
    tracep->declBus(c+6,"funct3", false,-1, 2,0);
    tracep->declBus(c+4,"rs1", false,-1, 4,0);
    tracep->declBus(c+5,"rs2", false,-1, 4,0);
    tracep->declBus(c+7,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_inst ");
    tracep->declBus(c+1,"instr", false,-1, 31,0);
    tracep->declBus(c+26,"imm_type", false,-1, 2,0);
    tracep->declBus(c+27,"imm_out", false,-1, 31,0);
    tracep->declBus(c+12,"imm_i", false,-1, 31,0);
    tracep->declBus(c+13,"imm_s", false,-1, 31,0);
    tracep->declBus(c+14,"imm_b", false,-1, 31,0);
    tracep->declBus(c+15,"imm_u", false,-1, 31,0);
    tracep->declBus(c+16,"imm_j", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_init_sub__TOP__instruction__0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+28,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_init_top(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_init_top\n"); );
    // Body
    Vtb_instruction_decoder___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_instruction_decoder___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_instruction_decoder___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_instruction_decoder___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_register(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_instruction_decoder___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_instruction_decoder___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_instruction_decoder___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_full_sub_0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_full_top_0\n"); );
    // Init
    Vtb_instruction_decoder___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_instruction_decoder___024root*>(voidSelf);
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_instruction_decoder___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_instruction_decoder___024root__trace_full_sub_0(Vtb_instruction_decoder___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_instruction_decoder__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_instruction_decoder___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_instruction_decoder__DOT__instruction_in),32);
    bufp->fullCData(oldp+2,((0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)),7);
    bufp->fullCData(oldp+3,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                      >> 7U))),5);
    bufp->fullCData(oldp+4,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                      >> 0xfU))),5);
    bufp->fullCData(oldp+5,((0x1fU & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                      >> 0x14U))),5);
    bufp->fullCData(oldp+6,((7U & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                   >> 0xcU))),3);
    bufp->fullCData(oldp+7,((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                             >> 0x19U)),7);
    bufp->fullBit(oldp+8,(((((0x13U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                             | (3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                            | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))) 
                           | (0x67U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))));
    bufp->fullBit(oldp+9,((0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in))));
    bufp->fullBit(oldp+10,(((3U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)) 
                            | (0x23U == (0x7fU & vlSelf->tb_instruction_decoder__DOT__instruction_in)))));
    bufp->fullSData(oldp+11,((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+12,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+13,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+14,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+15,((0xfffff000U & vlSelf->tb_instruction_decoder__DOT__instruction_in)),32);
    bufp->fullIData(oldp+16,((((- (IData)((vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0x15U) | ((0x100000U 
                                             & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                >> 0xbU)) 
                                            | ((0xff000U 
                                                & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                               | ((0x800U 
                                                   & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                      >> 9U)) 
                                                  | (0x7feU 
                                                     & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                        >> 0x14U))))))),32);
    bufp->fullWData(oldp+17,(vlSelf->tb_instruction_decoder__DOT__instruction_out),65);
    bufp->fullCData(oldp+20,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__alu_op),4);
    bufp->fullBit(oldp+21,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__write_rd));
    bufp->fullCData(oldp+22,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__mem_width),6);
    bufp->fullBit(oldp+23,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__jump));
    bufp->fullBit(oldp+24,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__branch));
    bufp->fullCData(oldp+25,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__rd_data_src),3);
    bufp->fullCData(oldp+26,(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type),3);
    bufp->fullIData(oldp+27,(((4U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                               ? ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                   ? 0U : ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                            ? 0U : 
                                           (((- (IData)(
                                                        (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 0x1fU))) 
                                             << 0x15U) 
                                            | ((0x100000U 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_instruction_decoder__DOT__instruction_in) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                           >> 0x14U))))))))
                               : ((2U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                   ? ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                       ? (0xfffff000U 
                                          & vlSelf->tb_instruction_decoder__DOT__instruction_in)
                                       : (((- (IData)(
                                                      (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                         >> 7U)))))))
                                   : ((1U & (IData)(vlSelf->tb_instruction_decoder__DOT__dut__DOT__imm_type))
                                       ? (((- (IData)(
                                                      (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                   >> 7U))))
                                       : (((- (IData)(
                                                      (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->tb_instruction_decoder__DOT__instruction_in 
                                             >> 0x14U)))))),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+28,(__Vtemp_h3441a5c4__0),65);
}
