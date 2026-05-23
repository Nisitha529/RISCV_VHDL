// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_writeback_stage__Syms.h"


void Vtb_writeback_stage___024root__trace_chg_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_writeback_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_writeback_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_writeback_stage___024root*>(voidSelf);
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_writeback_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_writeback_stage___024root__trace_chg_sub_0(Vtb_writeback_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+0,(vlSelf->tb_writeback_stage__DOT__source_data_in),32);
        bufp->chgIData(oldp+1,(vlSelf->tb_writeback_stage__DOT__rd_data_in),32);
        bufp->chgWData(oldp+2,(vlSelf->tb_writeback_stage__DOT__instruction_in),65);
        bufp->chgIData(oldp+5,(vlSelf->tb_writeback_stage__DOT__program_counter_in),32);
        bufp->chgIData(oldp+6,(vlSelf->tb_writeback_stage__DOT__next_program_counter_in),32);
        bufp->chgBit(oldp+7,(vlSelf->tb_writeback_stage__DOT__external_interrupt_in));
        bufp->chgBit(oldp+8,(vlSelf->tb_writeback_stage__DOT__timer_interrupt_in));
        bufp->chgCData(oldp+9,(vlSelf->tb_writeback_stage__DOT__status_forwards_in),4);
    }
    bufp->chgBit(oldp+10,(vlSelf->tb_writeback_stage__DOT__clk));
    bufp->chgBit(oldp+11,(vlSelf->tb_writeback_stage__DOT__rst));
    bufp->chgQData(oldp+12,((((QData)((IData)(((IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd) 
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
    bufp->chgBit(oldp+14,(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd));
}

void Vtb_writeback_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_writeback_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_writeback_stage___024root*>(voidSelf);
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
