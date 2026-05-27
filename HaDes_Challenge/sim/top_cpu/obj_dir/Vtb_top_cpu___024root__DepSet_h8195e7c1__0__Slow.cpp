// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_top_cpu.h for the primary calling header

#include "verilated.h"

#include "Vtb_top_cpu__Syms.h"
#include "Vtb_top_cpu___024root.h"

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_initial__TOP(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h75f817e0__0;
    // Body
    vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i)) {
        vlSelf->tb_top_cpu__DOT__imem[(0x3ffU & vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i)] = 0x13U;
        vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__unnamedblk1__DOT__i);
    }
    vlSelf->tb_top_cpu__DOT__imem[0U] = 0xa00093U;
    vlSelf->tb_top_cpu__DOT__imem[1U] = 0x1400113U;
    vlSelf->tb_top_cpu__DOT__imem[2U] = 0x2081b3U;
    vlSelf->tb_top_cpu__DOT__imem[3U] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[4U] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[5U] = 0x12b7U;
    vlSelf->tb_top_cpu__DOT__imem[6U] = 0x80028293U;
    vlSelf->tb_top_cpu__DOT__imem[7U] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[8U] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[9U] = 0x32a023U;
    vlSelf->tb_top_cpu__DOT__imem[0xaU] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0xbU] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0xcU] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0xdU] = 0x2a203U;
    vlSelf->tb_top_cpu__DOT__imem[0xeU] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0xfU] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0x10U] = 0x13U;
    vlSelf->tb_top_cpu__DOT__imem[0x11U] = 0xfe000ee3U;
    vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x400U, vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i)) {
        vlSelf->tb_top_cpu__DOT__dmem[(0x3ffU & vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + vlSelf->tb_top_cpu__DOT__unnamedblk2__DOT__i);
    }
    __Vtemp_h75f817e0__0[0U] = 0x2e766364U;
    __Vtemp_h75f817e0__0[1U] = 0x5f637075U;
    __Vtemp_h75f817e0__0[2U] = 0x5f746f70U;
    __Vtemp_h75f817e0__0[3U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(4, __Vtemp_h75f817e0__0));
    vlSymsp->_traceDumpOpen();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_top_cpu___024root___dump_triggers__stl(Vtb_top_cpu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_top_cpu___024root___eval_triggers__stl(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_top_cpu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*0:0*/, 128> Vtb_top_cpu__ConstPool__TABLE_hacfd7032_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtb_top_cpu__ConstPool__TABLE_h7b4a29a2_0;
extern const VlUnpacked<CData/*2:0*/, 128> Vtb_top_cpu__ConstPool__TABLE_hf0a4cee6_0;

VL_ATTR_COLD void Vtb_top_cpu___024root___stl_sequent__TOP__0(Vtb_top_cpu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_top_cpu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_top_cpu___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____VdfgTmp_h0f2abe94__0;
    tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____VdfgTmp_h0f2abe94__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__response_valid 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.ack) 
              | (IData)(vlSymsp->TOP__tb_top_cpu__DOT__wb_imem.err)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__load_value 
        = ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[2U])
            ? vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso
            : ((vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U] 
                >> 0x1fU) ? vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso
                : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                    ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                        ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso
                                : ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                    ? (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                       >> 0x10U) : 
                                   (0xffffU & vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso)))
                            : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                    ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                        ? (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                           >> 0x18U)
                                        : (0xffU & 
                                           (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                            >> 0x10U)))
                                    : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                        ? (0xffU & 
                                           (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                            >> 8U))
                                        : (0xffU & vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso)))
                                : vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso))
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_instr[1U])
                                ? ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                    ? (((- (IData)(
                                                   (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                    >> 0x1fU))) 
                                        << 0x10U) | 
                                       (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                        >> 0x10U)) : 
                                   (((- (IData)((1U 
                                                 & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                    >> 0xfU)))) 
                                     << 0x10U) | (0xffffU 
                                                  & vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso)))
                                : ((2U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                    ? ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                        ? (((- (IData)(
                                                       (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                        >> 0x1fU))) 
                                            << 8U) 
                                           | (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                              >> 0x18U))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                           >> 0x17U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                 >> 0x10U))))
                                    : ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__active_rd_data)
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                           >> 0xfU)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                 >> 8U)))
                                        : (((- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso)))))
                            : vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso))
                    : vlSymsp->TOP__tb_top_cpu__DOT__wb_dmem.dat_miso)));
    vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard = 0U;
    if ((((((0xaU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                          >> 0x1bU)))) 
            | (0xbU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                  << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                            >> 0x1bU))))) 
           | (0xcU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                 << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                           >> 0x1bU))))) 
          | (0xdU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                                << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                          >> 0x1bU))))) 
         | (0xeU == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U] 
                               << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                         >> 0x1bU)))))) {
        if ((((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                               >> 0x11U))) & ((0x1fU 
                                               & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                  >> 0x11U)) 
                                              == (0x1fU 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                     >> 0x16U)))) 
             | ((0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                 >> 0xcU))) & ((0x1fU 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                   >> 0xcU)) 
                                               == (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                      >> 0x16U)))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard = 1U;
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = 0U;
    __Vtableidx2 = (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used 
        = Vtb_top_cpu__ConstPool__TABLE_hacfd7032_0
        [__Vtableidx2];
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used 
        = Vtb_top_cpu__ConstPool__TABLE_h7b4a29a2_0
        [__Vtableidx2];
    vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd 
        = (1U & ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[2U])
                  ? ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])
                                        ? ((0x20000000U 
                                            & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])
                                            ? (IData)(
                                                      (0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])))
                                            : (IData)(
                                                      (0U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U]))))
                                        : ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U]))))))
                  : ((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])))
                      : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])
                          ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U])))
                              : (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 0U;
    __Vtableidx1 = (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type 
        = Vtb_top_cpu__ConstPool__TABLE_hf0a4cee6_0
        [__Vtableidx1];
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 0U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 0U;
    if ((1U & (~ vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U]))) {
        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                            vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_load = 1U;
                    vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                        if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
            if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                    if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                        vlSelf->tb_top_cpu__DOT__dut__DOT__memory_inst__DOT__is_store = 1U;
                        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                if ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__writeback_inst__DOT__writes_rd) 
           & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                              >> 0x16U))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_source_data 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store)
            ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2
            : 0U);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                          >> 0x14U)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_use_imm)
            ? vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]
            : vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs2);
    vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd = (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____Vcellinp__regfile_inst__write_enable)) 
                                                  << 0x25U) 
                                                 | (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_rd_data)) 
                                                     << 5U) 
                                                    | (QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_instr[1U] 
                                                                          >> 0x16U))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
        = ((0xfffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
           | (0xfffff000U & (0x88000000U | ((0x7c00000U 
                                             & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                << 0xfU)) 
                                            | ((0x3e0000U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   << 2U)) 
                                               | (0x1f000U 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                     >> 8U)))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] = 1U;
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
        = ((0xfffff000U & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
           | (IData)(((((QData)((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                         >> 0x14U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out))) 
                      >> 0x20U)));
    if ((0x73U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        if ((0U != (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                          >> 0xcU)))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
                   | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                ? 0x2eU : 0x2dU) : 
                           ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                             ? 0x2cU : 0x31U)) : ((0x2000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                   ? 
                                                  ((0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 0x2bU
                                                    : 0x2aU)
                                                   : 
                                                  ((0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 0x29U
                                                    : 0x31U))) 
                      << 0x1bU));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
                = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                   ? 0x2eU : 0x2dU)
                               : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                   ? 0x2cU : 0x31U))
                           : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                   ? 0x2bU : 0x2aU)
                               : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                   ? 0x29U : 0x31U))) 
                         >> 5U));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[0U] 
                = (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                   >> 0x14U);
        } else {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
                = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
                   | (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                               >> 0x14U)) ? 0x27U : 
                       ((1U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                >> 0x14U)) ? 0x28U : 
                        ((0x302U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                     >> 0x14U)) ? 0x2fU
                          : ((0x105U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                         >> 0x14U))
                              ? 0x30U : 0x31U)))) << 0x1bU));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
                = (1U & (((0U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                  >> 0x14U)) ? 0x27U
                           : ((1U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                      >> 0x14U)) ? 0x28U
                               : ((0x302U == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                              >> 0x14U))
                                   ? 0x2fU : ((0x105U 
                                               == (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x14U))
                                               ? 0x30U
                                               : 0x31U)))) 
                         >> 5U));
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[0U] = 0U;
        }
    } else if ((0x13U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                    ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 0x17U : 0x16U) : ((0x1000U 
                                                 & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x19U))
                                                  ? 0x19U
                                                  : 0x1aU)
                                                 : 0x15U))
                    : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 0x14U : 0x13U) : ((0x1000U 
                                                 & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                 ? 0x18U
                                                 : 0x12U))) 
                  << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                       ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 0x17U : 0x16U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                      >> 0x19U))
                                                     ? 0x19U
                                                     : 0x1aU)
                                                    : 0x15U))
                       : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 0x14U : 0x13U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 0x18U
                                                    : 0x12U))) 
                     >> 5U));
        if (((1U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                           >> 0xcU))) | (5U == (7U 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0xcU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[0U] 
                = (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                            >> 0x14U));
        }
    } else if ((0x33U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                    ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 0x24U : 0x23U) : ((0x1000U 
                                                 & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                 ? 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x19U))
                                                  ? 0x21U
                                                  : 0x22U)
                                                 : 0x20U))
                    : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 0x1fU : 0x1eU) : ((0x1000U 
                                                 & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                 ? 0x1dU
                                                 : 
                                                ((0U 
                                                  == 
                                                  (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x19U))
                                                  ? 0x1bU
                                                  : 0x1cU)))) 
                  << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                       ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 0x24U : 0x23U) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                      >> 0x19U))
                                                     ? 0x21U
                                                     : 0x22U)
                                                    : 0x20U))
                       : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 0x1fU : 0x1eU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                    ? 0x1dU
                                                    : 
                                                   ((0U 
                                                     == 
                                                     (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                      >> 0x19U))
                                                     ? 0x1bU
                                                     : 0x1cU)))) 
                     >> 5U));
    } else if ((3U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                    ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                    ? 0xeU : 0xdU))
                    : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 0x31U : 0xcU) : ((0x1000U 
                                                & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                ? 0xbU
                                                : 0xaU))) 
                  << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                       ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                       ? 0xeU : 0xdU))
                       : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 0x31U : 0xcU) : ((0x1000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                                   ? 0xbU
                                                   : 0xaU))) 
                     >> 5U));
    } else if ((0x23U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                 >> 0xcU))) ? 0xfU : 
                   ((1U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                  >> 0xcU))) ? 0x10U
                     : ((2U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                      >> 0xcU))) ? 0x11U
                         : 0x31U))) << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0xcU))) ? 0xfU
                       : ((1U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                        >> 0xcU))) ? 0x10U
                           : ((2U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                            >> 0xcU)))
                               ? 0x11U : 0x31U))) >> 5U));
    } else if ((0x63U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                    ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                            ? 9U : 8U) : ((0x1000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                           ? 7U : 6U))
                    : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                        ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                    ? 5U : 4U))) << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0x4000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                       ? ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                               ? 9U : 8U) : ((0x1000U 
                                              & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                              ? 7U : 6U))
                       : ((0x2000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                           ? 0x31U : ((0x1000U & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr)
                                       ? 5U : 4U))) 
                     >> 5U));
    } else if ((0x37U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = (0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]);
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] = 0U;
    } else if ((0x17U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = (0x8000000U | (0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] = 0U;
    } else if ((0x6fU == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = (0x10000000U | (0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] = 0U;
    } else if ((0x67U == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                 >> 0xcU))) ? 3U : 0x31U) 
                  << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0xcU))) ? 3U
                       : 0x31U) >> 5U));
    } else if ((0xfU == (0x7fU & vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
            = ((0x7ffffffU & vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U]) 
               | (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                 >> 0xcU))) ? 0x25U
                    : ((1U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                     >> 0xcU))) ? 0x26U
                        : 0x31U)) << 0x1bU));
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
            = (1U & (((0U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                    >> 0xcU))) ? 0x25U
                       : ((1U == (7U & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                        >> 0xcU))) ? 0x26U
                           : 0x31U)) >> 5U));
    }
    if ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U])) {
        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
                    if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
    } else if ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                >> 0x1fU)) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                    ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                    ? ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op = 1U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                                      < vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1, vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1, 
                                                          (0x1fU 
                                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)))))
            : ((4U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           >> (0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2))
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           << (0x1fU & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)))
                    : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           ^ vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           | vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)))
                : ((2U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           & vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           - vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2))
                    : ((1U & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_op))
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2
                        : (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_rs1 
                           + vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__op2)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value 
        = ((1U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U])
            ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
            : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                              ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                  ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                      ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                      : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                    ? ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result
                            : ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                                ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                        ? ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch)
                            ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                            ? ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                ? ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc)
                                : ((IData)(4U) + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc))
                            : ((0x8000000U & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                ? (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_pc 
                                   + vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U])
                                : vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[0U]))))));
    tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____VdfgTmp_h0f2abe94__0 
        = ((2U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
                             << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
                                       >> 0x1bU)))) 
           | (3U == (0x3fU & ((vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[2U] 
                               << 5U) | (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__instr_packed[1U] 
                                         >> 0x1bU)))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch = 0U;
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) {
        vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch 
            = (1U & ((~ vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[2U]) 
                     & ((~ (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                            >> 0x1fU)) & ((0x40000000U 
                                           & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                           ? (IData)(
                                                     ((0U 
                                                       == 
                                                       (0x30000000U 
                                                        & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])) 
                                                      & ((0x8000000U 
                                                          & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                                          ? 
                                                         (~ vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                                          : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)))
                                           : ((vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                               >> 0x1dU) 
                                              & ((0x10000000U 
                                                  & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                                  ? 
                                                 ((0x8000000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                                   ? 
                                                  (~ vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                                   : vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                                  : 
                                                 ((0x8000000U 
                                                   & vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U])
                                                   ? 
                                                  (0U 
                                                   != vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result)
                                                   : 
                                                  (0U 
                                                   == vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__alu_result))))))));
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_jump_addr 
        = ((IData)(tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____VdfgTmp_h0f2abe94__0)
            ? (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__imm_out 
               + vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_pc)
            : 0U);
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in 
        = ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__load_use_hazard)
            ? 1U : ((((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                      & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__take_branch)) 
                     | (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_jump))
                     ? 2U : 0U));
    vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd = 
        (((QData)((IData)((1U & (~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_branch) 
                                    | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__is_store) 
                                       | (0U == (0x1fU 
                                                 & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                    >> 0x16U))))))))) 
          << 0x25U) | (((QData)((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__execute_inst__DOT__rd_value)) 
                        << 5U) | (QData)((IData)((0x1fU 
                                                  & (vlSelf->tb_top_cpu__DOT__dut__DOT__id_ex_instr[1U] 
                                                     >> 0x16U))))));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out 
        = ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_in))
            ? 1U : ((IData)(tb_top_cpu__DOT__dut__DOT__decode_inst__DOT____VdfgTmp_h0f2abe94__0)
                     ? 2U : 0U));
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd 
        = ((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                            >> 0xfU))) ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
           [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                      >> 0xfU))]);
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_used) {
        if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd 
                       >> 0x25U)) & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd)) 
                                     == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0xfU)))) 
             & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                >> 0xfU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0xfU)))) 
                    & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0xfU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0xfU)))) 
                    & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0xfU))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs1_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd 
                           >> 5U));
        }
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd 
        = ((0U == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                            >> 0x14U))) ? 0U : vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__regfile_inst__DOT__regs
           [(0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                      >> 0x14U))]);
    if (vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_used) {
        if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd 
                       >> 0x25U)) & ((0x1fU & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd)) 
                                     == (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                  >> 0x14U)))) 
             & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                >> 0x14U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__ex_mem_fwd 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x14U)))) 
                    & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0x14U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__mem_wb_fwd 
                           >> 5U));
        } else if ((((IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd 
                              >> 0x25U)) & ((0x1fU 
                                             & (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd)) 
                                            == (0x1fU 
                                                & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                                   >> 0x14U)))) 
                    & (0U != (0x1fU & (vlSelf->tb_top_cpu__DOT__dut__DOT__if_id_instr 
                                       >> 0x14U))))) {
            vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd 
                = (IData)((vlSelf->tb_top_cpu__DOT__dut__DOT__wb_fwd 
                           >> 5U));
        }
    } else {
        vlSelf->tb_top_cpu__DOT__dut__DOT__decode_inst__DOT__rs2_fwd = 0U;
    }
    vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__can_request 
        = (1U & (~ ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__wb_state) 
                    | ((IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__fetch_inst__DOT__pending_valid) 
                       | ((1U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)) 
                          | (2U == (IData)(vlSelf->tb_top_cpu__DOT__dut__DOT__decode_backwards_out)))))));
}
