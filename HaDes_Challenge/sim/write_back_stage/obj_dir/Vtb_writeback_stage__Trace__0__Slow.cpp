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
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBus(c+1,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+7,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+8,"external_interrupt_in", false,-1);
    tracep->declBit(c+9,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+13,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+10,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+16,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+17,"jump_address_backwards_out", false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+11,"clk", false,-1);
    tracep->declBit(c+12,"rst", false,-1);
    tracep->declBus(c+1,"source_data_in", false,-1, 31,0);
    tracep->declBus(c+2,"rd_data_in", false,-1, 31,0);
    tracep->declArray(c+3,"instruction_in", false,-1, 64,0);
    tracep->declBus(c+6,"program_counter_in", false,-1, 31,0);
    tracep->declBus(c+7,"next_program_counter_in", false,-1, 31,0);
    tracep->declBit(c+8,"external_interrupt_in", false,-1);
    tracep->declBit(c+9,"timer_interrupt_in", false,-1);
    tracep->declQuad(c+13,"forwarding_out", false,-1, 37,0);
    tracep->declBus(c+10,"status_forwards_in", false,-1, 3,0);
    tracep->declBus(c+16,"status_backwards_out", false,-1, 1,0);
    tracep->declBus(c+17,"jump_address_backwards_out", false,-1, 31,0);
    tracep->declBit(c+15,"writes_rd", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtb_writeback_stage___024root__trace_init_sub__TOP__instruction__0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_init_sub__TOP__instruction__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declArray(c+18,"NOP", false,-1, 64,0);
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
    bufp->fullIData(oldp+1,(vlSelf->tb_writeback_stage__DOT__source_data_in),32);
    bufp->fullIData(oldp+2,(vlSelf->tb_writeback_stage__DOT__rd_data_in),32);
    bufp->fullWData(oldp+3,(vlSelf->tb_writeback_stage__DOT__instruction_in),65);
    bufp->fullIData(oldp+6,(vlSelf->tb_writeback_stage__DOT__program_counter_in),32);
    bufp->fullIData(oldp+7,(vlSelf->tb_writeback_stage__DOT__next_program_counter_in),32);
    bufp->fullBit(oldp+8,(vlSelf->tb_writeback_stage__DOT__external_interrupt_in));
    bufp->fullBit(oldp+9,(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in));
    bufp->fullCData(oldp+10,(vlSelf->tb_writeback_stage__DOT__status_forwards_in),4);
    bufp->fullBit(oldp+11,(vlSelf->tb_writeback_stage__DOT__clk));
    bufp->fullBit(oldp+12,(vlSelf->tb_writeback_stage__DOT__rst));
    bufp->fullQData(oldp+13,((((QData)((IData)(((IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                       >> 0x16U)))))) 
                               << 0x25U) | (((QData)((IData)(vlSelf->tb_writeback_stage__DOT__rd_data_in)) 
                                             << 5U) 
                                            | (QData)((IData)(
                                                              (0x1fU 
                                                               & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                                  >> 0x16U))))))),38);
    bufp->fullBit(oldp+15,(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd));
    bufp->fullCData(oldp+16,(0U),2);
    bufp->fullIData(oldp+17,(0U),32);
    __Vtemp_h3441a5c4__0[0U] = 0U;
    __Vtemp_h3441a5c4__0[1U] = 0x90000000U;
    __Vtemp_h3441a5c4__0[2U] = 0U;
    bufp->fullWData(oldp+18,(__Vtemp_h3441a5c4__0),65);
}
