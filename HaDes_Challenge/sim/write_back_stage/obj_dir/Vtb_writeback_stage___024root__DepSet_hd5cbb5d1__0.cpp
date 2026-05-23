// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_writeback_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_writeback_stage___024root.h"

VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__0(Vtb_writeback_stage___024root* vlSelf);
VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__1(Vtb_writeback_stage___024root* vlSelf);
VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__2(Vtb_writeback_stage___024root* vlSelf);

void Vtb_writeback_stage___024root___eval_initial(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vm_traceActivity[1U] = 1U;
    Vtb_writeback_stage___024root___eval_initial__TOP__0(vlSelf);
    Vtb_writeback_stage___024root___eval_initial__TOP__1(vlSelf);
    Vtb_writeback_stage___024root___eval_initial__TOP__2(vlSelf);
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__clk 
        = vlSelf->tb_writeback_stage__DOT__clk;
    vlSelf->__Vtrigrprev__TOP__tb_writeback_stage__DOT__rst 
        = vlSelf->tb_writeback_stage__DOT__rst;
}

VL_INLINE_OPT VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial__TOP__0\n"); );
    // Body
    vlSelf->tb_writeback_stage__DOT__clk = 0U;
    while (1U) {
        co_await vlSelf->__VdlySched.delay(0x1388U, 
                                           "tb_writeback_stage.sv", 
                                           12);
        vlSelf->tb_writeback_stage__DOT__clk = (1U 
                                                & (~ (IData)(vlSelf->tb_writeback_stage__DOT__clk)));
    }
}

VL_INLINE_OPT VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__1(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial__TOP__1\n"); );
    // Body
    vlSelf->tb_writeback_stage__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_ha16a72ed__0.trigger(
                                                       "@(posedge tb_writeback_stage.clk)", 
                                                       "tb_writeback_stage.sv", 
                                                       16);
    co_await vlSelf->__VtrigSched_ha16a72ed__0.trigger(
                                                       "@(posedge tb_writeback_stage.clk)", 
                                                       "tb_writeback_stage.sv", 
                                                       16);
    vlSelf->tb_writeback_stage__DOT__rst = 0U;
}

