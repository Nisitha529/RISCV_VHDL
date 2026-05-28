// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtb_fetch_stage__Syms.h"


void Vtb_fetch_stage___024root__trace_chg_sub_0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fetch_stage___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_chg_top_0\n"); );
    // Init
    Vtb_fetch_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fetch_stage___024root*>(voidSelf);
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtb_fetch_stage___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fetch_stage___024root__trace_chg_sub_0(Vtb_fetch_stage___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+0,(vlSelf->tb_fetch_stage__DOT__rst));
        bufp->chgCData(oldp+1,(vlSelf->tb_fetch_stage__DOT__status_backwards_in),2);
        bufp->chgIData(oldp+2,(vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in),32);
        bufp->chgIData(oldp+3,(vlSelf->tb_fetch_stage__DOT__pass_count),32);
        bufp->chgIData(oldp+4,(vlSelf->tb_fetch_stage__DOT__fail_count),32);
        bufp->chgIData(oldp+5,(vlSelf->tb_fetch_stage__DOT__addr),32);
        bufp->chgBit(oldp+6,((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+7,((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+8,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack));
        bufp->chgBit(oldp+9,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err));
        bufp->chgIData(oldp+10,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+11,(vlSelf->tb_fetch_stage__DOT__instruction_reg_out),32);
        bufp->chgIData(oldp+12,(vlSelf->tb_fetch_stage__DOT__program_counter_reg_out),32);
        bufp->chgCData(oldp+13,(vlSelf->tb_fetch_stage__DOT__status_forwards_out),4);
        bufp->chgBit(oldp+14,(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state));
        bufp->chgIData(oldp+15,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+16,(vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc),32);
        bufp->chgBit(oldp+17,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid));
        bufp->chgIData(oldp+18,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr),32);
        bufp->chgIData(oldp+19,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc),32);
        bufp->chgCData(oldp+20,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status),4);
        bufp->chgBit(oldp+21,(vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr),32);
        bufp->chgCData(oldp+25,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel),4);
        bufp->chgBit(oldp+26,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.we));
        bufp->chgIData(oldp+27,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_mosi),32);
    }
    bufp->chgBit(oldp+28,(vlSelf->tb_fetch_stage__DOT__clk));
    bufp->chgBit(oldp+29,(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid));
}

void Vtb_fetch_stage___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root__trace_cleanup\n"); );
    // Init
    Vtb_fetch_stage___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fetch_stage___024root*>(voidSelf);
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
