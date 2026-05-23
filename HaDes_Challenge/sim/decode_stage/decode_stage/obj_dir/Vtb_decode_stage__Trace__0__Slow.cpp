// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_decode_stage__Syms.h"


VL_ATTR_COLD void Vtb_decode_stage___024root__trace_init_sub__TOP__0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_decode_stage ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"instruction_in", false,-1, 31,0);
    tracep->declBus(c+3,"program_counter_in", false,-1, 31,0);
    tracep->declQuad(c+4,"exe_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+6,"mem_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+8,"wb_forwarding_in", false,-1, 37,0);
    tracep->declBus(c+10,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+11,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+12,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+40,"rs1_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+42,"program_counter_reg_out", false,-1, 31,0);
    tracep->declArray(c+43,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+46,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+30,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+81,"jump_address_backwards_out", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"instruction_in", false,-1, 31,0);
    tracep->declBus(c+3,"program_counter_in", false,-1, 31,0);
    tracep->declQuad(c+4,"exe_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+6,"mem_forwarding_in", false,-1, 37,0);
    tracep->declQuad(c+8,"wb_forwarding_in", false,-1, 37,0);
    tracep->declBus(c+40,"rs1_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+41,"rs2_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+42,"program_counter_reg_out", false,-1, 31,0);
    tracep->declArray(c+43,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+10,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+46,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+11,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+30,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+12,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+81,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+13,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+15,"rs1", false,-1, 4,0);
    tracep->declBus(c+16,"rs2", false,-1, 4,0);
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBus(c+18,"funct7", false,-1, 6,0);
    tracep->declBus(c+31,"imm_type", false,-1, 2,0);
    tracep->declBus(c+32,"imm_out", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_raw", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_raw", false,-1, 31,0);
    tracep->declBus(c+33,"rs1_fwd", false,-1, 31,0);
    tracep->declBus(c+34,"rs2_fwd", false,-1, 31,0);
    tracep->declArray(c+35,"instr_packed", false,-1, 64,0);
    tracep->declBit(c+19,"downstream_stall", false,-1);
    tracep->declBit(c+20,"downstream_jump", false,-1);
    tracep->declBit(c+19,"stall", false,-1);
    tracep->declBit(c+20,"flush", false,-1);
    tracep->declBit(c+38,"rs1_used", false,-1);
    tracep->declBit(c+39,"rs2_used", false,-1);
    tracep->declBus(c+21,"csr_addr", false,-1, 11,0);
    tracep->pushNamePrefix("decoder_inst ");
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+13,"opcode", false,-1, 6,0);
    tracep->declBus(c+14,"rd", false,-1, 4,0);
    tracep->declBus(c+17,"funct3", false,-1, 2,0);
    tracep->declBus(c+15,"rs1", false,-1, 4,0);
    tracep->declBus(c+16,"rs2", false,-1, 4,0);
    tracep->declBus(c+18,"funct7", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_inst ");
    tracep->declBus(c+2,"instr", false,-1, 31,0);
    tracep->declBus(c+31,"imm_type", false,-1, 2,0);
    tracep->declBus(c+32,"imm_out", false,-1, 31,0);
    tracep->declBus(c+22,"imm_i", false,-1, 31,0);
    tracep->declBus(c+23,"imm_s", false,-1, 31,0);
    tracep->declBus(c+24,"imm_b", false,-1, 31,0);
    tracep->declBus(c+25,"imm_u", false,-1, 31,0);
    tracep->declBus(c+26,"imm_j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBus(c+84,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+85,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBit(c+80,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+15,"rs1_addr", false,-1, 4,0);
    tracep->declBus(c+16,"rs2_addr", false,-1, 4,0);
    tracep->declBit(c+27,"write_enable", false,-1);
    tracep->declBus(c+28,"rd_addr", false,-1, 4,0);
    tracep->declBus(c+29,"rd_data", false,-1, 31,0);
    tracep->declBus(c+82,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+83,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+47+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->declBus(c+79,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+86,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_init_top(Vtb_decode_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_decode_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_decode_stage___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_decode_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_decode_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_register(Vtb_decode_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_decode_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_decode_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_decode_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_full_sub_0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_decode_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_decode_stage___024root*>(voidSelf);
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_decode_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_decode_stage___024root__trace_full_sub_0(Vtb_decode_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_decode_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_decode_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_decode_stage__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->tb_decode_stage__DOT__instruction_in),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_decode_stage__DOT__program_counter_in),32);
    bufp->fullQData(oldp+4,(vlSelf->tb_decode_stage__DOT__exe_forwarding_in),38);
    bufp->fullQData(oldp+6,(vlSelf->tb_decode_stage__DOT__mem_forwarding_in),38);
    bufp->fullQData(oldp+8,(vlSelf->tb_decode_stage__DOT__wb_forwarding_in),38);
    bufp->fullCData(oldp+10,(vlSelf->tb_decode_stage__DOT__status_forwards_in),4);
    bufp->fullCData(oldp+11,(vlSelf->tb_decode_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+12,(vlSelf->tb_decode_stage__DOT__jump_address_backwards_in),32);
    bufp->fullCData(oldp+13,((0x7fU & vlSelf->tb_decode_stage__DOT__instruction_in)),7);
    bufp->fullCData(oldp+14,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 7U))),5);
    bufp->fullCData(oldp+15,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+16,((0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+17,((7U & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+18,((vlSelf->tb_decode_stage__DOT__instruction_in 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+19,((1U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+20,((2U == (IData)(vlSelf->tb_decode_stage__DOT__status_backwards_in))));
    bufp->fullSData(oldp+21,((vlSelf->tb_decode_stage__DOT__instruction_in 
                              >> 0x14U)),12);
    bufp->fullIData(oldp+22,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xcU) | (vlSelf->tb_decode_stage__DOT__instruction_in 
                                           >> 0x14U))),32);
    bufp->fullIData(oldp+23,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                 >> 7U))))),32);
    bufp->fullIData(oldp+24,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
                                           >> 0x1fU))) 
                               << 0xdU) | ((0x1000U 
                                            & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x13U)) 
                                           | ((0x800U 
                                               & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                  << 4U)) 
                                              | ((0x7e0U 
                                                  & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                                       >> 7U))))))),32);
    bufp->fullIData(oldp+25,((0xfffff000U & vlSelf->tb_decode_stage__DOT__instruction_in)),32);
    bufp->fullIData(oldp+26,((((- (IData)((vlSelf->tb_decode_stage__DOT__instruction_in 
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
                                                        >> 0x14U))))))),32);
    bufp->fullBit(oldp+27,((1U & (IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                          >> 0x25U)))));
    bufp->fullCData(oldp+28,((0x1fU & (IData)(vlSelf->tb_decode_stage__DOT__wb_forwarding_in))),5);
    bufp->fullIData(oldp+29,((IData)((vlSelf->tb_decode_stage__DOT__wb_forwarding_in 
                                      >> 5U))),32);
    bufp->fullCData(oldp+30,((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                               | (3U == (0x3fU & ((
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                     >> 0x1bU)))))
                               ? 2U : 0U)),2);
    bufp->fullCData(oldp+31,(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_type),3);
    bufp->fullIData(oldp+32,(vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_fwd),32);
    bufp->fullIData(oldp+34,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_fwd),32);
    bufp->fullWData(oldp+35,(vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed),65);
    bufp->fullBit(oldp+38,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs1_used));
    bufp->fullBit(oldp+39,(vlSelf->tb_decode_stage__DOT__dut__DOT__rs2_used));
    bufp->fullIData(oldp+40,(vlSelf->tb_decode_stage__DOT__rs1_data_reg_out),32);
    bufp->fullIData(oldp+41,(vlSelf->tb_decode_stage__DOT__rs2_data_reg_out),32);
    bufp->fullIData(oldp+42,(vlSelf->tb_decode_stage__DOT__program_counter_reg_out),32);
    bufp->fullWData(oldp+43,(vlSelf->tb_decode_stage__DOT__instruction_reg_out),65);
    bufp->fullCData(oldp+46,(vlSelf->tb_decode_stage__DOT__status_forwards_out),4);
    bufp->fullIData(oldp+47,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[0]),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[1]),32);
    bufp->fullIData(oldp+49,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[2]),32);
    bufp->fullIData(oldp+50,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[3]),32);
    bufp->fullIData(oldp+51,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[4]),32);
    bufp->fullIData(oldp+52,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[5]),32);
    bufp->fullIData(oldp+53,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[6]),32);
    bufp->fullIData(oldp+54,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[7]),32);
    bufp->fullIData(oldp+55,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[8]),32);
    bufp->fullIData(oldp+56,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[9]),32);
    bufp->fullIData(oldp+57,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[10]),32);
    bufp->fullIData(oldp+58,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[11]),32);
    bufp->fullIData(oldp+59,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[12]),32);
    bufp->fullIData(oldp+60,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[13]),32);
    bufp->fullIData(oldp+61,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[14]),32);
    bufp->fullIData(oldp+62,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[15]),32);
    bufp->fullIData(oldp+63,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[16]),32);
    bufp->fullIData(oldp+64,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[17]),32);
    bufp->fullIData(oldp+65,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[18]),32);
    bufp->fullIData(oldp+66,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[19]),32);
    bufp->fullIData(oldp+67,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[20]),32);
    bufp->fullIData(oldp+68,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[21]),32);
    bufp->fullIData(oldp+69,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[22]),32);
    bufp->fullIData(oldp+70,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[23]),32);
    bufp->fullIData(oldp+71,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[24]),32);
    bufp->fullIData(oldp+72,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[25]),32);
    bufp->fullIData(oldp+73,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[26]),32);
    bufp->fullIData(oldp+74,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[27]),32);
    bufp->fullIData(oldp+75,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[28]),32);
    bufp->fullIData(oldp+76,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[29]),32);
    bufp->fullIData(oldp+77,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[30]),32);
    bufp->fullIData(oldp+78,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs[31]),32);
    bufp->fullIData(oldp+79,(vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__i),32);
    bufp->fullBit(oldp+80,(vlSelf->tb_decode_stage__DOT__clk));
    bufp->fullIData(oldp+81,((((2U == (0x3fU & ((vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                 << 5U) 
                                                | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                   >> 0x1bU)))) 
                               | (3U == (0x3fU & ((
                                                   vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[2U] 
                                                   << 5U) 
                                                  | (vlSelf->tb_decode_stage__DOT__dut__DOT__instr_packed[1U] 
                                                     >> 0x1bU)))))
                               ? (vlSelf->tb_decode_stage__DOT__dut__DOT__imm_out 
                                  + vlSelf->tb_decode_stage__DOT__program_counter_in)
                               : 0U)),32);
    bufp->fullIData(oldp+82,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0xfU)))
                               ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0xfU))])),32);
    bufp->fullIData(oldp+83,(((0U == (0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                               >> 0x14U)))
                               ? 0U : vlSelf->tb_decode_stage__DOT__dut__DOT__regfile_inst__DOT__regs
                              [(0x1fU & (vlSelf->tb_decode_stage__DOT__instruction_in 
                                         >> 0x14U))])),32);
    bufp->fullIData(oldp+84,(0x20U),32);
    bufp->fullIData(oldp+85,(5U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+86,(__Vtemp_h3441a5c4__0),65);
}
