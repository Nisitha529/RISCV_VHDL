// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fetch_stage.h for the primary calling header

#include "verilated.h"

#include "Vtb_fetch_stage__Syms.h"
#include "Vtb_fetch_stage___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__1(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_initial__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__0__expected_pc;
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__0__expected_instr;
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_now__0__expected_status;
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_now__0__test_name;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__1__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__2__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__2__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__3__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__4__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__4__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__5__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__6__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__6__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__7__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__8__expected_pc;
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__8__expected_instr;
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_now__8__expected_status;
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_now__8__test_name;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__9__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__10__expected_pc;
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__10__expected_instr;
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_now__10__expected_status;
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_now__10__test_name;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__11__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__12__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__12__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__13__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__14__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__14__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__15__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__16__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__16__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__17__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__18__expected_pc;
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check_now__18__expected_instr;
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_now__18__expected_status;
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_now__18__test_name;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__19__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__20__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__20__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__21__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_status = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_pc;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_instr;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_status;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__wait_and_check__22__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__wait_and_check__22__found;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__found = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fail_fetch__23__test_name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_pc;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_pc = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_instr;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_instr = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_status;
    __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_status = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_wb_read_only__24__test_name;
    // Body
    vlSelf->tb_fetch_stage__DOT__rst = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__force_error = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       265);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       273);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__0__test_name = 
        std::string{"RESET OUTPUT"};
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_status = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_instr = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check_now__0__expected_pc = 0x40000U;
    if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                       != __Vtask_tb_fetch_stage__DOT__check_now__0__expected_pc) 
                      | (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                         != __Vtask_tb_fetch_stage__DOT__check_now__0__expected_instr)) 
                     | ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                        != (IData)(__Vtask_tb_fetch_stage__DOT__check_now__0__expected_status))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_status 
            = __Vtask_tb_fetch_stage__DOT__check_now__0__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__check_now__0__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__check_now__0__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__1__test_name 
            = __Vtask_tb_fetch_stage__DOT__check_now__0__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__1__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__1__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_now__0__test_name));
    }
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__test_name = 
        std::string{"FETCH RESET_ADDRESS"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_instr = 0x11111111U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_pc = 0x40000U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__2__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__2__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__2__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__2__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__2__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__3__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__2__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__3__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__3__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__test_name = 
        std::string{"FETCH RESET_ADDRESS + 4"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_instr = 0x22222222U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_pc = 0x40004U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__4__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__4__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__4__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__4__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__4__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__5__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__4__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__5__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__5__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__test_name = 
        std::string{"FETCH RESET_ADDRESS + 8"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_instr = 0x33333333U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_pc = 0x40008U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__6__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__6__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__6__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__6__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__6__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__7__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__6__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__7__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__7__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       317);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       318);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__8__test_name = 
        std::string{"STALL HOLDS CURRENT OUTPUT"};
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_instr = 0x33333333U;
    __Vtask_tb_fetch_stage__DOT__check_now__8__expected_pc = 0x40008U;
    if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                       != __Vtask_tb_fetch_stage__DOT__check_now__8__expected_pc) 
                      | (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                         != __Vtask_tb_fetch_stage__DOT__check_now__8__expected_instr)) 
                     | ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                        != (IData)(__Vtask_tb_fetch_stage__DOT__check_now__8__expected_status))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_status 
            = __Vtask_tb_fetch_stage__DOT__check_now__8__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__check_now__8__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__check_now__8__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__9__test_name 
            = __Vtask_tb_fetch_stage__DOT__check_now__8__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__9__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__9__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_now__8__test_name));
    }
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       328);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__10__test_name = 
        std::string{"STILL HOLDING DURING STALL"};
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_instr = 0x33333333U;
    __Vtask_tb_fetch_stage__DOT__check_now__10__expected_pc = 0x40008U;
    if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                       != __Vtask_tb_fetch_stage__DOT__check_now__10__expected_pc) 
                      | (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                         != __Vtask_tb_fetch_stage__DOT__check_now__10__expected_instr)) 
                     | ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                        != (IData)(__Vtask_tb_fetch_stage__DOT__check_now__10__expected_status))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_status 
            = __Vtask_tb_fetch_stage__DOT__check_now__10__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__check_now__10__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__check_now__10__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__11__test_name 
            = __Vtask_tb_fetch_stage__DOT__check_now__10__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__11__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__11__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_now__10__test_name));
    }
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__test_name = 
        std::string{"FETCH AFTER STALL RELEASE"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_instr = 0x44444444U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_pc = 0x4000cU;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__12__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__12__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__12__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__12__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__12__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__13__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__12__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__13__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__13__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__test_name = 
        std::string{"FETCH RESET_ADDRESS + 16 AFTER STALL"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_instr = 0x55555555U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_pc = 0x40010U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__14__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__14__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__14__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__14__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__14__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__15__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__14__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__15__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__15__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    vlSelf->tb_fetch_stage__DOT__force_error = 1U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__test_name = 
        std::string{"FETCH FAULT ON WB ERR"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_status = 3U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_instr = 0x13U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_pc = 0x40014U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__16__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__16__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__16__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__16__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__16__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__17__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__16__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__17__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__17__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    vlSelf->tb_fetch_stage__DOT__force_error = 0U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 2U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0x40U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       380);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       381);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__18__test_name = 
        std::string{"JUMP FLUSH"};
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_status = 1U;
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_instr = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check_now__18__expected_pc = 0x40U;
    if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                       != __Vtask_tb_fetch_stage__DOT__check_now__18__expected_pc) 
                      | (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                         != __Vtask_tb_fetch_stage__DOT__check_now__18__expected_instr)) 
                     | ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                        != (IData)(__Vtask_tb_fetch_stage__DOT__check_now__18__expected_status))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_status 
            = __Vtask_tb_fetch_stage__DOT__check_now__18__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__check_now__18__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__check_now__18__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__19__test_name 
            = __Vtask_tb_fetch_stage__DOT__check_now__18__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__19__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__19__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_now__18__test_name));
    }
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__test_name = 
        std::string{"FETCH JUMP TARGET 0x40"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_instr = 0xaaaaaaaaU;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_pc = 0x40U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__20__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__20__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__20__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__20__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__20__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__21__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__20__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__21__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__21__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__test_name = 
        std::string{"FETCH AFTER JUMP TARGET 0x44"};
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_status = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_instr = 0xbbbbbbbbU;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_pc = 0x44U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__found = 0U;
    __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n = 0U;
    while (VL_GTS_III(32, 0x1eU, __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n)) {
        co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                           "@(negedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           185);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        if (VL_UNLIKELY((((vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
                           == __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_pc) 
                          & (vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
                             == __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_instr)) 
                         & ((IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out) 
                            == (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_status))))) {
            VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__wait_and_check__22__test_name));
            __Vtask_tb_fetch_stage__DOT__wait_and_check__22__found = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n = 0x1eU;
        }
        __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n 
            = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_and_check__22__n);
    }
    if (VL_UNLIKELY((1U & (~ (IData)(__Vtask_tb_fetch_stage__DOT__wait_and_check__22__found))))) {
        __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_status 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_status;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_instr 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_instr;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_pc 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__22__expected_pc;
        __Vtask_tb_fetch_stage__DOT__fail_fetch__23__test_name 
            = __Vtask_tb_fetch_stage__DOT__wait_and_check__22__test_name;
        VL_WRITEF("[FAIL] %@\nExpected PC      = %x\nActual   PC      = %x\nExpected INSTR   = %x\nActual   INSTR   = %x\nExpected STATUS  = %0#\nActual   STATUS  = %0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__fail_fetch__23__test_name),
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_pc,
                  32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
                  32,__Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_instr,
                  32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__fail_fetch__23__expected_status),
                  4,vlSelf->tb_fetch_stage__DOT__status_forwards_out);
        VL_FINISH_MT("tb_fetch_stage.sv", 144, "");
    }
    __Vtask_tb_fetch_stage__DOT__check_wb_read_only__24__test_name = 
        std::string{"WB READ ONLY"};
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       213);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    if (VL_UNLIKELY(vlSymsp->TOP__tb_fetch_stage__DOT__wb.we)) {
        VL_WRITEF("[FAIL] %@\nFetch stage must not assert Wishbone write enable.\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_wb_read_only__24__test_name));
        VL_FINISH_MT("tb_fetch_stage.sv", 218, "");
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_wb_read_only__24__test_name));
    }
    VL_WRITEF("\nALL FETCH_STAGE TESTS PASSED\n\n");
    VL_FINISH_MT("tb_fetch_stage.sv", 417, "");
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__act(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fetch_stage___024root___eval_triggers__act(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->tb_fetch_stage__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->tb_fetch_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(2U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk 
        = vlSelf->tb_fetch_stage__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fetch_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_fetch_stage___024root___nba_sequent__TOP__0(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 0;
    IData/*31:0*/ __Vdly__tb_fetch_stage__DOT__dut__DOT__pc;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pc = 0;
    IData/*31:0*/ __Vdly__tb_fetch_stage__DOT__instruction_reg_out;
    __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0;
    IData/*31:0*/ __Vdly__tb_fetch_stage__DOT__program_counter_reg_out;
    __Vdly__tb_fetch_stage__DOT__program_counter_reg_out = 0;
    CData/*3:0*/ __Vdly__tb_fetch_stage__DOT__status_forwards_out;
    __Vdly__tb_fetch_stage__DOT__status_forwards_out = 0;
    CData/*0:0*/ __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0;
    // Body
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pc = vlSelf->tb_fetch_stage__DOT__dut__DOT__pc;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state 
        = vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state;
    __Vdly__tb_fetch_stage__DOT__status_forwards_out 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vdly__tb_fetch_stage__DOT__instruction_reg_out 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid 
        = vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid;
    if (vlSelf->tb_fetch_stage__DOT__rst) {
        __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
        __Vdly__tb_fetch_stage__DOT__program_counter_reg_out = 0x40000U;
        __Vdly__tb_fetch_stage__DOT__status_forwards_out = 1U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 1U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc = 0x40000U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = 0x13U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr = 0U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__pc = 0x40000U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc = 0x40000U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response = 0U;
    } else {
        if ((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))) {
            __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
            __Vdly__tb_fetch_stage__DOT__status_forwards_out = 1U;
            __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0U;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 1U;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = 0x13U;
            __Vdly__tb_fetch_stage__DOT__dut__DOT__pc 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
        } else if ((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))) {
            __Vdly__tb_fetch_stage__DOT__instruction_reg_out 
                = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
            __Vdly__tb_fetch_stage__DOT__status_forwards_out 
                = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
            if (((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid) 
                 & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response)))) {
                __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 1U;
                if (vlSymsp->TOP__tb_fetch_stage__DOT__wb.err) {
                    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 3U;
                    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = 0x13U;
                } else {
                    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 0U;
                    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr 
                        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso;
                }
                vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc 
                    = vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc;
            }
        } else if (vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid) {
            __Vdly__tb_fetch_stage__DOT__instruction_reg_out 
                = vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr;
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc;
            __Vdly__tb_fetch_stage__DOT__status_forwards_out 
                = vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status;
            __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0U;
        } else if (((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid) 
                    & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response)))) {
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc;
            if (vlSymsp->TOP__tb_fetch_stage__DOT__wb.err) {
                __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
                __Vdly__tb_fetch_stage__DOT__status_forwards_out = 3U;
            } else {
                __Vdly__tb_fetch_stage__DOT__instruction_reg_out 
                    = vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso;
                __Vdly__tb_fetch_stage__DOT__status_forwards_out = 0U;
            }
        } else {
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
            __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
            __Vdly__tb_fetch_stage__DOT__status_forwards_out = 1U;
        }
        if (vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) {
            if (vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 1U;
                if (((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack) 
                     | (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err))) {
                    vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
                    vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
                    __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 0U;
                }
            } else {
                __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 0U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
            }
        } else {
            vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
            vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
            if (vlSelf->tb_fetch_stage__DOT__dut__DOT__can_request) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr 
                    = (vlSelf->tb_fetch_stage__DOT__dut__DOT__pc 
                       >> 2U);
                __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 1U;
                vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc 
                    = vlSelf->tb_fetch_stage__DOT__dut__DOT__pc;
                __Vdly__tb_fetch_stage__DOT__dut__DOT__pc 
                    = ((IData)(4U) + vlSelf->tb_fetch_stage__DOT__dut__DOT__pc);
            }
        }
        if ((((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)) 
              & (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state)) 
             & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid)))) {
            vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response = 1U;
        } else if (vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid) {
            vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response = 0U;
        }
    }
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_mosi = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel = 0xfU;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.we = 0U;
    vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
        = __Vdly__tb_fetch_stage__DOT__instruction_reg_out;
    vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
        = __Vdly__tb_fetch_stage__DOT__program_counter_reg_out;
    vlSelf->tb_fetch_stage__DOT__status_forwards_out 
        = __Vdly__tb_fetch_stage__DOT__status_forwards_out;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid 
        = __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pc = __Vdly__tb_fetch_stage__DOT__dut__DOT__pc;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state 
        = __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state;
}

