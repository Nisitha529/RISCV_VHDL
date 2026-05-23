// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage__Syms.h"
#include "Vtb_fetch_stage___024root.h"

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_initial__TOP(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hd8d70b0f__0;
    // Body
    vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i = 0U;
    while (VL_GTS_III(32, 0x100U, vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i)) {
        vlSelf->tb_fetch_stage__DOT__mem[(0xffU & vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i)] = 0xdeadbeefU;
        vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i 
            = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__init_mem__DOT__i);
    }
    vlSelf->tb_fetch_stage__DOT__mem[0U] = 0x11111111U;
    vlSelf->tb_fetch_stage__DOT__mem[1U] = 0x22222222U;
    vlSelf->tb_fetch_stage__DOT__mem[2U] = 0x33333333U;
    vlSelf->tb_fetch_stage__DOT__mem[3U] = 0x44444444U;
    vlSelf->tb_fetch_stage__DOT__mem[4U] = 0x55555555U;
    vlSelf->tb_fetch_stage__DOT__mem[5U] = 0x66666666U;
    vlSelf->tb_fetch_stage__DOT__mem[0x10U] = 0xaaaaaaaaU;
    vlSelf->tb_fetch_stage__DOT__mem[0x11U] = 0xbbbbbbbbU;
    __Vtemp_hd8d70b0f__0[0U] = 0x2e766364U;
    __Vtemp_hd8d70b0f__0[1U] = 0x74616765U;
    __Vtemp_hd8d70b0f__0[2U] = 0x63685f73U;
    __Vtemp_hd8d70b0f__0[3U] = 0x5f666574U;
    __Vtemp_hd8d70b0f__0[4U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hd8d70b0f__0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__stl(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fetch_stage___024root___eval_triggers__stl(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fetch_stage___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_fetch_stage___024root___stl_sequent__TOP__0(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid 
        = ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack) 
              | (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err)));
    vlSelf->tb_fetch_stage__DOT__dut__DOT__can_request 
        = (1U & (~ ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
                    | ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid) 
                       | ((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)) 
                          | (2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)))))));
}
