// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_mcu.h for the primary calling header

#include "verilated.h"

#include "Vtb_mcu___024root.h"

VL_ATTR_COLD void Vtb_mcu___024root___eval_initial__TOP(Vtb_mcu___024root* vlSelf);
VlCoroutine Vtb_mcu___024root___eval_initial__TOP__0(Vtb_mcu___024root* vlSelf);
VlCoroutine Vtb_mcu___024root___eval_initial__TOP__1(Vtb_mcu___024root* vlSelf);
VlCoroutine Vtb_mcu___024root___eval_initial__TOP__2(Vtb_mcu___024root* vlSelf);
VlCoroutine Vtb_mcu___024root___eval_initial__TOP__3(Vtb_mcu___024root* vlSelf);
VlCoroutine Vtb_mcu___024root___eval_initial__TOP__4(Vtb_mcu___024root* vlSelf);

void Vtb_mcu___024root___eval_initial(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial\n"); );
    // Body
    Vtb_mcu___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_mcu___024root___eval_initial__TOP__0(vlSelf);
    Vtb_mcu___024root___eval_initial__TOP__1(vlSelf);
    Vtb_mcu___024root___eval_initial__TOP__2(vlSelf);
    Vtb_mcu___024root___eval_initial__TOP__3(vlSelf);
    Vtb_mcu___024root___eval_initial__TOP__4(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op 
        = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_inst__DOT__launch_memory_op;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk = vlSelf->tb_mcu__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_mem 
        = vlSelf->tb_mcu__DOT__clk_mem;
    vlSelf->__Vtrigrprev__TOP__tb_mcu__DOT__clk_vga 
        = vlSelf->tb_mcu__DOT__clk_vga;
}

VL_INLINE_OPT VlCoroutine Vtb_mcu___024root___eval_initial__TOP__0(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_mcu__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_mcu.sv", 
                                           123);
        vlSelf->tb_mcu__DOT__clk = (1U & (~ (IData)(vlSelf->tb_mcu__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_mcu___024root___eval_initial__TOP__1(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_mcu__DOT__clk_mem = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_mcu.sv", 
                                           128);
        vlSelf->tb_mcu__DOT__clk_mem = (1U & (~ (IData)(vlSelf->tb_mcu__DOT__clk_mem)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_mcu___024root___eval_initial__TOP__2(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_initial__TOP__2\n"); );
    // Body
    vlSelf->tb_mcu__DOT__clk_vga = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x4e20U, 
                                           "tb_mcu.sv", 
                                           133);
        vlSelf->tb_mcu__DOT__clk_vga = (1U & (~ (IData)(vlSelf->tb_mcu__DOT__clk_vga)));
    }
}

VL_INLINE_OPT void Vtb_mcu___024root___act_comb__TOP__0(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceRd = 
        (((IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn) 
          & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceVal)) 
         | ((~ (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst__VforceEn)) 
            & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__rst)));
}

void Vtb_mcu___024root___act_sequent__TOP__0(Vtb_mcu___024root* vlSelf);

void Vtb_mcu___024root___eval_act(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_act\n"); );
    // Body
    if ((vlSelf->__VactTriggered.at(1U) | vlSelf->__VactTriggered.at(5U))) {
        Vtb_mcu___024root___act_comb__TOP__0(vlSelf);
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        Vtb_mcu___024root___act_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

VL_INLINE_OPT void Vtb_mcu___024root___nba_sequent__TOP__1(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*18:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx = 0;
    SData/*9:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column = 0;
    SData/*9:0*/ __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row = 0;
    // Body
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column;
    __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx;
    if (((0x280U > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column)) 
         & (0x1e0U > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row)))) {
        __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
            = (0x7ffffU & ((IData)(1U) + vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx));
    }
    if ((0x31fU > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column))) {
        __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column 
            = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column)));
    } else {
        __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column = 0U;
        if ((0x20cU > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row))) {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row)));
        } else {
            __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row = 0U;
            __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx = 0U;
        }
    }
    vlSelf->tb_mcu__DOT__vga_blue = (0xfU & (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color));
    vlSelf->tb_mcu__DOT__vga_green = (0xfU & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color) 
                                              >> 4U));
    vlSelf->tb_mcu__DOT__vga_red = (0xfU & ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color) 
                                            >> 8U));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset;
    vlSelf->tb_mcu__DOT__vga_vsync = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync_delayed;
    vlSelf->tb_mcu__DOT__vga_hsync = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync_delayed;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__vga_read_pipeline;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset 
        = (0x1cU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
                    << 2U));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync_delayed 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync_delayed 
        = vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw 
        = ((0x280U > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column)) 
           & (0x1e0U > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__color 
        = ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__draw_delayed)
            ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__PALETTE
           [(0xfU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_read_data 
                     >> (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_offset_delayed)))]
            : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__vga_read_pipeline 
        = ((0x95ffU >= (0xffffU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
                                   >> 3U))) ? vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vga_memory__DOT__memory
           [(0xffffU & (vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
                        >> 3U))] : 0U);
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__pixel_idx;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__vsync 
        = ((0x1eaU > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row)) 
           | (0x1ecU <= (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__hsync 
        = ((0x290U > (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column)) 
           | (0x2f0U <= (IData)(vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column)));
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__row 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__row;
    vlSelf->tb_mcu__DOT__dut__DOT__wb_vga__DOT__column 
        = __Vdly__tb_mcu__DOT__dut__DOT__wb_vga__DOT__column;
}

VL_INLINE_OPT void Vtb_mcu___024root___nba_comb__TOP__2(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___nba_comb__TOP__2\n"); );
    // Body
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 0U;
    if ((2U == ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_inst__DOT__redirect_taken)
                 ? 2U : 0U))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__writeback_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 2U;
    } else if ((2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_backwards_out))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in 
            = vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__execute_jump_address_out;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 2U;
    } else if ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__memory_backwards_out))) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 1U;
    } else if (vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__late_result_use_hazard) {
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_jump_address_in = 0U;
        vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in = 1U;
    }
    vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__can_request 
        = (1U & (~ ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__wb_state) 
                    | ((IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_inst__DOT__pending_valid) 
                       | ((1U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)) 
                          | (2U == (IData)(vlSelf->tb_mcu__DOT__dut__DOT__cpu__DOT__fetch_backwards_in)))))));
}

