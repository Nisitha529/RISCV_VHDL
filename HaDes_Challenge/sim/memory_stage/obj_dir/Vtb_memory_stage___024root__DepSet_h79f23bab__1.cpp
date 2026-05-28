// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage__Syms.h"
#include "Vtb_memory_stage___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_memory_stage___024root___eval_initial__TOP__2(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ tb_memory_stage__DOT____Vrepeat1;
    tb_memory_stage__DOT____Vrepeat1 = 0;
    // Body
    tb_memory_stage__DOT____Vrepeat1 = 0x2710U;
    while (VL_LTS_III(32, 0U, tb_memory_stage__DOT____Vrepeat1)) {
        co_await vlSelf->__VtrigSched_h83711720__0.trigger(
                                                           "@(posedge tb_memory_stage.clk)", 
                                                           "tb_memory_stage.sv", 
                                                           573);
        tb_memory_stage__DOT____Vrepeat1 = (tb_memory_stage__DOT____Vrepeat1 
                                            - (IData)(1U));
    }
    VL_WRITEF("[FAIL] Simulation timeout\n[%0t] %%Error: tb_memory_stage.sv:575: Assertion failed in %Ntb_memory_stage\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_memory_stage.sv", 575, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__act(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_memory_stage___024root___eval_triggers__act(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_memory_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->tb_memory_stage__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk));
    vlSelf->__Vtrigrprev__TOP__tb_memory_stage__DOT__clk 
        = vlSelf->tb_memory_stage__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_memory_stage___024root___act_comb__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb = 0xfU;
    if ((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                              << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                        >> 0x1bU)))) 
          | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                               << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                         >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? 8U : 4U) : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                                   ? 2U : 1U));
    } else if ((((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU)))) 
                 | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU))))) 
                | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? 0xcU : 3U);
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
        = vlSelf->tb_memory_stage__DOT__source_data_in;
    if ((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                            << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (vlSelf->tb_memory_stage__DOT__source_data_in 
                       << 0x18U) : (0xff0000U & (vlSelf->tb_memory_stage__DOT__source_data_in 
                                                 << 0x10U)))
                : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (0xff00U & (vlSelf->tb_memory_stage__DOT__source_data_in 
                                  << 8U)) : (0xffU 
                                             & vlSelf->tb_memory_stage__DOT__source_data_in)));
    } else if ((0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? (vlSelf->tb_memory_stage__DOT__source_data_in 
                   << 0x10U) : (0xffffU & vlSelf->tb_memory_stage__DOT__source_data_in));
    }
    vlSymsp->TOP__tb_memory_stage__DOT__wb.adr = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                                                   ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr
                                                   : vlSelf->tb_memory_stage__DOT__rd_data_in);
    vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso;
    if ((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                            << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                      >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (((- (IData)((vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                    >> 0x1fU))) << 8U) 
                       | (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                          >> 0x18U)) : (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                        >> 0x17U)))) 
                                         << 8U) | (0xffU 
                                                   & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                      >> 0x10U))))
                : ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (((- (IData)((1U & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                          >> 0xfU)))) 
                        << 8U) | (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                           >> 8U)))
                    : (((- (IData)((1U & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso))));
    } else if ((0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                       >> 0x18U) : (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                             >> 0x10U)))
                : ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                >> 8U)) : (0xffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
    } else if ((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? (((- (IData)((vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                      >> 0x10U)) : (((- (IData)((1U 
                                                 & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
    } else if ((0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                   >> 0x10U) : (0xffffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso));
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned = 0U;
    if ((((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                              << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                        >> 0x1bU)))) 
          | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned 
            = (1U & vlSelf->tb_memory_stage__DOT__rd_data_in);
    } else if (((0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU)))) 
                | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned 
            = (0U != (3U & vlSelf->tb_memory_stage__DOT__rd_data_in));
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_load = 0U;
    if ((((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))) 
            | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU))))) 
           | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU))))) 
          | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                               << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                         >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__is_load = 1U;
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_store = 0U;
    if ((1U & (~ (((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU)))) 
                     | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU))))) 
                    | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
                   | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU))))) 
                  | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                        << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU)))))))) {
        if ((((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))) 
              | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU))))) 
             | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU)))))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__is_store = 1U;
        }
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 0U;
    if (vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 5U;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__is_store) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 7U;
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op 
        = ((0U == (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in)) 
           & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0));
    vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op 
        = ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)) 
           & ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
              & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                 & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                    & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))));
}