VL_INLINE_OPT VlCoroutine Vtb_writeback_stage___024root___eval_initial__TOP__2(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    std::string __Vtask_tb_writeback_stage__DOT__check__0__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__0__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__0__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__0__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__0__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__0__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__0__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__0__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__1__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__1__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__1__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__1__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__1__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__1__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__1__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__1__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__1__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__1__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__1__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__2__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__2__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__2__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__2__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__2__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__2__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__2__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__2__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__2__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__2__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__2__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__3__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__3__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__3__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__3__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__3__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__3__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__3__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__3__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__3__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__3__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__3__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__4__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__4__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__4__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__4__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__4__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__4__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__4__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__4__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__4__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__4__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__4__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__5__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__5__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__5__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__5__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__5__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__5__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__5__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__5__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__5__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__5__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__5__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__6__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__6__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__6__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__6__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__6__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__6__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__6__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__6__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__6__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__6__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__6__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__7__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__7__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__7__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__7__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__7__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__7__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__7__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__7__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__7__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__7__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__7__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__8__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__8__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__8__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__8__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__8__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__8__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__8__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__8__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__8__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__8__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__8__exp_addr = 0;
    std::string __Vtask_tb_writeback_stage__DOT__check__9__test_name;
    VlWide<3>/*64:0*/ __Vtask_tb_writeback_stage__DOT__check__9__instr;
    VL_ZERO_W(65, __Vtask_tb_writeback_stage__DOT__check__9__instr);
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__9__rd_val;
    __Vtask_tb_writeback_stage__DOT__check__9__rd_val = 0;
    CData/*0:0*/ __Vtask_tb_writeback_stage__DOT__check__9__exp_valid;
    __Vtask_tb_writeback_stage__DOT__check__9__exp_valid = 0;
    IData/*31:0*/ __Vtask_tb_writeback_stage__DOT__check__9__exp_data;
    __Vtask_tb_writeback_stage__DOT__check__9__exp_data = 0;
    CData/*4:0*/ __Vtask_tb_writeback_stage__DOT__check__9__exp_addr;
    __Vtask_tb_writeback_stage__DOT__check__9__exp_addr = 0;
    // Body
    vlSelf->tb_writeback_stage__DOT__source_data_in = 0U;
    vlSelf->tb_writeback_stage__DOT__program_counter_in = 0U;
    vlSelf->tb_writeback_stage__DOT__next_program_counter_in = 0U;
    vlSelf->tb_writeback_stage__DOT__external_interrupt_in = 0U;
    vlSelf->tb_writeback_stage__DOT__timer_interrupt_in = 0U;
    vlSelf->tb_writeback_stage__DOT__status_forwards_in = 0U;
    while (vlSelf->tb_writeback_stage__DOT__rst) {
        co_await vlSelf->__VtrigSched_h29cd0448__0.trigger(
                                                           "@([changed] tb_writeback_stage.rst)", 
                                                           "tb_writeback_stage.sv", 
                                                           100);
    }
    co_await vlSelf->__VtrigSched_ha16a72ed__0.trigger(
                                                       "@(posedge tb_writeback_stage.clk)", 
                                                       "tb_writeback_stage.sv", 
                                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       101);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_addr = 3U;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_data = 0x2aU;
    __Vtask_tb_writeback_stage__DOT__check__0__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__0__rd_val = 0x2aU;
    __Vtask_tb_writeback_stage__DOT__check__0__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__0__instr[1U] = 0xd8c00000U;
    __Vtask_tb_writeback_stage__DOT__check__0__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__0__test_name = 
        std::string{"ADD writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__0__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__0__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__0__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__0__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__0__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__0__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__0__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__0__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__0__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__0__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__0__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__0__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__0__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__0__test_name));
    __Vtask_tb_writeback_stage__DOT__check__1__exp_addr = 5U;
    __Vtask_tb_writeback_stage__DOT__check__1__exp_data = 0x64U;
    __Vtask_tb_writeback_stage__DOT__check__1__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__1__rd_val = 0x64U;
    __Vtask_tb_writeback_stage__DOT__check__1__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__1__instr[1U] = 0x91400000U;
    __Vtask_tb_writeback_stage__DOT__check__1__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__1__test_name = 
        std::string{"ADDI writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__1__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__1__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__1__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__1__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__1__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__1__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__1__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__1__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__1__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__1__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__1__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__1__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__1__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__1__test_name));
    __Vtask_tb_writeback_stage__DOT__check__2__exp_addr = 2U;
    __Vtask_tb_writeback_stage__DOT__check__2__exp_data = 0xdeadbeefU;
    __Vtask_tb_writeback_stage__DOT__check__2__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__2__rd_val = 0xdeadbeefU;
    __Vtask_tb_writeback_stage__DOT__check__2__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__2__instr[1U] = 0x60800000U;
    __Vtask_tb_writeback_stage__DOT__check__2__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__2__test_name = 
        std::string{"LW writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__2__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__2__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__2__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__2__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__2__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__2__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__2__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__2__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__2__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__2__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__2__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__2__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__2__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__2__test_name));
    __Vtask_tb_writeback_stage__DOT__check__3__exp_addr = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__exp_data = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__exp_valid = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__rd_val = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__instr[1U] = 0x78000000U;
    __Vtask_tb_writeback_stage__DOT__check__3__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__3__test_name = 
        std::string{"SB no write"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__3__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__3__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__3__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__3__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__3__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__3__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__3__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__3__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__3__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__3__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__3__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__3__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__3__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__3__test_name));
    __Vtask_tb_writeback_stage__DOT__check__4__exp_addr = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__exp_data = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__exp_valid = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__rd_val = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__instr[1U] = 0x20000000U;
    __Vtask_tb_writeback_stage__DOT__check__4__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__4__test_name = 
        std::string{"BEQ no write"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__4__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__4__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__4__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__4__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__4__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__4__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__4__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__4__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__4__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__4__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__4__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__4__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__4__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__4__test_name));
    __Vtask_tb_writeback_stage__DOT__check__5__exp_addr = 1U;
    __Vtask_tb_writeback_stage__DOT__check__5__exp_data = 0x1004U;
    __Vtask_tb_writeback_stage__DOT__check__5__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__5__rd_val = 0x1004U;
    __Vtask_tb_writeback_stage__DOT__check__5__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__5__instr[1U] = 0x10400000U;
    __Vtask_tb_writeback_stage__DOT__check__5__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__5__test_name = 
        std::string{"JAL writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__5__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__5__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__5__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__5__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__5__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__5__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__5__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__5__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__5__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__5__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__5__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__5__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__5__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__5__test_name));
    __Vtask_tb_writeback_stage__DOT__check__6__exp_addr = 0xaU;
    __Vtask_tb_writeback_stage__DOT__check__6__exp_data = 0x12345000U;
    __Vtask_tb_writeback_stage__DOT__check__6__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__6__rd_val = 0x12345000U;
    __Vtask_tb_writeback_stage__DOT__check__6__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__6__instr[1U] = 0x2800000U;
    __Vtask_tb_writeback_stage__DOT__check__6__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__6__test_name = 
        std::string{"LUI writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__6__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__6__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__6__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__6__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__6__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__6__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__6__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__6__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__6__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__6__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__6__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__6__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__6__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__6__test_name));
    __Vtask_tb_writeback_stage__DOT__check__7__exp_addr = 1U;
    __Vtask_tb_writeback_stage__DOT__check__7__exp_data = 0x500U;
    __Vtask_tb_writeback_stage__DOT__check__7__exp_valid = 1U;
    __Vtask_tb_writeback_stage__DOT__check__7__rd_val = 0x500U;
    __Vtask_tb_writeback_stage__DOT__check__7__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__7__instr[1U] = 0x48400300U;
    __Vtask_tb_writeback_stage__DOT__check__7__instr[2U] = 1U;
    __Vtask_tb_writeback_stage__DOT__check__7__test_name = 
        std::string{"CSRRW writes rd"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__7__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__7__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__7__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__7__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__7__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__7__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__7__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__7__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__7__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__7__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__7__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__7__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__7__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__7__test_name));
    __Vtask_tb_writeback_stage__DOT__check__8__exp_addr = 0U;
    __Vtask_tb_writeback_stage__DOT__check__8__exp_data = 0U;
    __Vtask_tb_writeback_stage__DOT__check__8__exp_valid = 0U;
    __Vtask_tb_writeback_stage__DOT__check__8__rd_val = 0U;
    __Vtask_tb_writeback_stage__DOT__check__8__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__8__instr[1U] = 0x88000000U;
    __Vtask_tb_writeback_stage__DOT__check__8__instr[2U] = 1U;
    __Vtask_tb_writeback_stage__DOT__check__8__test_name = 
        std::string{"Illegal no write"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__8__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__8__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__8__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__8__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__8__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__8__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__8__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__8__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__8__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__8__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__8__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__8__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__8__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_writeback_stage__DOT__check__8__test_name));
    __Vtask_tb_writeback_stage__DOT__check__9__exp_addr = 0U;
    __Vtask_tb_writeback_stage__DOT__check__9__exp_data = 0U;
    __Vtask_tb_writeback_stage__DOT__check__9__exp_valid = 0U;
    __Vtask_tb_writeback_stage__DOT__check__9__rd_val = 0x3e7U;
    __Vtask_tb_writeback_stage__DOT__check__9__instr[0U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__9__instr[1U] = 0xd8000000U;
    __Vtask_tb_writeback_stage__DOT__check__9__instr[2U] = 0U;
    __Vtask_tb_writeback_stage__DOT__check__9__test_name = 
        std::string{"Write to x0 invalid"};
    vlSelf->tb_writeback_stage__DOT__instruction_in[0U] 
        = __Vtask_tb_writeback_stage__DOT__check__9__instr[0U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
        = __Vtask_tb_writeback_stage__DOT__check__9__instr[1U];
    vlSelf->tb_writeback_stage__DOT__instruction_in[2U] 
        = __Vtask_tb_writeback_stage__DOT__check__9__instr[2U];
    vlSelf->tb_writeback_stage__DOT__rd_data_in = __Vtask_tb_writeback_stage__DOT__check__9__rd_val;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_writeback_stage.sv", 
                                       64);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(((1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                    >> 0x25U))) != (IData)(__Vtask_tb_writeback_stage__DOT__check__9__exp_valid)))) {
        VL_WRITEF("[FAIL] %@: data_valid = %b, expected %b\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__9__test_name),
                  1,(1U & (IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                                   >> 0x25U))),1,(IData)(__Vtask_tb_writeback_stage__DOT__check__9__exp_valid));
        VL_FINISH_MT("tb_writeback_stage.sv", 67, "");
    }
    if (VL_UNLIKELY(((IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)) != __Vtask_tb_writeback_stage__DOT__check__9__exp_data))) {
        VL_WRITEF("[FAIL] %@: data = %x, expected %x\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__9__test_name),
                  32,(IData)((vlSelf->tb_writeback_stage__DOT__forwarding_out 
                              >> 5U)),32,__Vtask_tb_writeback_stage__DOT__check__9__exp_data);
        VL_FINISH_MT("tb_writeback_stage.sv", 71, "");
    }
    if (VL_UNLIKELY(((0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)) 
                     != (IData)(__Vtask_tb_writeback_stage__DOT__check__9__exp_addr)))) {
        VL_WRITEF("[FAIL] %@: address = %0#, expected %0#\n",
                  -1,&(__Vtask_tb_writeback_stage__DOT__check__9__test_name),
                  5,(0x1fU & (IData)(vlSelf->tb_writeback_stage__DOT__forwarding_out)),
                  5,(IData)(__Vtask_tb_writeback_stage__DOT__check__9__exp_addr));
        VL_FINISH_MT("tb_writeback_stage.sv", 75, "");
    }
    VL_WRITEF("[PASS] %@\n\n=====================================\nALL WRITEBACK_STAGE TESTS PASSED\n=====================================\n\n",
              -1,&(__Vtask_tb_writeback_stage__DOT__check__9__test_name));
    VL_FINISH_MT("tb_writeback_stage.sv", 186, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT void Vtb_writeback_stage___024root___act_comb__TOP__0(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd 
        = (1U & ((1U & vlSelf->tb_writeback_stage__DOT__instruction_in[2U])
                  ? ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                         >> 0x1fU)) & ((0x40000000U 
                                        & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                        ? ((0x20000000U 
                                            & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                                            ? (IData)(
                                                      (0x18000000U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                                            : (IData)(
                                                      (0U 
                                                       != 
                                                       (0x18000000U 
                                                        & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))
                                        : ((~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                               >> 0x1dU)) 
                                           | (IData)(
                                                     (0U 
                                                      == 
                                                      (0x18000000U 
                                                       & vlSelf->tb_writeback_stage__DOT__instruction_in[1U]))))))
                  : ((vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                      >> 0x1fU) ? (IData)((0U != (0x70000000U 
                                                  & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                      : ((0x40000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                          ? ((0x20000000U & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])
                              ? (IData)((0x18000000U 
                                         != (0x18000000U 
                                             & vlSelf->tb_writeback_stage__DOT__instruction_in[1U])))
                              : (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                 >> 0x1cU)) : (~ (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                  >> 0x1dU))))));
    vlSelf->tb_writeback_stage__DOT__forwarding_out 
        = (((QData)((IData)(((IData)(vlSelf->tb_writeback_stage__DOT__dut__DOT__writes_rd) 
                             & (0U != (0x1fU & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                >> 0x16U)))))) 
            << 0x25U) | (((QData)((IData)(vlSelf->tb_writeback_stage__DOT__rd_data_in)) 
                          << 5U) | (QData)((IData)(
                                                   (0x1fU 
                                                    & (vlSelf->tb_writeback_stage__DOT__instruction_in[1U] 
                                                       >> 0x16U))))));
}

void Vtb_writeback_stage___024root___eval_act(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_act\n"); );
    // Body
    if (((vlSelf->__VactTriggered.at(0U) | vlSelf->__VactTriggered.at(1U)) 
         | vlSelf->__VactTriggered.at(2U))) {
        Vtb_writeback_stage___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_writeback_stage___024root___eval_nba(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_nba\n"); );
    // Body
    if (((vlSelf->__VnbaTriggered.at(0U) | vlSelf->__VnbaTriggered.at(1U)) 
         | vlSelf->__VnbaTriggered.at(2U))) {
        Vtb_writeback_stage___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vtb_writeback_stage___024root___eval_triggers__act(Vtb_writeback_stage___024root* vlSelf);
void Vtb_writeback_stage___024root___timing_commit(Vtb_writeback_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__act(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_writeback_stage___024root___timing_resume(Vtb_writeback_stage___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_writeback_stage___024root___dump_triggers__nba(Vtb_writeback_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_writeback_stage___024root___eval(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
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
            Vtb_writeback_stage___024root___eval_triggers__act(vlSelf);
            Vtb_writeback_stage___024root___timing_commit(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtb_writeback_stage___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_writeback_stage.sv", 4, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtb_writeback_stage___024root___timing_resume(vlSelf);
                Vtb_writeback_stage___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtb_writeback_stage___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_writeback_stage.sv", 4, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtb_writeback_stage___024root___eval_nba(vlSelf);
        }
    }
}

void Vtb_writeback_stage___024root___timing_commit(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___timing_commit\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(1U))))) {
        vlSelf->__VtrigSched_ha16a72ed__0.commit("@(posedge tb_writeback_stage.clk)");
    }
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.at(2U))))) {
        vlSelf->__VtrigSched_h29cd0448__0.commit("@([changed] tb_writeback_stage.rst)");
    }
}

void Vtb_writeback_stage___024root___timing_resume(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___timing_resume\n"); );
    // Body
    if (vlSelf->__VactTriggered.at(0U)) {
        vlSelf->__VdlySched.resume();
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        vlSelf->__VtrigSched_ha16a72ed__0.resume("@(posedge tb_writeback_stage.clk)");
    }
    if (vlSelf->__VactTriggered.at(2U)) {
        vlSelf->__VtrigSched_h29cd0448__0.resume("@([changed] tb_writeback_stage.rst)");
    }
}

#ifdef VL_DEBUG
void Vtb_writeback_stage___024root___eval_debug_assertions(Vtb_writeback_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_writeback_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_writeback_stage___024root___eval_debug_assertions\n"); );
}
#endif  // VL_DEBUG
