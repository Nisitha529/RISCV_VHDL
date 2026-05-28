// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu__Syms.h"
#include "Vtb_mcu___024root.h"

VL_ATTR_COLD void Vtb_mcu___024root___eval_initial__TOP(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h44f0c869__0;
    // Body
    __Vtemp_h44f0c869__0[0U] = 0x2e766364U;
    __Vtemp_h44f0c869__0[1U] = 0x5f6d6375U;
    __Vtemp_h44f0c869__0[2U] = 0x7462U;
    vlSymsp->_vm_contextp__->dumpfile(VL_CVT_PACK_STR_NW(3, __Vtemp_h44f0c869__0));
    vlSymsp->_traceDumpOpen();
    VL_READMEM_N(true, 32, 8192, 0, std::string{"init.mem"}
                 ,  &(vlSelf->tb_mcu__DOT__dut__DOT__ram__DOT__memory)
                 , 0, ~0ULL);
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__stl(Vtb_mcu___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_mcu___024root___eval_triggers__stl(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op));
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_mcu___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

extern const VlUnpacked<CData/*2:0*/, 128> Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0;

VL_ATTR_COLD void Vtb_mcu___024root___stl_sequent__TOP__0(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___stl_sequent__TOP__0\n"); );
    // Init
    IData/*20:0*/ tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0;
    tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 = 0;
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_active 
        = ((0U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
           & ((1U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
              & ((2U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                 | ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                    | ((4U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state) 
                       | (5U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__uart_tx_module__DOT__tx_state))))));
    vlSelf->tb_mcu__DOT__segments_select = vlSelf->tb_mcu__DOT__dut__DOT__wb_segments__DOT__segments_select_reg;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb = 0U;
    if (((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status)) 
         & (0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                            >> 0x16U))))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__forward_valid_comb 
            = (1U & ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])
                      ? (IData)(((0U == (0xc0000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) 
                                 & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                        >> 0x1dU)) 
                                    | (IData)((0U == 
                                               (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U]))))))
                      : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1fU) ? (IData)((0U != 
                                               (0x70000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])))
                          : (IData)((0U == (0x60000000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U]))))));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_fault_status_comb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_load)
            ? 6U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__active_is_store)
                     ? 8U : 0U));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__response_valid 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.ack) 
              | (IData)(vlSymsp->TOP__tb_mcu__DOT__dut__DOT__fetch_bus.err)));
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd = 
        (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn) 
          & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceVal)) 
         | ((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn)) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed)
            ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__PALETTE
           [(0xfU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data 
                     >> (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed)))]
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__buttons = ((0x10U 
                                               & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__4__KET____DOT__button_sync__DOT__stages) 
                                                  << 3U)) 
                                              | ((8U 
                                                  & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__3__KET____DOT__button_sync__DOT__stages) 
                                                     << 2U)) 
                                                 | ((4U 
                                                     & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__2__KET____DOT__button_sync__DOT__stages) 
                                                        << 1U)) 
                                                    | ((2U 
                                                        & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__1__KET____DOT__button_sync__DOT__stages)) 
                                                       | (1U 
                                                          & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__button_conditioning__BRA__0__KET____DOT__button_sync__DOT__stages) 
                                                             >> 1U))))));
    if ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
        if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause 
                = ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))
                    ? 0U : 3U);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0xbU;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 7U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & ((~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status) 
                         >> 2U)) & (IData)((3U != (3U 
                                                   & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))))));
    } else {
        if ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause 
                    = ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))
                        ? 6U : 5U);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
            } else if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 4U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_rd_data;
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 2U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
            }
        } else if ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
            if ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_pc;
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval 
                    = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_next_pc;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_cause = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__exception_tval = 0U;
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__pipeline_exception 
            = (1U & (IData)((0U != (6U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)))));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__writes_rd_normal 
        = (1U & ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U])
                  ? (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))))))
                  : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                              : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
        = ((0x300U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus
            : ((0x304U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie
                : ((0x305U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtvec
                    : ((0x341U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mepc
                        : ((0x342U == (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mcause
                            : ((0x343U == (0xfffU & 
                                           vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                                ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mtval
                                : ((0x344U == (0xfffU 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mip
                                    : 0U)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr 
        = (IData)((((0x40000000U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U]) 
                   & ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                       ? (IData)((0x18000000U != (0x18000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])))
                       : (IData)((0U != (0x18000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U]))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target 
        = (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
           + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]);
    __Vtableidx2 = (0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type 
        = Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0[__Vtableidx2];
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__access_misaligned 
        = (1U & ((~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U]) 
                 & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                     >> 0x1fU) ? (IData)(((0U == (0x70000000U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) 
                                          & ((0x8000000U 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                              ? (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data))
                                              : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)))
                     : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                         >> 0x1eU) & ((0x20000000U 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                       ? ((0x10000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                                           ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                           : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                                  >> 0x1bU)) 
                                              & (0U 
                                                 != 
                                                 (3U 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data))))
                                       : (IData)(((0x18000000U 
                                                   == 
                                                   (0x18000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch 
        = ((~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U]) 
           & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                  >> 0x1fU)) & ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                 ? (IData)(((0U == 
                                             (0x30000000U 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) 
                                            & ((0x8000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                   >= vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                   < vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data))))
                                 : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                     >> 0x1dU) & ((0x10000000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                   ? 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   VL_GTES_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                    : 
                                                   VL_LTS_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data))
                                                   : 
                                                  ((0x8000000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                                    ? 
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                    != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)
                                                    : 
                                                   (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                                    == vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data)))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 0U;
    if ((1U & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U]))) {
        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                    }
                } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_load = 1U;
                }
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 1U;
                    }
                }
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch = 1U;
            }
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr = 1U;
                        }
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump = 1U;
                    }
                }
            }
        }
        if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                    }
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
            if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_store = 1U;
                    }
                }
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        } else if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                             >> 0x1dU)))) {
            if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm = 1U;
            }
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_h8f4b082b__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x2fU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hc0a4638a__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x27U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT____VdfgExtracted_hcb080270__0 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
           & (0x28U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U] 
                                  << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                            >> 0x1bU)))));
    vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt 
        = (vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtime 
           >= vlSelf->tb_mcu__DOT__dut__DOT__wb_timer__DOT__mtimecmp);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_buffer_empty 
        = ((0U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
           | ((1U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
              | ((2U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
                 & ((3U == vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state) 
                    | (4U != vlSelf->tb_mcu__DOT__dut__DOT__wb_uart__DOT__tx_state)))));
    __Vtableidx1 = (0x7fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type 
        = Vtb_mcu__ConstPool__TABLE_h1e7fd68f_0[__Vtableidx1];
    tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
        = (0x188000U | ((0x7c00U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    << 3U)) | ((0x3e0U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xaU)) 
                                               | (0x1fU 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__store_data_comb 
        = ((0xfU == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                               << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                         >> 0x1bU))))
            ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                       << 0x18U) : (0xff0000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                                                 << 0x10U)))
                : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (0xff00U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                                  << 8U)) : (0xffU 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data)))
            : ((0x10U == (0x3fU & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U] 
                                    << 5U) | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                                              >> 0x1bU))))
                ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data 
                       << 0x10U) : (0xffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data))
                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_source_data));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
    } else if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                >> 0x1fU)) {
        if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                = ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                    ? 0xfU : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                               ? 0xcU : 3U));
        }
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store 
            = (IData)((0U == (0x70000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])));
    } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
        if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
            if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                              >> 0x1bU)))) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 1U;
                }
                if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                        = ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                ? 8U : 4U) : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                               ? 2U
                                               : 1U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 1U;
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                        = ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? 0xcU : 3U);
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                    = ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                        ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                ? 8U : 4U) : ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                               ? 2U
                                               : 1U))
                        : 0xfU);
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load 
                = (1U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                         >> 0x1cU));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb 
                = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                    ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U])
                        ? ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                            ? 0xcU : 3U) : ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                             ? ((1U 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                                 ? 8U
                                                 : 4U)
                                             : ((1U 
                                                 & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_rd_data)
                                                 ? 2U
                                                 : 1U)))
                    : 0xfU);
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U] 
                          >> 0x1cU)))) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
            }
        }
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__byte_sel_comb = 0xfU;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store = 0U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_use_imm)
            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]
            : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs2_data);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data;
    if (((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status)) 
         & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__is_csr))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_enable 
            = (IData)((((0x40000000U == (0xc0000000U 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])) 
                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U]) 
                       & ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                           ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                               ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) & 
                                  (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                               : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                      >> 0x1bU)) | 
                                  (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)))
                           : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                               ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                   ? (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)
                                   : (0U != vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                               : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                                  >> 0x1bU)))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_write_data 
            = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U])
                ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U] 
                    >> 0x1fU) ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data
                    : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                        ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                            ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data
                                    : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)))
                                : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data)
                                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                            : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       & (~ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                                    : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data 
                                       | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data))
                                : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U])
                                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_source_data
                                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data)))
                        : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data))
                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_read_data);
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                          >> 0x14U)))));
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])) {
        if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
             >> 0x1fU)) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                              >> 0x1dU)))) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                        }
                    }
                }
            }
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            } else if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 0U;
            }
        } else {
            if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
            } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                    }
                } else if ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_system_or_csr = 1U;
                }
            }
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                  >> 0x1cU)))) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 3U;
                        }
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
                        = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? 4U : 8U) : ((0x8000000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                               ? 7U
                                               : 5U));
                }
            }
        }
        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                      >> 0x1fU)))) {
            if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                          >> 0x1eU)))) {
                if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                    if ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
                        if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                                      >> 0x1bU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i = 1U;
                        }
                    }
                }
            }
        }
    } else if ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU)) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 0xaU : 9U) : ((0x8000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                             ? 6U : 2U))
                    : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 0U : 8U) : ((0x8000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                           ? 7U : 6U)))
                : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 3U : 4U) : ((0x8000000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                           ? 5U : 0xaU))
                    : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? 9U : 0U) : 0U)));
    } else if ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? 0U : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                         ? 0U : 0xaU));
    } else if ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op 
            = ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                ? 9U : 2U);
    } else if ((1U & (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                         >> 0x1cU)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_or_jump_redirect 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i) 
           | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump) 
              | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
                 & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_fence_i)
            ? ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc)
            : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump)
                ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jalr)
                    ? (0xfffffffeU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                      + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))
                    : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target)
                : (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
                    & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))
                    ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__branch_target
                    : ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__timer_interrupt_taken 
        = ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mstatus 
            >> 3U) & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__csr_mie 
                       >> 7U) & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__timer_interrupt)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out 
        = ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
            ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? 0U : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                         ? 0U : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x1fU))) 
                                  << 0x15U) | ((0x100000U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction) 
                                                  | ((0x800U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x14U))))))))
            : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (0xfffff000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xdU) 
                       | ((0x1000U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      >> 0x13U)) | 
                          ((0x800U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                      << 4U)) | ((0x7e0U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 7U)))))))
                : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_type))
                    ? (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | ((0xfe0U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U)) | (0x1fU 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 7U))))
                    : (((- (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x1fU))) << 0xcU) 
                       | (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                          >> 0x14U)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_load) 
           | (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__is_store));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result 
        = ((8U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
            ? ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                ? 0U : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                         ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                             ? 0U : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                                      < vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                                      ? 1U : 0U)) : 
                        ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                          ? (VL_LTS_III(32, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                              ? 1U : 0U) : VL_SHIFTRS_III(32,32,5, vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data, 
                                                          (0x1fU 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))))
            : ((4U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                ? ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           >> (0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2))
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           << (0x1fU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))
                    : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           ^ vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           | vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))
                : ((2U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                    ? ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           - vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2))
                    : ((1U & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op))
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2
                        : (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_rs1_data 
                           + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_op2)))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__rd_value_comb 
        = ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U])
            ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                      : ((0x8000000U 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                          ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                              ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                          : 0U)))) : 
               ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                 ? 0U : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                          ? ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? 0U : ((0x8000000U & 
                                       vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                       ? 0U : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                                ? 0U
                                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                          : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                              ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result))))
            : ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U] 
                >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                              ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                  ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                              : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                  ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                      ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                  : ((0x10000000U & 
                                      vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                      ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                          ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                                      : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                    ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result
                            : ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                                ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)))
                    : ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                        ? ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch)
                            ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__alu_result)
                        : ((0x10000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                            ? ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc)
                                : ((IData)(4U) + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc))
                            : ((0x8000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U])
                                ? (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_pc 
                                   + vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U])
                                : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U]))))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
        = ((tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
        = (tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned = 0U;
    if ((((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_jump) 
          | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__is_branch) 
             & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__take_branch))) 
         & (0U != (3U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__next_pc_comb)))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_inst__DOT__fetch_misaligned = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
        = (IData)((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                     >> 0x14U))) << 0x20U) 
                   | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out))));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
        = ((tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
            << 0xcU) | (IData)(((((QData)((IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))) 
                                  << 0x20U) | (QData)((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__hazard_instruction_decoder__DOT__imm_out))) 
                                >> 0x20U)));
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
        = (tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__instruction_decoder_inst__DOT____VdfgExtracted_h48f34a21__0 
           >> 0x14U);
    if ((0x40U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((0x20U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        if ((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                          >> 0xcU)))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xf801ffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x14U))
                                        ? 0x27U : (
                                                   (1U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x28U
                                                    : 
                                                   ((0x302U 
                                                     == 
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x14U))
                                                     ? 0x2fU
                                                     : 
                                                    ((0x105U 
                                                      == 
                                                      (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0x14U))
                                                      ? 0x30U
                                                      : 0x31U)))) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x14U))
                                           ? 0x27U : 
                                          ((1U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x14U))
                                            ? 0x28U
                                            : ((0x302U 
                                                == 
                                                (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x14U))
                                                ? 0x2fU
                                                : (
                                                   (0x105U 
                                                    == 
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x14U))
                                                    ? 0x30U
                                                    : 0x31U)))) 
                                         >> 5U));
                        } else if ((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                            if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0x70000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                } else {
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0x68000000U 
                                           | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        = (0xffc1ffffU 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                        = (0x1fU & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xfU));
                                }
                            } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xfU));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0x60000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0xffc1ffffU 
                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                    = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xfU));
                            } else {
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    = (0x88000000U 
                                       | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                            }
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                                   | (((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x2bU
                                            : 0x2aU)
                                        : ((0x1000U 
                                            & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                            ? 0x29U
                                            : 0x31U)) 
                                      << 0x1bU));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                                = (1U & (((0x2000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x2bU
                                               : 0x2aU)
                                           : ((0x1000U 
                                               & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                               ? 0x29U
                                               : 0x31U)) 
                                         >> 5U));
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x10000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0xfffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                               | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0xcU)))
                                    ? 3U : 0x31U) << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 3U : 0x31U) 
                                     >> 5U));
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 9U : 8U) : 
                                   ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                     ? 7U : 6U)) : 
                               ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                 ? 0x31U : ((0x1000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                             ? 5U : 4U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 9U : 8U)
                                       : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 7U : 6U))
                                   : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x31U : ((0x1000U 
                                                   & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                   ? 5U
                                                   : 4U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x20U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0xfffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | ((((((((((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))) 
                                      | (0x100U == 
                                         ((0x3f8U & 
                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x16U)) 
                                          | (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                     | (1U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (2U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (3U == ((0x3f8U 
                                              & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                 >> 0x16U)) 
                                             | (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU))))) 
                                  | (4U == ((0x3f8U 
                                             & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0x16U)) 
                                            | (7U & 
                                               (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU))))) 
                                 | (5U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))) 
                                | (0x105U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))))
                                ? ((0U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x1bU : ((0x100U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x1cU
                                                : (
                                                   (1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                : ((6U == ((0x3f8U 
                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0x16U)) 
                                           | (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU))))
                                    ? 0x23U : ((7U 
                                                == 
                                                ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))
                                                ? 0x24U
                                                : 0x31U))) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & ((((((((((0U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))) 
                                         | (0x100U 
                                            == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                        | (1U == ((0x3f8U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0x16U)) 
                                                  | (7U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0xcU))))) 
                                       | (2U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU))))) 
                                      | (3U == ((0x3f8U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0x16U)) 
                                                | (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU))))) 
                                     | (4U == ((0x3f8U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0x16U)) 
                                               | (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU))))) 
                                    | (5U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))) 
                                   | (0x105U == ((0x3f8U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0x16U)) 
                                                 | (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))))
                                   ? ((0U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x1bU : ((0x100U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x1cU
                                                   : 
                                                  ((1U 
                                                    == 
                                                    ((0x3f8U 
                                                      & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                         >> 0x16U)) 
                                                     | (7U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0xcU))))
                                                    ? 0x1dU
                                                    : 
                                                   ((2U 
                                                     == 
                                                     ((0x3f8U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0x16U)) 
                                                      | (7U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0xcU))))
                                                     ? 0x1eU
                                                     : 
                                                    ((3U 
                                                      == 
                                                      ((0x3f8U 
                                                        & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                           >> 0x16U)) 
                                                       | (7U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0xcU))))
                                                      ? 0x1fU
                                                      : 
                                                     ((4U 
                                                       == 
                                                       ((0x3f8U 
                                                         & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                            >> 0x16U)) 
                                                        | (7U 
                                                           & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                              >> 0xcU))))
                                                       ? 0x20U
                                                       : 
                                                      ((5U 
                                                        == 
                                                        ((0x3f8U 
                                                          & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                             >> 0x16U)) 
                                                         | (7U 
                                                            & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                               >> 0xcU))))
                                                        ? 0x21U
                                                        : 0x22U)))))))
                                   : ((6U == ((0x3f8U 
                                               & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                  >> 0x16U)) 
                                              | (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU))))
                                       ? 0x23U : ((7U 
                                                   == 
                                                   ((0x3f8U 
                                                     & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                        >> 0x16U)) 
                                                    | (7U 
                                                       & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                          >> 0xcU))))
                                                   ? 0x24U
                                                   : 0x31U))) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0xf83fffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                       | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                         >> 0xcU)))
                            ? 0xfU : ((1U == (7U & 
                                              (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                               >> 0xcU)))
                                       ? 0x10U : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                       >> 0xcU)))
                                                   ? 0x11U
                                                   : 0x31U))) 
                          << 0x1bU));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                    = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0xcU)))
                               ? 0xfU : ((1U == (7U 
                                                 & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                    >> 0xcU)))
                                          ? 0x10U : 
                                         ((2U == (7U 
                                                  & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                     >> 0xcU)))
                                           ? 0x11U : 0x31U))) 
                             >> 5U));
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((0x10U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x8000000U | (0x7ffffffU 
                                         & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xffc00fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                if ((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                               | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                    ? 0x17U : 0x16U) 
                                  << 0x1bU));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                            = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                       ? 0x17U : 0x16U) 
                                     >> 5U));
                    } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                        if ((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                    >> 0x19U))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xc8000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else if ((0x20U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                              >> 0x19U))) {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0xd0000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                                = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                            >> 0x14U));
                        } else {
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                = (0x88000000U | (0x7ffffffU 
                                                  & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                        }
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xa8000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                    }
                } else if ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x14U : 0x13U) << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x14U : 0x13U) 
                                 >> 5U));
                } else if ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    if ((0U == (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                >> 0x19U))) {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0x14U));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0xc0000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] 
                            = (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                        >> 0x14U));
                    } else {
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                            = (0x88000000U | (0x7ffffffU 
                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    }
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x90000000U | (0x7ffffffU 
                                          & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((8U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0xf8000fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                           | (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                             >> 0xcU)))
                                ? 0x25U : ((1U == (7U 
                                                   & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                      >> 0xcU)))
                                            ? 0x26U
                                            : 0x31U)) 
                              << 0x1bU));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                        = (1U & (((0U == (7U & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                >> 0xcU)))
                                   ? 0x25U : ((1U == 
                                               (7U 
                                                & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction 
                                                   >> 0xcU)))
                                               ? 0x26U
                                               : 0x31U)) 
                                 >> 5U));
                } else {
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                        = (0x88000000U | (0xfffU & 
                                          vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
                }
            } else {
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                    = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
                vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
            }
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else if ((4U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
    } else if ((2U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
        if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0xfffe0fffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]);
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = ((0x7ffffffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]) 
                   | (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                        ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? 0x31U : ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                        ? 0xeU : 0xdU))
                        : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                            ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0x31U : 0xcU) : (
                                                   (0x1000U 
                                                    & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                                    ? 0xbU
                                                    : 0xaU))) 
                      << 0x1bU));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] 
                = (1U & (((0x4000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                           ? ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? 0x31U : ((0x1000U 
                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                           ? 0xeU : 0xdU))
                           : ((0x2000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                               ? ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                   ? 0x31U : 0xcU) : 
                              ((0x1000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_instruction)
                                ? 0xbU : 0xaU))) >> 5U));
        } else {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
        }
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[0U] = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
            = (0x88000000U | (0xfffU & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U] = 1U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U] = 0U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__valid_memory_op 
        = ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status)) 
           & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT____VdfgTmp_he475b9dc__0));
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used 
            = (1U & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used 
            = (1U & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                                    ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U])))
                              : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                                   >> 0x1dU))));
    }
    if ((1U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U])) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used 
            = (1U & (IData)(((0U == (0xc0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])) 
                             & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1dU)) | (IData)(
                                                         (0U 
                                                          == 
                                                          (0x18000000U 
                                                           & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used 
            = (1U & ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                                        ? ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           & (IData)(
                                                     (0U 
                                                      != 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                                        : ((~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))))));
    } else {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used 
            = (1U & ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                      >> 0x1fU) ? ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                                    ? ((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                        >> 0x1dU) | (IData)(
                                                            (0x18000000U 
                                                             == 
                                                             (0x18000000U 
                                                              & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                                    : (IData)((0U == 
                                               (0x30000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U]))))
                      : ((0x40000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                          ? ((0x20000000U & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])
                              ? (IData)((0x18000000U 
                                         == (0x18000000U 
                                             & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))
                              : (~ (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                    >> 0x1cU))) : (
                                                   vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U] 
                                                   >> 0x1dU))));
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used 
            = (1U & (IData)(((0U != (0xe0000000U & 
                                     vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])) 
                             | (0x18000000U == (0x18000000U 
                                                & vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U])))));
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_used) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
            = ((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0x11U))) ? 0U : 
               vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0x11U))]);
        if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0x11U))) & (IData)(
                                                     (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                                                      >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0x11U))) & (IData)(
                                                            (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                                             >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0x11U))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs1_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected = 0U;
    if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_used) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
            = ((0U == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                >> 0xcU))) ? 0U : vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__register_file_inst__DOT__regs
               [(0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                          >> 0xcU))]);
        if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                               >> 0xcU))) & (IData)(
                                                    (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                                                     >> 0x25U))) 
             & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding)) 
                == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                             >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_forwarding 
                           >> 5U));
        } else if ((((0U != (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                      >> 0xcU))) & (IData)(
                                                           (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                                                            >> 0x25U))) 
                    & ((0x1fU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding)) 
                       == (0x1fU & (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__decoded_instruction[1U] 
                                    >> 0xcU))))) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__decode_inst__DOT__rs2_selected 
                = (IData)((vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__wb_forwarding 
                           >> 5U));
        }
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 0U;
    if ((0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_status))) {
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_ex_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__244__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__245__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__243__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__242__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__ex_mem_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__248__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__249__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__247__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__246__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs2 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs2_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs1 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__id_rs1_used;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__if_id_decoded_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_valid 
            = (0U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_status));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[0U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[2U] 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__mem_wb_instruction[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 0U;
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[0U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[0U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
            = vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[2U];
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__Vfuncout 
            = (1U & (IData)(((0x28U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))))
                                 : (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i) 
                                     >> 1U) | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__op_i))))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i 
            = (0x3fU & ((vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[2U] 
                         << 5U) | (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__instr[1U] 
                                   >> 0x1bU)));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__Vfuncout 
            = (1U & (IData)(((8U == (0x38U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))) 
                             & ((4U & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))
                                 ? (IData)((3U != (3U 
                                                   & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i))))
                                 : ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__op_i) 
                                    >> 1U)))));
        vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__Vfuncout 
            = ((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_load_op__252__Vfuncout) 
               | (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_csr_op__253__Vfuncout));
        if ((((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_valid) 
              & (IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__is_late_rd_producer__251__Vfuncout)) 
             & (0U != (0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                >> 0x16U))))) {
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs1) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
                              >> 0x11U)) == (0x1fU 
                                             & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                                >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 1U;
            }
            if (((IData)(vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_uses_rs2) 
                 & ((0x1fU & (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__consumer_instr[1U] 
                              >> 0xcU)) == (0x1fU & 
                                            (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__producer_instr[1U] 
                                             >> 0x16U))))) {
                vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout = 1U;
            }
        }
        if (vlSelf->__Vfunc_tb_mcu__DOT__dut__DOT__cpu__DOT__source_match_late_producer__250__Vfuncout) {
            vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard_raw = 1U;
        }
    }
}
