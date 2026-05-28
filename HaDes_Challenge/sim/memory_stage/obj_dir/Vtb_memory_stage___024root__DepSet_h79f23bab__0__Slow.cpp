// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_memory_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_memory_stage__Syms.h"
#include "Vtb_memory_stage___024root.h"

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_initial__TOP(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hc463946c__0;
    // Body
    __Vtemp_hc463946c__0[0U] = 0x2e766364U;
    __Vtemp_hc463946c__0[1U] = 0x74616765U;
    __Vtemp_hc463946c__0[2U] = 0x72795f73U;
    __Vtemp_hc463946c__0[3U] = 0x6d656d6fU;
    __Vtemp_hc463946c__0[4U] = 0x74625fU;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(5, __Vtemp_hc463946c__0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_memory_stage___024root___dump_triggers__stl(Vtb_memory_stage___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_memory_stage___024root___eval_triggers__stl(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_memory_stage___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void Vtb_memory_stage___024root___stl_sequent__TOP__0(Vtb_memory_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_memory_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_memory_stage___024root___stl_sequent__TOP__0\n"); );
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
    vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 0U;
    if (vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_load) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 6U;
    } else if (vlSelf->tb_memory_stage__DOT__dut__DOT__active_is_store) {
        vlSelf->tb_memory_stage__DOT__dut__DOT__fault_status_comb = 8U;
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