VL_INLINE_OPT void Vtb_memory_stage___024root___nba_sequent__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state;
    __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0;
    VlWide<3>/*64:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr;
    VL_ZERO_W(65, __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr);
    IData/*31:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data = 0;
    IData/*31:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr = 0;
    IData/*31:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc = 0;
    IData/*31:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc = 0;
    CData/*0:0*/ __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load = 0;
    // Body
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_next_pc;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_pc;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_source_data;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load;
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[0U] 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[0U];
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U];
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U];
    __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr;
    __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state 
        = vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state;
    if (vlSelf->tb_memory_stage__DOT__rst) {
        __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[0U] = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[1U] = 0x90000000U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[2U] = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr = 0U;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc = 0U;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel = 0xfU;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load = 0U;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store = 0U;
        vlSelf->tb_memory_stage__DOT__source_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] = 0U;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
    } else if ((2U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))) {
        __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
        vlSelf->tb_memory_stage__DOT__source_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] = 0U;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 2U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_memory_stage__DOT__jump_address_backwards_in;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) {
        if (vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state) {
            vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
            vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
            vlSelf->tb_memory_stage__DOT__status_backwards_out = 1U;
            vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
            if (((IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.ack) 
                 | (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err))) {
                vlSelf->tb_memory_stage__DOT__source_data_reg_out 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_source_data;
                vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
                    = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load)
                        ? vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb
                        : vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr);
                vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_pc;
                vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_next_pc;
                vlSelf->tb_memory_stage__DOT__status_forwards_out 
                    = ((IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err)
                        ? (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb)
                        : 0U);
                vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
                vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
                __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
                vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[0U];
                vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U];
                vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
                    = vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U];
                vlSelf->tb_memory_stage__DOT__forwarding_out 
                    = ((0x1fffffffffULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
                       | ((QData)((IData)((((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load) 
                                            & (~ (IData)(vlSymsp->TOP__tb_memory_stage__DOT__wb.err))) 
                                           & (0U != 
                                              (0x1fU 
                                               & (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                                  >> 0x16U)))))) 
                          << 0x25U));
                vlSelf->tb_memory_stage__DOT__forwarding_out 
                    = ((0x2000000000ULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
                       | (((QData)((IData)(((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load)
                                             ? vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb
                                             : 0U))) 
                           << 5U) | (QData)((IData)(
                                                    (0x1fU 
                                                     & (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                                        >> 0x16U))))));
            }
        } else {
            __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 0U;
        }
    } else if ((1U == (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in))) {
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out 
            = vlSelf->tb_memory_stage__DOT__jump_address_backwards_in;
    } else if ((0U != (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in))) {
        vlSelf->tb_memory_stage__DOT__source_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] = 0U;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out 
            = vlSelf->tb_memory_stage__DOT__status_forwards_in;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
    } else if (((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op) 
                & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned))) {
        vlSelf->tb_memory_stage__DOT__source_data_reg_out 
            = vlSelf->tb_memory_stage__DOT__source_data_in;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
            = vlSelf->tb_memory_stage__DOT__rd_data_in;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[0U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[1U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[2U];
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out 
            = vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op) {
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[0U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[0U];
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[1U];
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[2U];
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data 
            = vlSelf->tb_memory_stage__DOT__source_data_in;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr 
            = vlSelf->tb_memory_stage__DOT__rd_data_in;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_store_data 
            = vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_sel 
            = vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb;
        __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load 
            = vlSelf->tb_memory_stage__DOT__dut__DOT__is_load;
        vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store 
            = vlSelf->tb_memory_stage__DOT__dut__DOT__is_store;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
        __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state = 1U;
    } else if (((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0)) 
                & (0U == (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in)))) {
        vlSelf->tb_memory_stage__DOT__source_data_reg_out 
            = vlSelf->tb_memory_stage__DOT__source_data_in;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out 
            = vlSelf->tb_memory_stage__DOT__rd_data_in;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[0U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[1U];
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] 
            = vlSelf->tb_memory_stage__DOT__instruction_in[2U];
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__forwarding_out 
            = ((0x1fULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
               | (((QData)((IData)((0U != (0x1fU & 
                                           (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x16U))))) 
                   << 0x25U) | ((QData)((IData)(vlSelf->tb_memory_stage__DOT__rd_data_in)) 
                                << 5U)));
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__forwarding_out 
            = ((0x3fffffffe0ULL & vlSelf->tb_memory_stage__DOT__forwarding_out) 
               | (IData)((IData)((0x1fU & (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x16U)))));
    } else {
        vlSelf->tb_memory_stage__DOT__source_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__rd_data_reg_out = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[0U] = 0U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[1U] = 0x90000000U;
        vlSelf->tb_memory_stage__DOT__instruction_reg_out[2U] = 0U;
        vlSelf->tb_memory_stage__DOT__program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__program_counter_in;
        vlSelf->tb_memory_stage__DOT__next_program_counter_reg_out 
            = vlSelf->tb_memory_stage__DOT__next_program_counter_in;
        vlSelf->tb_memory_stage__DOT__forwarding_out = 0ULL;
        vlSelf->tb_memory_stage__DOT__status_forwards_out = 1U;
        vlSelf->tb_memory_stage__DOT__status_backwards_out = 0U;
        vlSelf->tb_memory_stage__DOT__jump_address_backwards_out = 0U;
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_source_data 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_source_data;
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_pc 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_pc;
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_next_pc 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_next_pc;
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_is_load;
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[0U] 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[0U];
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[1U];
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_instr[2U];
    vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__active_addr;
    vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state 
        = __Vdly__tb_memory_stage__DOT__dut__DOT__wb_state;
    vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 0U;
    if (vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 6U;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 8U;
    }
}

VL_INLINE_OPT void Vtb_memory_stage___024root___nba_comb__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb = 0xfU;
    if ((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                              << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                        >> 0x1bU)))) 
          | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                               << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                         >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? 8U : 4U) : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                                   ? 2U : 1U));
    } else if ((((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU)))) 
                 | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU))))) 
                | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__byte_sel_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? 0xcU : 3U);
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
        = vlSelf->tb_memory_stage__DOT__source_data_in;
    if ((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                            << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                      >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (vlSelf->tb_memory_stage__DOT__source_data_in 
                       << 0x18U) : (0xff0000U & (vlSelf->tb_memory_stage__DOT__source_data_in 
                                                 << 0x10U)))
                : ((1U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                    ? (0xff00U & (vlSelf->tb_memory_stage__DOT__source_data_in 
                                  << 8U)) : (0xffU 
                                             & vlSelf->tb_memory_stage__DOT__source_data_in)));
    } else if ((0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__store_data_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__rd_data_in)
                ? (vlSelf->tb_memory_stage__DOT__source_data_in 
                   << 0x10U) : (0xffffU & vlSelf->tb_memory_stage__DOT__source_data_in));
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned = 0U;
    if ((((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                              << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                        >> 0x1bU)))) 
          | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned 
            = (1U & vlSelf->tb_memory_stage__DOT__rd_data_in);
    } else if (((0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU)))) 
                | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                       << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                 >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned 
            = (0U != (3U & vlSelf->tb_memory_stage__DOT__rd_data_in));
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_load = 0U;
    if ((((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU)))) 
            | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU))))) 
           | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                 << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU))))) 
          | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
         | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                               << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                         >> 0x1bU)))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__is_load = 1U;
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__is_store = 0U;
    if ((1U & (~ (((((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU)))) 
                     | (0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                           << 5U) | 
                                          (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                           >> 0x1bU))))) 
                    | (0xcU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                          << 5U) | 
                                         (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                          >> 0x1bU))))) 
                   | (0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                         << 5U) | (
                                                   vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                   >> 0x1bU))))) 
                  | (0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                        << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                                  >> 0x1bU)))))))) {
        if ((((0xfU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                  << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                            >> 0x1bU)))) 
              | (0x10U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                     << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                               >> 0x1bU))))) 
             | (0x11U == (0x3fU & ((vlSelf->tb_memory_stage__DOT__instruction_in[2U] 
                                    << 5U) | (vlSelf->tb_memory_stage__DOT__instruction_in[1U] 
                                              >> 0x1bU)))))) {
            vlSelf->tb_memory_stage__DOT__dut__DOT__is_store = 1U;
        }
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
        = vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso;
    if ((0xaU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                            << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                      >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (((- (IData)((vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                    >> 0x1fU))) << 8U) 
                       | (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                          >> 0x18U)) : (((- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                        >> 0x17U)))) 
                                         << 8U) | (0xffU 
                                                   & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                      >> 0x10U))))
                : ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (((- (IData)((1U & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                          >> 0xfU)))) 
                        << 8U) | (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                           >> 8U)))
                    : (((- (IData)((1U & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                          >> 7U)))) 
                        << 8U) | (0xffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso))));
    } else if ((0xdU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                       >> 0x18U) : (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                             >> 0x10U)))
                : ((1U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                    ? (0xffU & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                >> 8U)) : (0xffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
    } else if ((0xbU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? (((- (IData)((vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                >> 0x1fU))) << 0x10U) 
                   | (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                      >> 0x10U)) : (((- (IData)((1U 
                                                 & (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso)));
    } else if ((0xeU == (0x3fU & ((vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[2U] 
                                   << 5U) | (vlSelf->tb_memory_stage__DOT__dut__DOT__active_instr[1U] 
                                             >> 0x1bU))))) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__load_value_comb 
            = ((2U & vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr)
                ? (vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso 
                   >> 0x10U) : (0xffffU & vlSymsp->TOP__tb_memory_stage__DOT__wb.dat_miso));
    }
    vlSymsp->TOP__tb_memory_stage__DOT__wb.adr = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)
                                                   ? vlSelf->tb_memory_stage__DOT__dut__DOT__active_addr
                                                   : vlSelf->tb_memory_stage__DOT__rd_data_in);
    vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 0U;
    if (vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 5U;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__is_store) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__misaligned_status_comb = 7U;
    }
    vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0 
        = ((IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_load) 
           | (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__is_store));
    vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op 
        = ((0U == (IData)(vlSelf->tb_memory_stage__DOT__status_forwards_in)) 
           & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT____VdfgTmp_he475b9dc__0));
    vlSelf->tb_memory_stage__DOT__dut__DOT__launch_memory_op 
        = ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__wb_state)) 
           & ((2U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
              & ((1U != (IData)(vlSelf->tb_memory_stage__DOT__status_backwards_in)) 
                 & ((~ (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__access_misaligned)) 
                    & (IData)(vlSelf->tb_memory_stage__DOT__dut__DOT__valid_memory_op)))));
}