void Vtb_mcu___024root___nba_sequent__TOP__0(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___nba_sequent__TOP__2(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___nba_comb__TOP__0(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___nba_sequent__TOP__3(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___nba_comb__TOP__1(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___nba_comb__TOP__4(Vtb_mcu___024root* vlSelf);

void Vtb_mcu___024root___eval_nba(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_mcu___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(3U)) {
        Vtb_mcu___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        Vtb_mcu___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtb_mcu___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[7U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        Vtb_mcu___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[8U] = 1U;
    }
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_mcu___024root___nba_comb__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[9U] = 1U;
    }
    if ((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U))) {
        Vtb_mcu___024root___nba_comb__TOP__2(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(5U))) {
        Vtb_mcu___024root___act_comb__TOP__0(vlSelf);
    }
    if ((vlSelf->__VnbaTriggered.at(1U) | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_mcu___024root___nba_comb__TOP__4(vlSelf);
    }
}

void Vtb_mcu___024root___eval_triggers__act(Vtb_mcu___024root* vlSelf);
void Vtb_mcu___024root___timing_commit(Vtb_mcu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__act(Vtb_mcu___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_mcu___024root___timing_resume(Vtb_mcu___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_mcu___024root___dump_triggers__nba(Vtb_mcu___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_mcu___024root___eval(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval\n"); );
    // Init
    VlTriggerVec<6> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtb_mcu___024root___eval_triggers__act(vlSelf);
            Vtb_mcu___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_mcu___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_mcu.sv", 3, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_mcu___024root___timing_resume(vlSelf);
                Vtb_mcu___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_mcu___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_mcu.sv", 3, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_mcu___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_mcu___024root___timing_commit(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_h6b8a7bc3__0.commit("@(posedge tb_mcu.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(5U))))) {
        vlSelf->__VtrigSched_h6b8a7882__0.commit("@(negedge tb_mcu.clk)");
    }
}

void Vtb_mcu___024root___timing_resume(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(4U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_h6b8a7bc3__0.resume("@(posedge tb_mcu.clk)");
    }
    if (vlSelf->__VactTriggered.at(5U)) {
        vlSelf->__VtrigSched_h6b8a7882__0.resume("@(negedge tb_mcu.clk)");
    }
}

#ifdef VL_DEBUG
void Vtb_mcu___024root___eval_debug_assertions(Vtb_mcu___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_mcu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_mcu___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