VL_INLINE_OPT void Vtb_fetch_stage___024root___nba_sequent__TOP__1(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___nba_sequent__TOP__1\n"); );
    // Body
    VL_WRITEF("--------------------------------\nTIME        = %0t\nBACK STATUS = %0#\nJUMP ADDR   = %x\nWB cyc/stb  = %b/%b\nWB adr      = %x\nWB ack/err  = %b/%b\nWB dat_miso = %x\nOUT PC      = %x\nOUT INSTR   = %x\nOUT STATUS  = %0#\n--------------------------------\n",
              64,VL_TIME_UNITED_Q(1000),-9,2,(IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in),
              32,vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in,
              1,(IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc),
              1,vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb,
              32,vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr,
              1,(IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack),
              1,vlSymsp->TOP__tb_fetch_stage__DOT__wb.err,
              32,vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso,
              32,vlSelf->tb_fetch_stage__DOT__program_counter_reg_out,
              32,vlSelf->tb_fetch_stage__DOT__instruction_reg_out,
              4,(IData)(vlSelf->tb_fetch_stage__DOT__status_forwards_out));
    if (vlSelf->tb_fetch_stage__DOT__rst) {
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    } else {
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
        if ((((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
              & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb)) 
             & (~ (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.we)))) {
            if (vlSelf->tb_fetch_stage__DOT__force_error) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
            } else {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
                    = vlSelf->tb_fetch_stage__DOT__mem
                    [(0xffU & vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr)];
            }
            if ((1U & (~ (IData)(vlSelf->tb_fetch_stage__DOT__force_error)))) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
            }
        }
    }
}

VL_INLINE_OPT void Vtb_fetch_stage___024root___nba_comb__TOP__0(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___nba_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fetch_stage__DOT__dut__DOT__can_request 
        = (1U & (~ ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
                    | ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid) 
                       | ((1U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)) 
                          | (2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)))))));
    vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid 
        = ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack) 
              | (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err)));
}
