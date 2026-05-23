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
        bufp->chgBit(oldp+3,(vlSelf->tb_fetch_stage__DOT__force_error));
        bufp->chgBit(oldp+4,((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
        bufp->chgBit(oldp+5,((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+6,(vlSelf->tb_fetch_stage__DOT__instruction_reg_out),32);
        bufp->chgIData(oldp+7,(vlSelf->tb_fetch_stage__DOT__program_counter_reg_out),32);
        bufp->chgCData(oldp+8,(vlSelf->tb_fetch_stage__DOT__status_forwards_out),4);
        bufp->chgBit(oldp+9,(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state));
        bufp->chgIData(oldp+10,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+11,(vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc),32);
        bufp->chgBit(oldp+12,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid));
        bufp->chgIData(oldp+13,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr),32);
        bufp->chgIData(oldp+14,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc),32);
        bufp->chgCData(oldp+15,(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status),4);
        bufp->chgBit(oldp+16,(vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response));
        bufp->chgIData(oldp+17,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr),32);
        bufp->chgCData(oldp+18,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel),4);
        bufp->chgIData(oldp+19,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_mosi),32);
        bufp->chgBit(oldp+20,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc));
        bufp->chgBit(oldp+21,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb));
        bufp->chgBit(oldp+22,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.we));
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
        bufp->chgBit(oldp+23,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso),32);
        bufp->chgBit(oldp+25,(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack));
    }
    bufp->chgBit(oldp+26,(vlSelf->tb_fetch_stage__DOT__clk));
    bufp->chgBit(oldp+27,(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid));
    bufp->chgBit(oldp+28,((1U & (~ ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
                                    | ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid) 
                                       | ((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)) 
                                          | (2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)))))))));
    bufp->chgIData(oldp+29,(vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i),32);
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
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
