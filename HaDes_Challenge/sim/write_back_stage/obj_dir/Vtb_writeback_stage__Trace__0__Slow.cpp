// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_writeback_stage__Syms.h"


VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_init_sub__TOP__0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_writeback_stage ");
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+8,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+9,"external_interrupt_in", false,-1);
    tracep->declBit(c+10,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+38,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+11,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+40,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+41,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+12,"pass_count", false,-1, 31,0);
    tracep->declBus(c+13,"fail_count", false,-1, 31,0);
    tracep->declBus(c+53,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+54,"CSR_MIE", false,-1, 11,0);
    tracep->declBus(c+55,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+56,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+57,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+58,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+59,"CSR_MIP", false,-1, 11,0);
    tracep->declBus(c+60,"MSTATUS_MIE", false,-1, 31,0);
    tracep->declBus(c+61,"MSTATUS_MPIE", false,-1, 31,0);
    tracep->declBus(c+61,"MIE_MTIE", false,-1, 31,0);
    tracep->declBus(c+62,"MIE_MEIE", false,-1, 31,0);
    tracep->declBus(c+63,"MCAUSE_INSTR_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+64,"MCAUSE_INSTR_FAULT", false,-1, 31,0);
    tracep->declBus(c+65,"MCAUSE_ILLEGAL", false,-1, 31,0);
    tracep->declBus(c+66,"MCAUSE_BREAKPOINT", false,-1, 31,0);
    tracep->declBus(c+67,"MCAUSE_LOAD_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+68,"MCAUSE_LOAD_FAULT", false,-1, 31,0);
    tracep->declBus(c+69,"MCAUSE_STORE_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+70,"MCAUSE_STORE_FAULT", false,-1, 31,0);
    tracep->declBus(c+71,"MCAUSE_ECALL_MMODE", false,-1, 31,0);
    tracep->declBus(c+72,"MCAUSE_TIMER_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+73,"MCAUSE_EXT_INTERRUPT", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+52,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+2,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+3,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+4,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+7,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+8,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+9,"external_interrupt_in", false,-1);
    tracep->declBit(c+10,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+38,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+11,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+40,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+41,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBus(c+53,"CSR_MSTATUS", false,-1, 11,0);
    tracep->declBus(c+54,"CSR_MIE", false,-1, 11,0);
    tracep->declBus(c+55,"CSR_MTVEC", false,-1, 11,0);
    tracep->declBus(c+56,"CSR_MEPC", false,-1, 11,0);
    tracep->declBus(c+57,"CSR_MCAUSE", false,-1, 11,0);
    tracep->declBus(c+58,"CSR_MTVAL", false,-1, 11,0);
    tracep->declBus(c+59,"CSR_MIP", false,-1, 11,0);
    tracep->declBus(c+74,"MSTATUS_MIE_BIT", false,-1, 31,0);
    tracep->declBus(c+75,"MSTATUS_MPIE_BIT", false,-1, 31,0);
    tracep->declBus(c+75,"IRQ_MTIE_BIT", false,-1, 31,0);
    tracep->declBus(c+76,"IRQ_MEIE_BIT", false,-1, 31,0);
    tracep->declBus(c+63,"MCAUSE_INSTR_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+64,"MCAUSE_INSTR_FAULT", false,-1, 31,0);
    tracep->declBus(c+65,"MCAUSE_ILLEGAL", false,-1, 31,0);
    tracep->declBus(c+66,"MCAUSE_BREAKPOINT", false,-1, 31,0);
    tracep->declBus(c+67,"MCAUSE_LOAD_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+68,"MCAUSE_LOAD_FAULT", false,-1, 31,0);
    tracep->declBus(c+69,"MCAUSE_STORE_MISALIGNED", false,-1, 31,0);
    tracep->declBus(c+70,"MCAUSE_STORE_FAULT", false,-1, 31,0);
    tracep->declBus(c+71,"MCAUSE_ECALL_MMODE", false,-1, 31,0);
    tracep->declBus(c+72,"MCAUSE_TIMER_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+73,"MCAUSE_EXT_INTERRUPT", false,-1, 31,0);
    tracep->declBus(c+42,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+43,"csr_mie", false,-1, 31,0);
    tracep->declBus(c+44,"csr_mtvec", false,-1, 31,0);
    tracep->declBus(c+45,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+46,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+47,"csr_mtval", false,-1, 31,0);
    tracep->declBus(c+48,"csr_mip", false,-1, 31,0);
    tracep->declBus(c+14,"csr_addr", false,-1, 11,0);
    tracep->declBit(c+15,"is_valid", false,-1);
    tracep->declBit(c+19,"is_csr", false,-1);
    tracep->declBit(c+16,"is_mret", false,-1);
    tracep->declBit(c+17,"is_ecall", false,-1);
    tracep->declBit(c+18,"is_ebreak", false,-1);
    tracep->declBus(c+20,"csr_read_data", false,-1, 31,0);
    tracep->declBus(c+21,"csr_write_data", false,-1, 31,0);
    tracep->declBit(c+22,"csr_write_enable", false,-1);
    tracep->declBit(c+23,"writes_rd_normal", false,-1);
    tracep->declBit(c+24,"pipeline_exception", false,-1);
    tracep->declBus(c+25,"exception_cause", false,-1, 31,0);
    tracep->declBus(c+26,"exception_tval", false,-1, 31,0);
    tracep->declBit(c+49,"global_interrupt_enable", false,-1);
    tracep->declBit(c+50,"timer_interrupt_enabled", false,-1);
    tracep->declBit(c+51,"external_interrupt_enabled", false,-1);
    tracep->declBit(c+27,"timer_interrupt_taken", false,-1);
    tracep->declBit(c+28,"external_interrupt_taken", false,-1);
    tracep->declBit(c+29,"interrupt_taken", false,-1);
    tracep->declBus(c+30,"interrupt_cause", false,-1, 31,0);
    tracep->declBit(c+31,"trap_taken", false,-1);
    tracep->declBus(c+32,"trap_cause", false,-1, 31,0);
    tracep->declBus(c+33,"trap_tval", false,-1, 31,0);
    tracep->declBit(c+34,"redirect_taken", false,-1);
    tracep->declBus(c+35,"redirect_address", false,-1, 31,0);
    tracep->declBit(c+36,"wb_writes_rd_comb", false,-1);
    tracep->declBus(c+37,"wb_rd_data_comb", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+77,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_init_top(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_writeback_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_writeback_stage___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_writeback_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_writeback_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_register(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_writeback_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_writeback_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_writeback_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_full_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_writeback_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_writeback_stage___024root*>(voidSelf);
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_writeback_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_full_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_writeback_stage__DOT__rst));
    bufp->fullIData(oldp+2,(vlSelf->tb_writeback_stage__DOT__source_data_in),32);
    bufp->fullIData(oldp+3,(vlSelf->tb_writeback_stage__DOT__rd_data_in),32);
    bufp->fullWData(oldp+4,(vlSelf->tb_writeback_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+7,(vlSelf->tb_writeback_stage__DOT__program_counter_in),32);
    bufp->fullIData(oldp+8,(vlSelf->tb_writeback_stage__DOT__next_program_counter_in),32);
    bufp->fullBit(oldp+9,(vlSelf->tb_writeback_stage__DOT__external_interrupt_in));
    bufp->fullBit(oldp+10,(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in));
    bufp->fullCData(oldp+11,(vlSelf->tb_writeback_stage__DOT__status_forwards_in),4);
    bufp->fullIData(oldp+12,(vlSelf->tb_writeback_stage__DOT__pass_count),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_writeback_stage__DOT__fail_count),32);
    bufp->fullSData(oldp+14,((0xfffU & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])),12);
    bufp->fullBit(oldp+15,((0U == (IData)(vlSelf->tb_writeback_stage__DOT__status_forwards_in))));
    bufp->fullBit(oldp+16,((0x2fU == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                << 5U) 
                                               | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+17,((0x27U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                << 5U) 
                                               | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+18,((0x28U == (0x3fU & ((vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
                                                << 5U) 
                                               | (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+19,(vlSelf->tb_writeback_stage__DOT__dut__DOT__is_csr));
    bufp->fullIData(oldp+20,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_read_data),32);
    bufp->fullIData(oldp+21,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_data),32);
    bufp->fullBit(oldp+22,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_write_enable));
    bufp->fullBit(oldp+23,(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd_normal));
    bufp->fullBit(oldp+24,(vlSelf->tb_writeback_stage__DOT__dut__DOT__pipeline_exception));
    bufp->fullIData(oldp+25,(vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_cause),32);
    bufp->fullIData(oldp+26,(vlSelf->tb_writeback_stage__DOT__dut__DOT__exception_tval),32);
    bufp->fullBit(oldp+27,(vlSelf->tb_writeback_stage__DOT__dut__DOT__timer_interrupt_taken));
    bufp->fullBit(oldp+28,(vlSelf->tb_writeback_stage__DOT__dut__DOT__external_interrupt_taken));
    bufp->fullBit(oldp+29,(vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_taken));
    bufp->fullIData(oldp+30,(vlSelf->tb_writeback_stage__DOT__dut__DOT__interrupt_cause),32);
    bufp->fullBit(oldp+31,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_taken));
    bufp->fullIData(oldp+32,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_cause),32);
    bufp->fullIData(oldp+33,(vlSelf->tb_writeback_stage__DOT__dut__DOT__trap_tval),32);
    bufp->fullBit(oldp+34,(vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_taken));
    bufp->fullIData(oldp+35,(vlSelf->tb_writeback_stage__DOT__dut__DOT__redirect_address),32);
    bufp->fullBit(oldp+36,(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_writes_rd_comb));
    bufp->fullIData(oldp+37,(vlSelf->tb_writeback_stage__DOT__dut__DOT__wb_rd_data_comb),32);
    bufp->fullQData(oldp+38,(vlSelf->tb_writeback_stage__DOT__forwarding_out),38);
    bufp->fullCData(oldp+40,(vlSelf->tb_writeback_stage__DOT__status_backwards_out),2);
    bufp->fullIData(oldp+41,(vlSelf->tb_writeback_stage__DOT__jump_address_backwards_out),32);
    bufp->fullIData(oldp+42,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+43,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie),32);
    bufp->fullIData(oldp+44,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+45,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mepc),32);
    bufp->fullIData(oldp+46,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mcause),32);
    bufp->fullIData(oldp+47,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mtval),32);
    bufp->fullIData(oldp+48,(vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mip),32);
    bufp->fullBit(oldp+49,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mstatus 
                                  >> 3U))));
    bufp->fullBit(oldp+50,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                                  >> 7U))));
    bufp->fullBit(oldp+51,((1U & (vlSelf->tb_writeback_stage__DOT__dut__DOT__csr_mie 
                                  >> 0xbU))));
    bufp->fullBit(oldp+52,(vlSelf->tb_writeback_stage__DOT__clk));
    bufp->fullSData(oldp+53,(0x300U),12);
    bufp->fullSData(oldp+54,(0x304U),12);
    bufp->fullSData(oldp+55,(0x305U),12);
    bufp->fullSData(oldp+56,(0x341U),12);
    bufp->fullSData(oldp+57,(0x342U),12);
    bufp->fullSData(oldp+58,(0x343U),12);
    bufp->fullSData(oldp+59,(0x344U),12);
    bufp->fullIData(oldp+60,(8U),32);
    bufp->fullIData(oldp+61,(0x80U),32);
    bufp->fullIData(oldp+62,(0x800U),32);
    bufp->fullIData(oldp+63,(0U),32);
    bufp->fullIData(oldp+64,(1U),32);
    bufp->fullIData(oldp+65,(2U),32);
    bufp->fullIData(oldp+66,(3U),32);
    bufp->fullIData(oldp+67,(4U),32);
    bufp->fullIData(oldp+68,(5U),32);
    bufp->fullIData(oldp+69,(6U),32);
    bufp->fullIData(oldp+70,(7U),32);
    bufp->fullIData(oldp+71,(0xbU),32);
    bufp->fullIData(oldp+72,(0x80000007U),32);
    bufp->fullIData(oldp+73,(0x8000000bU),32);
    bufp->fullIData(oldp+74,(3U),32);
    bufp->fullIData(oldp+75,(7U),32);
    bufp->fullIData(oldp+76,(0xbU),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+77,(__Vtemp_h3441a5c4__0),65);
}
