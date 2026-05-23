// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_memory_stage__Syms.h"


VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_memory_stage ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+1,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+7,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+17,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+18,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+19,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+22,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+23,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+24,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+8,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+26,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+27,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+28,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+11,"force_error", false,-1);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+39,"clk", false,-1);
    tracep->declBit(c+40,"rst", false,-1);
    tracep->declBus(c+1,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+7,"next_program_counter_in", false,-1, 31,0);
    tracep->declBus(c+17,"source_data_reg_out", false,-1, 31,0);
    tracep->declBus(c+18,"rd_data_reg_out", false,-1, 31,0);
    tracep->declArray(c+19,"instruction_reg_out", false,-1, 64,0);
    tracep->declBus(c+22,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+23,"next_program_counter_reg_out", false,-1, 31,0);
    tracep->declQuad(c+24,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+8,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+26,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+9,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+27,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+10,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+28,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+12,"is_load", false,-1);
    tracep->declBit(c+13,"is_store", false,-1);
    tracep->declBus(c+14,"mem_width", false,-1, 5,0);
    tracep->declBus(c+15,"wb_sel", false,-1, 3,0);
    tracep->declBus(c+29,"wb_state", false,-1, 1,0);
    tracep->declBus(c+16,"load_data", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+41,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+42,"NOP", false,-1, 64,0);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+30,"adr", false,-1, 31,0);
    tracep->declBus(c+31,"sel", false,-1, 3,0);
    tracep->declBus(c+32,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+36,"dat_miso", false,-1, 31,0);
    tracep->declBit(c+33,"cyc", false,-1);
    tracep->declBit(c+34,"stb", false,-1);
    tracep->declBit(c+35,"we", false,-1);
    tracep->declBit(c+37,"ack", false,-1);
    tracep->declBit(c+38,"err", false,-1);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_init_top(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_memory_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("instruction ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__instruction__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_memory_stage ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb\211 ");
    Vtb_memory_stage___024root__trace_init_sub__TOP__tb_memory_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_memory_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_memory_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_register(Vtb_memory_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_memory_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_memory_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_memory_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_memory_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_memory_stage___024root*>(voidSelf);
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_memory_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_memory_stage___024root__trace_full_sub_0(Vtb_memory_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<3>/*95:0*/ __Vtemp_h3441a5c4__0;
    // Body
    bufp->fullIData(oldp+1,(vlSelf->tb_memory_stage__DOT__source_data_in),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_memory_stage__DOT__rd_data_in),32);
    bufp->fullWData(oldp+3,(vlSelf->tb_memory_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+6,(vlSelf->tb_memory_stage__DOT__program_counter_in),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_memory_stage__DOT__next_program_counter_in),32);
    bufp->fullCData(oldp+8,(vlSelf->tb_memory_stage__DOT__status_forwards_in),4);
    bufp->fullCData(oldp+9,(vlSelf->tb_memory_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+10,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_in),32);
    bufp->fullBit(oldp+11,(vlSelf->tb_memory_stage__DOT__force_error));
    bufp->fullBit(oldp+12,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load));
    bufp->fullBit(oldp+13,(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    bufp->fullCData(oldp+14,(vlSelf->tb_memory_stage__DOT__dut__DOT__mem_width),6);
    bufp->fullCData(oldp+15,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_sel),4);
    bufp->fullIData(oldp+16,(vlSelf->tb_memory_stage__DOT__dut__DOT__load_data),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_memory_stage__DOT__source_data_reg_out),32);
    bufp->fullIData(oldp+18,(vlSelf->tb_memory_stage__DOT__rd_data_reg_out),32);
    bufp->fullWData(oldp+19,(vlSelf->tb_memory_stage__DOT__instruction_reg_out),65);
    bufp->fullIData(oldp+22,(vlSelf->tb_memory_stage__DOT__program_counter_reg_out),32);
    bufp->fullIData(oldp+23,(vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out),32);
    bufp->fullQData(oldp+24,(vlSelf->tb_memory_stage__DOT__forwarding_out),38);
    bufp->fullCData(oldp+26,(vlSelf->tb_memory_stage__DOT__status_forwards_out),4);
    bufp->fullCData(oldp+27,(vlSelf->tb_memory_stage__DOT__status_backwards_out),2);
    bufp->fullIData(oldp+28,(vlSelf->tb_memory_stage__DOT__jump_address_backwards_out),32);
    bufp->fullCData(oldp+29,(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state),2);
    bufp->fullIData(oldp+30,(vlSymsp->TOP__tb_memory_stage__DOT__wb.adr),32);
    bufp->fullCData(oldp+31,(vlSymsp->TOP__tb_memory_stage__DOT__wb.sel),4);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_mosi),32);
    bufp->fullBit(oldp+33,(vlSymsp->TOP__tb_memory_stage__DOT__wb.cyc));
    bufp->fullBit(oldp+34,(vlSymsp->TOP__tb_memory_stage__DOT__wb.stb));
    bufp->fullBit(oldp+35,(vlSymsp->TOP__tb_memory_stage__DOT__wb.we));
    bufp->fullIData(oldp+36,(vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso),32);
    bufp->fullBit(oldp+37,(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack));
    bufp->fullBit(oldp+38,(vlSymsp->TOP__tb_memory_stage__DOT__wb.err));
    bufp->fullBit(oldp+39,(vlSelf->tb_memory_stage__DOT__clk));
    bufp->fullBit(oldp+40,(vlSelf->tb_memory_stage__DOT__rst));
    bufp->fullIData(oldp+41,(vlSelf->tb_memory_stage__DOT__unnamedblk1__DOT__i),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+42,(__Vtemp_h3441a5c4__0),65);
}
