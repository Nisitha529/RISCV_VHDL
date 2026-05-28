// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fetch_stage__Syms.h"


VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_init_sub__TOP__0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushNamePrefix("tb_fetch_stage ");
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+12,"instruction_reg_out", false,-1, 31,0);
    tracep->declBus(c+13,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+14,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+2,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+3,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+4,"pass_count", false,-1, 31,0);
    tracep->declBus(c+5,"fail_count", false,-1, 31,0);
    tracep->declBus(c+6,"addr", false,-1, 31,0);
    tracep->declBus(c+31,"NOP_INSTR", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+32,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+29,"clk", false,-1);
    tracep->declBit(c+1,"rst", false,-1);
    tracep->declBus(c+12,"instruction_reg_out", false,-1, 31,0);
    tracep->declBus(c+13,"program_counter_reg_out", false,-1, 31,0);
    tracep->declBus(c+14,"status_forwards_out", false,-1, 3,0);
    tracep->declBus(c+2,"status_backwards_in", false,-1, 1,0);
    tracep->declBus(c+3,"jump_address_backwards_in", false,-1, 31,0);
    tracep->declBus(c+31,"NOP_INSTR", false,-1, 31,0);
    tracep->declBus(c+15,"wb_state", false,-1, 0,0);
    tracep->declBus(c+16,"pc", false,-1, 31,0);
    tracep->declBus(c+17,"request_pc", false,-1, 31,0);
    tracep->declBit(c+18,"pending_valid", false,-1);
    tracep->declBus(c+19,"pending_instr", false,-1, 31,0);
    tracep->declBus(c+20,"pending_pc", false,-1, 31,0);
    tracep->declBus(c+21,"pending_status", false,-1, 3,0);
    tracep->declBit(c+22,"kill_response", false,-1);
    tracep->declBit(c+7,"downstream_stall", false,-1);
    tracep->declBit(c+8,"downstream_jump", false,-1);
    tracep->declBit(c+30,"response_valid", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_init_sub__TOP__constants__0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_init_sub__TOP__constants__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+33,"MEMORY_START", false,-1, 31,0);
    tracep->declBus(c+34,"MEMORY_SIZE", false,-1, 31,0);
    tracep->declBus(c+35,"LEDS_START", false,-1, 31,0);
    tracep->declBus(c+36,"LEDS_SIZE", false,-1, 31,0);
    tracep->declBus(c+37,"BUTTONS_START", false,-1, 31,0);
    tracep->declBus(c+36,"BUTTONS_SIZE", false,-1, 31,0);
    tracep->declBus(c+38,"SWITCHES_START", false,-1, 31,0);
    tracep->declBus(c+36,"SWITCHES_SIZE", false,-1, 31,0);
    tracep->declBus(c+39,"SEGMENTS_START", false,-1, 31,0);
    tracep->declBus(c+36,"SEGMENTS_SIZE", false,-1, 31,0);
    tracep->declBus(c+40,"UART_START", false,-1, 31,0);
    tracep->declBus(c+36,"UART_SIZE", false,-1, 31,0);
    tracep->declBus(c+41,"TIMER_START", false,-1, 31,0);
    tracep->declBus(c+42,"TIMER_SIZE", false,-1, 31,0);
    tracep->declBus(c+43,"VGA_START", false,-1, 31,0);
    tracep->declBus(c+44,"VGA_SIZE", false,-1, 31,0);
    tracep->declBus(c+45,"TEST_START", false,-1, 31,0);
    tracep->declBus(c+42,"TEST_SIZE", false,-1, 31,0);
    tracep->declBus(c+46,"RESET_ADDRESS", false,-1, 31,0);
    tracep->declBus(c+47,"NOP", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_init_sub__TOP__tb_fetch_stage__DOT__wb__0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_init_sub__TOP__tb_fetch_stage__DOT__wb__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+23,"cyc", false,-1);
    tracep->declBit(c+24,"stb", false,-1);
    tracep->declBit(c+9,"ack", false,-1);
    tracep->declBit(c+10,"err", false,-1);
    tracep->declBus(c+25,"adr", false,-1, 31,0);
    tracep->declBus(c+26,"sel", false,-1, 3,0);
    tracep->declBit(c+27,"we", false,-1);
    tracep->declBus(c+28,"dat_mosi", false,-1, 31,0);
    tracep->declBus(c+11,"dat_miso", false,-1, 31,0);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_init_top(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_init_top\n"); );
    // Body
    Vtb_fetch_stage___024root__trace_init_sub__TOP__0(vlSelf, tracep);
    tracep->pushNamePrefix("constants ");
    Vtb_fetch_stage___024root__trace_init_sub__TOP__constants__0(vlSelf, tracep);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("tb_fetch_stage ");
    tracep->pushNamePrefix("dut ");
    tracep->pushNamePrefix("wb\211 ");
    Vtb_fetch_stage___024root__trace_init_sub__TOP__tb_fetch_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("wb\211 ");
    Vtb_fetch_stage___024root__trace_init_sub__TOP__tb_fetch_stage__DOT__wb__0(vlSelf, tracep);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fetch_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fetch_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_register(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtb_fetch_stage___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtb_fetch_stage___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtb_fetch_stage___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_full_sub_0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_full_top_0\n"); );
    // Init
    Vtb_fetch_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fetch_stage___024root*>(voidSelf);
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtb_fetch_stage___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fetch_stage___024root__trace_full_sub_0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->tb_fetch_stage__DOT__rst));
    bufp->fullCData(oldp+2,(vlSelf->tb_fetch_stage__DOT__status_backwards_in),2);
    bufp->fullIData(oldp+3,(vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in),32);
    bufp->fullIData(oldp+4,(vlSelf->tb_fetch_stage__DOT__pass_count),32);
    bufp->fullIData(oldp+5,(vlSelf->tb_fetch_stage__DOT__fail_count),32);
    bufp->fullIData(oldp+6,(vlSelf->tb_fetch_stage__DOT__addr),32);
    bufp->fullBit(oldp+7,((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+8,((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
    bufp->fullBit(oldp+9,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack));
    bufp->fullBit(oldp+10,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err));
    bufp->fullIData(oldp+11,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso),32);
    bufp->fullIData(oldp+12,(vlSelf->tb_fetch_stage__DOT__instruction_reg_out),32);
    bufp->fullIData(oldp+13,(vlSelf->tb_fetch_stage__DOT__program_counter_reg_out),32);
    bufp->fullCData(oldp+14,(vlSelf->tb_fetch_stage__DOT__status_forwards_out),4);
    bufp->fullBit(oldp+15,(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state));
    bufp->fullIData(oldp+16,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pc),32);
    bufp->fullIData(oldp+17,(vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc),32);
    bufp->fullBit(oldp+18,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid));
    bufp->fullIData(oldp+19,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr),32);
    bufp->fullIData(oldp+20,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc),32);
    bufp->fullCData(oldp+21,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status),4);
    bufp->fullBit(oldp+22,(vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response));
    bufp->fullBit(oldp+23,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb));
    bufp->fullIData(oldp+25,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr),32);
    bufp->fullCData(oldp+26,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel),4);
    bufp->fullBit(oldp+27,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.we));
    bufp->fullIData(oldp+28,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_mosi),32);
    bufp->fullBit(oldp+29,(vlSelf->tb_fetch_stage__DOT__clk));
    bufp->fullBit(oldp+30,(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid));
    bufp->fullIData(oldp+31,(0x13U),32);
    bufp->fullIData(oldp+32,(0x20U),32);
    bufp->fullIData(oldp+33,(0x10000U),32);
    bufp->fullIData(oldp+34,(0x2000U),32);
    bufp->fullIData(oldp+35,(0x80000U),32);
    bufp->fullIData(oldp+36,(1U),32);
    bufp->fullIData(oldp+37,(0x81000U),32);
    bufp->fullIData(oldp+38,(0x82000U),32);
    bufp->fullIData(oldp+39,(0x83000U),32);
    bufp->fullIData(oldp+40,(0x84000U),32);
    bufp->fullIData(oldp+41,(0x85000U),32);
    bufp->fullIData(oldp+42,(5U),32);
    bufp->fullIData(oldp+43,(0x90000U),32);
    bufp->fullIData(oldp+44,(0x9600U),32);
    bufp->fullIData(oldp+45,(0x120000U),32);
    bufp->fullIData(oldp+46,(0x40000U),32);
    bufp->fullIData(oldp+47,(0x13U),32);
}
