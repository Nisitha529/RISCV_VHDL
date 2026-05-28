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
    std::string __Vtask_tb_fetch_stage__DOT__check32__1__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__1__actual;
    __Vtask_tb_fetch_stage__DOT__check32__1__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__1__expected;
    __Vtask_tb_fetch_stage__DOT__check32__1__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__2__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__2__actual;
    __Vtask_tb_fetch_stage__DOT__check32__2__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__2__expected;
    __Vtask_tb_fetch_stage__DOT__check32__2__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__3__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__3__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__3__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__3__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__3__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__4__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__4__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__4__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__4__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__4__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__5__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__5__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__5__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__5__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__5__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__6__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__6__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__6__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__6__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__6__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__8__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__8__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__8__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__9__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__9__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__9__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__10__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__10__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__10__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__10__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__10__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__11__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__11__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__11__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__11__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__11__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__12__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__12__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__13__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__13__actual;
    __Vtask_tb_fetch_stage__DOT__check32__13__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__13__expected;
    __Vtask_tb_fetch_stage__DOT__check32__13__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__14__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__14__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__14__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__14__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__14__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__15__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__15__actual;
    __Vtask_tb_fetch_stage__DOT__check32__15__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__15__expected;
    __Vtask_tb_fetch_stage__DOT__check32__15__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__16__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__16__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__18__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__18__actual;
    __Vtask_tb_fetch_stage__DOT__check32__18__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__18__expected;
    __Vtask_tb_fetch_stage__DOT__check32__18__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__19__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__19__actual;
    __Vtask_tb_fetch_stage__DOT__check32__19__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__19__expected;
    __Vtask_tb_fetch_stage__DOT__check32__19__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__20__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__20__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__20__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__20__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__20__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__21__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__21__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__21__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__21__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__21__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__22__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__22__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__23__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__23__actual;
    __Vtask_tb_fetch_stage__DOT__check32__23__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__23__expected;
    __Vtask_tb_fetch_stage__DOT__check32__23__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__24__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__24__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__24__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__24__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__24__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__25__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__25__actual;
    __Vtask_tb_fetch_stage__DOT__check32__25__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__25__expected;
    __Vtask_tb_fetch_stage__DOT__check32__25__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__26__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__26__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__28__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__28__actual;
    __Vtask_tb_fetch_stage__DOT__check32__28__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__28__expected;
    __Vtask_tb_fetch_stage__DOT__check32__28__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__29__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__29__actual;
    __Vtask_tb_fetch_stage__DOT__check32__29__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__29__expected;
    __Vtask_tb_fetch_stage__DOT__check32__29__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__30__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__30__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__30__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__30__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__30__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__31__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__31__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__31__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__31__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__31__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__32__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__32__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__33__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__33__actual;
    __Vtask_tb_fetch_stage__DOT__check32__33__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__33__expected;
    __Vtask_tb_fetch_stage__DOT__check32__33__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__34__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__34__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__34__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__34__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__34__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__35__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__35__actual;
    __Vtask_tb_fetch_stage__DOT__check32__35__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__35__expected;
    __Vtask_tb_fetch_stage__DOT__check32__35__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__36__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__36__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__38__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__38__actual;
    __Vtask_tb_fetch_stage__DOT__check32__38__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__38__expected;
    __Vtask_tb_fetch_stage__DOT__check32__38__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__39__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__39__actual;
    __Vtask_tb_fetch_stage__DOT__check32__39__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__39__expected;
    __Vtask_tb_fetch_stage__DOT__check32__39__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__40__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__40__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__40__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__40__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__40__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_err__41__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_err__41__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_err__41__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__42__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__42__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__43__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__43__actual;
    __Vtask_tb_fetch_stage__DOT__check32__43__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__43__expected;
    __Vtask_tb_fetch_stage__DOT__check32__43__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__46__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__46__actual;
    __Vtask_tb_fetch_stage__DOT__check32__46__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__46__expected;
    __Vtask_tb_fetch_stage__DOT__check32__46__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__47__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__47__actual;
    __Vtask_tb_fetch_stage__DOT__check32__47__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__47__expected;
    __Vtask_tb_fetch_stage__DOT__check32__47__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__48__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__48__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__48__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__48__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__48__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__49__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__49__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__49__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__49__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__49__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__50__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__50__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__51__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__51__actual;
    __Vtask_tb_fetch_stage__DOT__check32__51__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__51__expected;
    __Vtask_tb_fetch_stage__DOT__check32__51__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__52__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__52__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__52__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__52__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__52__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__53__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__53__actual;
    __Vtask_tb_fetch_stage__DOT__check32__53__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__53__expected;
    __Vtask_tb_fetch_stage__DOT__check32__53__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__54__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__54__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__56__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__56__actual;
    __Vtask_tb_fetch_stage__DOT__check32__56__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__56__expected;
    __Vtask_tb_fetch_stage__DOT__check32__56__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__57__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__57__actual;
    __Vtask_tb_fetch_stage__DOT__check32__57__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__57__expected;
    __Vtask_tb_fetch_stage__DOT__check32__57__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__58__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__58__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__58__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__58__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__58__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__expected_addr;
    __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__instr;
    __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__60__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__60__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__61__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__61__actual;
    __Vtask_tb_fetch_stage__DOT__check32__61__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__61__expected;
    __Vtask_tb_fetch_stage__DOT__check32__61__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__63__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__63__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__63__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__64__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__64__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__64__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__65__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__65__actual;
    __Vtask_tb_fetch_stage__DOT__check32__65__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__65__expected;
    __Vtask_tb_fetch_stage__DOT__check32__65__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__66__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__66__actual;
    __Vtask_tb_fetch_stage__DOT__check32__66__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__66__expected;
    __Vtask_tb_fetch_stage__DOT__check32__66__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__67__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__67__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__67__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__67__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__67__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__68__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__68__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__68__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__68__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__68__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__69__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__69__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__70__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__70__actual;
    __Vtask_tb_fetch_stage__DOT__check32__70__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__70__expected;
    __Vtask_tb_fetch_stage__DOT__check32__70__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__71__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__71__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__71__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__71__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__71__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__72__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__72__actual;
    __Vtask_tb_fetch_stage__DOT__check32__72__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__72__expected;
    __Vtask_tb_fetch_stage__DOT__check32__72__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__73__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__73__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__75__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__75__actual;
    __Vtask_tb_fetch_stage__DOT__check32__75__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__75__expected;
    __Vtask_tb_fetch_stage__DOT__check32__75__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__76__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__76__actual;
    __Vtask_tb_fetch_stage__DOT__check32__76__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__76__expected;
    __Vtask_tb_fetch_stage__DOT__check32__76__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__77__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__77__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__77__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__77__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__77__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__old_expected_addr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__old_expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__jump_addr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__stale_instr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__stale_instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__79__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__79__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__80__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__80__actual;
    __Vtask_tb_fetch_stage__DOT__check32__80__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__80__expected;
    __Vtask_tb_fetch_stage__DOT__check32__80__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__81__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__81__actual;
    __Vtask_tb_fetch_stage__DOT__check32__81__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__81__expected;
    __Vtask_tb_fetch_stage__DOT__check32__81__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__82__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__82__actual;
    __Vtask_tb_fetch_stage__DOT__check32__82__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__82__expected;
    __Vtask_tb_fetch_stage__DOT__check32__82__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__83__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__83__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__83__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__83__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__83__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__84__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__84__actual;
    __Vtask_tb_fetch_stage__DOT__check32__84__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__84__expected;
    __Vtask_tb_fetch_stage__DOT__check32__84__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__85__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__85__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__85__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__85__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__85__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__87__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__87__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__87__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__87__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__87__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__88__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__88__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__89__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__89__actual;
    __Vtask_tb_fetch_stage__DOT__check32__89__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__89__expected;
    __Vtask_tb_fetch_stage__DOT__check32__89__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__90__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__90__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__90__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__90__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__90__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__91__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__91__actual;
    __Vtask_tb_fetch_stage__DOT__check32__91__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__91__expected;
    __Vtask_tb_fetch_stage__DOT__check32__91__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__92__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__92__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__94__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__94__actual;
    __Vtask_tb_fetch_stage__DOT__check32__94__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__94__expected;
    __Vtask_tb_fetch_stage__DOT__check32__94__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__95__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__95__actual;
    __Vtask_tb_fetch_stage__DOT__check32__95__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__95__expected;
    __Vtask_tb_fetch_stage__DOT__check32__95__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__96__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__96__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__96__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__96__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__96__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__97__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__97__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__97__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__97__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__97__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__98__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__98__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__99__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__99__actual;
    __Vtask_tb_fetch_stage__DOT__check32__99__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__99__expected;
    __Vtask_tb_fetch_stage__DOT__check32__99__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__100__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__100__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__100__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__100__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__100__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__101__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__101__actual;
    __Vtask_tb_fetch_stage__DOT__check32__101__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__101__expected;
    __Vtask_tb_fetch_stage__DOT__check32__101__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__102__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__102__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__104__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__104__actual;
    __Vtask_tb_fetch_stage__DOT__check32__104__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__104__expected;
    __Vtask_tb_fetch_stage__DOT__check32__104__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__105__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__105__actual;
    __Vtask_tb_fetch_stage__DOT__check32__105__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__105__expected;
    __Vtask_tb_fetch_stage__DOT__check32__105__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__106__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__106__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__106__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__106__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__106__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__old_expected_addr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__old_expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__jump_addr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__jump_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__stale_instr;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__stale_instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__108__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__108__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__109__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__109__actual;
    __Vtask_tb_fetch_stage__DOT__check32__109__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__109__expected;
    __Vtask_tb_fetch_stage__DOT__check32__109__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__110__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__110__actual;
    __Vtask_tb_fetch_stage__DOT__check32__110__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__110__expected;
    __Vtask_tb_fetch_stage__DOT__check32__110__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__111__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__111__actual;
    __Vtask_tb_fetch_stage__DOT__check32__111__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__111__expected;
    __Vtask_tb_fetch_stage__DOT__check32__111__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__112__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__112__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__112__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__112__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__112__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__113__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__113__actual;
    __Vtask_tb_fetch_stage__DOT__check32__113__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__113__expected;
    __Vtask_tb_fetch_stage__DOT__check32__113__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__114__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__114__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__114__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__114__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__114__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__116__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__116__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__116__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__116__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__116__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__117__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__117__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__118__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__118__actual;
    __Vtask_tb_fetch_stage__DOT__check32__118__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__118__expected;
    __Vtask_tb_fetch_stage__DOT__check32__118__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__119__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__119__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__119__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__119__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__119__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__120__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__120__actual;
    __Vtask_tb_fetch_stage__DOT__check32__120__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__120__expected;
    __Vtask_tb_fetch_stage__DOT__check32__120__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__121__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__121__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__123__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__123__actual;
    __Vtask_tb_fetch_stage__DOT__check32__123__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__123__expected;
    __Vtask_tb_fetch_stage__DOT__check32__123__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__124__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__124__actual;
    __Vtask_tb_fetch_stage__DOT__check32__124__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__124__expected;
    __Vtask_tb_fetch_stage__DOT__check32__124__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__125__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__125__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__125__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__125__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__125__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__fetch_ok__126__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__126__expected_addr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__126__expected_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__fetch_ok__126__instr;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__126__instr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__127__req_addr;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__127__req_addr = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout;
    __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__128__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__128__actual;
    __Vtask_tb_fetch_stage__DOT__check32__128__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__128__expected;
    __Vtask_tb_fetch_stage__DOT__check32__128__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_bit__129__name;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__129__actual;
    __Vtask_tb_fetch_stage__DOT__check_bit__129__actual = 0;
    CData/*0:0*/ __Vtask_tb_fetch_stage__DOT__check_bit__129__expected;
    __Vtask_tb_fetch_stage__DOT__check_bit__129__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__130__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__130__actual;
    __Vtask_tb_fetch_stage__DOT__check32__130__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__130__expected;
    __Vtask_tb_fetch_stage__DOT__check32__130__expected = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__respond_ok__131__instr;
    __Vtask_tb_fetch_stage__DOT__respond_ok__131__instr = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__133__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__133__actual;
    __Vtask_tb_fetch_stage__DOT__check32__133__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__133__expected;
    __Vtask_tb_fetch_stage__DOT__check32__133__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check32__134__name;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__134__actual;
    __Vtask_tb_fetch_stage__DOT__check32__134__actual = 0;
    IData/*31:0*/ __Vtask_tb_fetch_stage__DOT__check32__134__expected;
    __Vtask_tb_fetch_stage__DOT__check32__134__expected = 0;
    std::string __Vtask_tb_fetch_stage__DOT__check_status__135__name;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__135__actual;
    __Vtask_tb_fetch_stage__DOT__check_status__135__actual = 0;
    CData/*3:0*/ __Vtask_tb_fetch_stage__DOT__check_status__135__expected;
    __Vtask_tb_fetch_stage__DOT__check_status__135__expected = 0;
    // Body
    vlSelf->tb_fetch_stage__DOT__pass_count = 0U;
    vlSelf->tb_fetch_stage__DOT__fail_count = 0U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    vlSelf->tb_fetch_stage__DOT__rst = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       326);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       327);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__1__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__1__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__1__name = 
        std::string{"reset instruction"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__1__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__1__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__1__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__1__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__1__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__1__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__2__expected = 0x40000U;
    __Vtask_tb_fetch_stage__DOT__check32__2__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__2__name = 
        std::string{"reset pc"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__2__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__2__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__2__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__2__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__2__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__2__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__3__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__3__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__3__name = 
        std::string{"reset status"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__3__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__3__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__3__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__3__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__3__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__3__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__4__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__4__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__4__name = 
        std::string{"reset wb.cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__4__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__4__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__4__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__4__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__4__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__4__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__5__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__5__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__5__name = 
        std::string{"reset wb.stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__5__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__5__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__5__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__5__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__5__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__5__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__6__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__6__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__6__name = 
        std::string{"reset wb.we"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__6__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__6__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__6__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__6__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__6__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__6__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    VL_WRITEF("\n--- STALL before first request ---\n");
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       217);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 1U;
    vlSelf->tb_fetch_stage__DOT__rst = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       223);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__name = 
        std::string{"no request during initial STALL cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__8__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__9__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__name = 
        std::string{"no request during initial STALL stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__9__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__10__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__10__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__10__name = 
        std::string{"initial STALL keeps BUBBLE"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__10__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       223);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__name = 
        std::string{"no request during initial STALL cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__8__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__9__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__name = 
        std::string{"no request during initial STALL stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__9__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__10__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__10__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__10__name = 
        std::string{"initial STALL keeps BUBBLE"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__10__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       222);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       223);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__8__name = 
        std::string{"no request during initial STALL cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__8__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__8__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__8__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__9__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__9__name = 
        std::string{"no request during initial STALL stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__9__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__9__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__9__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__10__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__10__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__10__name = 
        std::string{"initial STALL keeps BUBBLE"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__10__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__10__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__10__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       229);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__11__instr = 0xa00093U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__11__expected_addr = 0x40000U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__11__name = 
        std::string{"fetch reset address"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__12__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__12__req_addr = 0U;
                goto __Vlabel1;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__12__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel1: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__12__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__13__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__11__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__13__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__13__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__13__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__13__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__13__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__13__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__13__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__13__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__14__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__14__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__14__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__14__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__14__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__14__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__14__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__14__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__14__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__15__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__15__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__15__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__15__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__15__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__15__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__15__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__15__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__15__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__16__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__11__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__16__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__18__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__11__instr;
    __Vtask_tb_fetch_stage__DOT__check32__18__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__18__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__18__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__18__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__18__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__18__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__18__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__18__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__19__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__11__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__19__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__19__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__19__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__19__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__19__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__19__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__19__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__19__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__20__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__20__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__20__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__11__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__20__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__20__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__20__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__20__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__20__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__20__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__21__instr = 0x1400113U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__21__expected_addr = 0x40004U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__21__name = 
        std::string{"fetch pc+4"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__22__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__22__req_addr = 0U;
                goto __Vlabel2;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__22__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel2: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__22__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__23__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__21__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__23__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__23__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__23__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__23__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__23__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__23__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__23__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__23__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__24__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__24__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__24__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__24__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__24__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__24__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__24__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__24__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__24__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__25__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__25__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__25__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__25__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__25__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__25__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__25__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__25__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__25__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__26__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__21__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__26__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__28__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__21__instr;
    __Vtask_tb_fetch_stage__DOT__check32__28__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__28__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__28__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__28__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__28__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__28__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__28__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__28__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__29__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__21__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__29__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__29__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__29__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__29__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__29__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__29__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__29__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__29__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__30__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__30__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__30__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__21__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__30__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__30__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__30__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__30__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__30__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__30__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__31__instr = 0x2081b3U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__31__expected_addr = 0x40008U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__31__name = 
        std::string{"fetch pc+8"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__32__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__32__req_addr = 0U;
                goto __Vlabel3;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__32__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel3: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__32__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__33__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__31__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__33__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__33__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__33__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__33__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__33__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__33__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__33__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__33__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__34__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__34__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__34__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__34__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__34__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__34__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__34__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__34__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__34__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__35__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__35__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__35__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__35__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__35__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__35__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__35__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__35__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__35__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__36__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__31__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__36__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__38__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__31__instr;
    __Vtask_tb_fetch_stage__DOT__check32__38__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__38__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__38__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__38__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__38__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__38__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__38__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__38__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__39__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__31__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__39__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__39__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__39__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__39__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__39__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__39__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__39__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__39__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__40__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__40__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__40__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__31__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__40__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__40__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__40__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__40__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__40__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__40__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_err__41__expected_addr = 0x4000cU;
    __Vtask_tb_fetch_stage__DOT__fetch_err__41__name = 
        std::string{"fetch fault"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_err__41__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__42__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__42__req_addr = 0U;
                goto __Vlabel4;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__42__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel4: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__42__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__43__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_err__41__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__43__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__43__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_err__41__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__43__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__43__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__43__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__43__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__43__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__43__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       159);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0xdeaddeadU;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 1U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       164);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       165);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       167);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__46__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__46__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__46__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_err__41__name, 
                                            std::string{" instruction NOP"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__46__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__46__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__46__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__46__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__46__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__46__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__47__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_err__41__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__47__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__47__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_err__41__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__47__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__47__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__47__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__47__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__47__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__47__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__48__expected = 3U;
    __Vtask_tb_fetch_stage__DOT__check_status__48__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__48__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_err__41__name, 
                                            std::string{" status FETCH_FAULT"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__48__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__48__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__48__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__48__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__48__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__48__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__49__instr = 0x13U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__49__expected_addr = 0x40010U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__49__name = 
        std::string{"fetch after fault"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__50__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__50__req_addr = 0U;
                goto __Vlabel5;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__50__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel5: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__50__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__51__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__49__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__51__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__51__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__51__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__51__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__51__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__51__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__51__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__51__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__52__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__52__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__52__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__52__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__52__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__52__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__52__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__52__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__52__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__53__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__53__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__53__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__53__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__53__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__53__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__53__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__53__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__53__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__54__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__49__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__54__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__56__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__49__instr;
    __Vtask_tb_fetch_stage__DOT__check32__56__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__56__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__56__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__56__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__56__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__56__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__56__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__56__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__57__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__49__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__57__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__57__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__57__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__57__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__57__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__57__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__57__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__57__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__58__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__58__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__58__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__49__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__58__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__58__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__58__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__58__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__58__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__58__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__instr = 0x11111113U;
    __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__expected_addr = 0x40014U;
    VL_WRITEF("\n--- STALL while request outstanding: buffer response ---\n");
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__60__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__60__req_addr = 0U;
                goto __Vlabel6;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__60__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel6: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__60__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__61__expected 
        = __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__61__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__61__name = 
        std::string{"outstanding request address before STALL"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__61__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__61__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__61__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__61__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__61__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__61__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       244);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       250);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       251);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       253);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       257);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       258);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__name = 
        std::string{"no new request while buffered/stalled cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__63__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__63__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__63__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__64__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__name = 
        std::string{"no new request while buffered/stalled stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__64__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__64__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__64__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       257);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       258);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc;
    __Vtask_tb_fetch_stage__DOT__check_bit__63__name = 
        std::string{"no new request while buffered/stalled cyc"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__63__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__63__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__63__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__63__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__64__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb;
    __Vtask_tb_fetch_stage__DOT__check_bit__64__name = 
        std::string{"no new request while buffered/stalled stb"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__64__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__64__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__64__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__64__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       263);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       266);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       267);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__65__expected 
        = __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__instr;
    __Vtask_tb_fetch_stage__DOT__check32__65__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__65__name = 
        std::string{"buffered instruction emitted"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__65__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__65__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__65__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__65__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__65__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__65__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__66__expected 
        = __Vtask_tb_fetch_stage__DOT__stall_with_outstanding_request__59__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__66__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__66__name = 
        std::string{"buffered pc emitted"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__66__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__66__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__66__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__66__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__66__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__66__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__67__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__67__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__67__name = 
        std::string{"buffered status VALID"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__67__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__67__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__67__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__67__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__67__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__67__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__68__instr = 0x22222213U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__68__expected_addr = 0x40018U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__68__name = 
        std::string{"fetch after buffered instruction"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__69__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__69__req_addr = 0U;
                goto __Vlabel7;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__69__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel7: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__69__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__70__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__68__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__70__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__70__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__70__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__70__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__70__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__70__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__70__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__70__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__71__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__71__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__71__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__71__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__71__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__71__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__71__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__71__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__71__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__72__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__72__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__72__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__72__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__72__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__72__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__72__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__72__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__72__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__73__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__68__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__73__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__75__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__68__instr;
    __Vtask_tb_fetch_stage__DOT__check32__75__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__75__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__75__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__75__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__75__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__75__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__75__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__75__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__76__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__68__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__76__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__76__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__76__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__76__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__76__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__76__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__76__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__76__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__77__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__77__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__77__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__68__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__77__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__77__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__77__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__77__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__77__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__77__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__stale_instr = 0xbad0bad0U;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__jump_addr = 0x100U;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__old_expected_addr = 0x4001cU;
    VL_WRITEF("\n--- JUMP while request outstanding: stale response discarded ---\n");
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__79__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__79__req_addr = 0U;
                goto __Vlabel8;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__79__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel8: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__79__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__80__expected 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__old_expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__80__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__80__name = 
        std::string{"old outstanding request address"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__80__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__80__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__80__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__80__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__80__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__80__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       286);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 2U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__jump_addr;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       290);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       291);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__81__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__81__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__81__name = 
        std::string{"jump flush instruction"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__81__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__81__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__81__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__81__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__81__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__81__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__82__expected 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__jump_addr;
    __Vtask_tb_fetch_stage__DOT__check32__82__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__82__name = 
        std::string{"jump flush pc"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__82__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__82__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__82__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__82__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__82__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__82__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__83__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__83__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__83__name = 
        std::string{"jump flush status"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__83__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__83__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__83__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__83__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__83__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__83__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__78__stale_instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       306);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__84__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__84__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__84__name = 
        std::string{"stale response ignored instruction"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__84__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__84__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__84__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__84__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__84__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__84__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__85__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__85__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__85__name = 
        std::string{"stale response ignored status"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__85__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__85__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__85__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__85__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__85__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__85__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       312);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__87__instr = 0x33333313U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__87__expected_addr = 0x100U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__87__name = 
        std::string{"fetch jump target"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__88__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__88__req_addr = 0U;
                goto __Vlabel9;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__88__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel9: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__88__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__89__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__87__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__89__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__89__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__89__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__89__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__89__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__89__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__89__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__89__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__90__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__90__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__90__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__90__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__90__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__90__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__90__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__90__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__90__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__91__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__91__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__91__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__91__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__91__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__91__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__91__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__91__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__91__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__92__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__87__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__92__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__94__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__87__instr;
    __Vtask_tb_fetch_stage__DOT__check32__94__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__94__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__94__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__94__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__94__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__94__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__94__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__94__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__95__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__87__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__95__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__95__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__95__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__95__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__95__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__95__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__95__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__95__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__96__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__96__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__96__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__87__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__96__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__96__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__96__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__96__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__96__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__96__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__97__instr = 0x44444413U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__97__expected_addr = 0x104U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__97__name = 
        std::string{"fetch jump target + 4"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__98__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__98__req_addr = 0U;
                goto __Vlabel10;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__98__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel10: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__98__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__99__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__97__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__99__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__99__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__99__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__99__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__99__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__99__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__99__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__99__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__100__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__100__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__100__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__100__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__100__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__100__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__100__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__100__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__100__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__101__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__101__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__101__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__101__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__101__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__101__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__101__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__101__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__101__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__102__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__97__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__102__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__104__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__97__instr;
    __Vtask_tb_fetch_stage__DOT__check32__104__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__104__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__104__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__104__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__104__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__104__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__104__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__104__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__105__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__97__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__105__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__105__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__105__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__105__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__105__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__105__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__105__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__105__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__106__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__106__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__106__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__97__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__106__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__106__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__106__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__106__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__106__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__106__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__stale_instr = 0xbad1bad1U;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__jump_addr = 0x200U;
    __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__old_expected_addr = 0x108U;
    VL_WRITEF("\n--- JUMP while request outstanding: stale response discarded ---\n");
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__108__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__108__req_addr = 0U;
                goto __Vlabel11;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__108__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel11: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__108__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__109__expected 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__old_expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__109__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__109__name = 
        std::string{"old outstanding request address"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__109__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__109__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__109__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__109__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__109__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__109__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       286);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 2U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__jump_addr;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       290);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       291);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__110__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__110__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__110__name = 
        std::string{"jump flush instruction"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__110__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__110__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__110__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__110__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__110__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__110__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__111__expected 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__jump_addr;
    __Vtask_tb_fetch_stage__DOT__check32__111__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__111__name = 
        std::string{"jump flush pc"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__111__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__111__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__111__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__111__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__111__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__111__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__112__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__112__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__112__name = 
        std::string{"jump flush status"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__112__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__112__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__112__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__112__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__112__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__112__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       297);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->tb_fetch_stage__DOT__status_backwards_in = 0U;
    vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__jump_with_outstanding_request__107__stale_instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       306);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       307);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    __Vtask_tb_fetch_stage__DOT__check32__113__expected = 0x13U;
    __Vtask_tb_fetch_stage__DOT__check32__113__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__113__name = 
        std::string{"stale response ignored instruction"};
    if ((__Vtask_tb_fetch_stage__DOT__check32__113__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__113__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__113__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__113__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__113__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__113__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__114__expected = 1U;
    __Vtask_tb_fetch_stage__DOT__check_status__114__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__114__name = 
        std::string{"stale response ignored status"};
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__114__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__114__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__114__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__114__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__114__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__114__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       312);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__116__instr = 0x55555513U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__116__expected_addr = 0x200U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__116__name = 
        std::string{"fetch second jump target"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__117__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__117__req_addr = 0U;
                goto __Vlabel12;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__117__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel12: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__117__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__118__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__116__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__118__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__118__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__118__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__118__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__118__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__118__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__118__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__118__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__119__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__119__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__119__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__119__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__119__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__119__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__119__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__119__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__119__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__120__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__120__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__120__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__120__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__120__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__120__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__120__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__120__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__120__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__121__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__116__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__121__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__123__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__116__instr;
    __Vtask_tb_fetch_stage__DOT__check32__123__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__123__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__123__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__123__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__123__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__123__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__123__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__123__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__124__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__116__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__124__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__124__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__124__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__124__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__124__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__124__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__124__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__124__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__125__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__125__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__125__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__116__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__125__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__125__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__125__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__125__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__125__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__125__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__fetch_ok__126__instr = 0x66666613U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__126__expected_addr = 0x204U;
    __Vtask_tb_fetch_stage__DOT__fetch_ok__126__name = 
        std::string{"fetch second jump target + 4"};
    VL_WRITEF("\n--- %@ ---\n",-1,&(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name));
    {
        __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout = 0U;
        while ((1U & (~ ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc) 
                         & (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb))))) {
            co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                               "@(posedge tb_fetch_stage.clk)", 
                                                               "tb_fetch_stage.sv", 
                                                               126);
            vlSelf->__Vm_traceActivity[2U] = 1U;
            __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout 
                = ((IData)(1U) + __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout);
            if (VL_UNLIKELY(VL_LTS_III(32, 0x32U, __Vtask_tb_fetch_stage__DOT__wait_for_request__127__timeout))) {
                VL_WRITEF("[FAIL] timeout waiting for Wishbone request\n");
                vlSelf->tb_fetch_stage__DOT__fail_count 
                    = ((IData)(1U) + vlSelf->tb_fetch_stage__DOT__fail_count);
                __Vtask_tb_fetch_stage__DOT__wait_for_request__127__req_addr = 0U;
                goto __Vlabel13;
            }
        }
        co_await vlSelf->__VdlySched.delay(0x3e8U, 
                                           "tb_fetch_stage.sv", 
                                           137);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        __Vtask_tb_fetch_stage__DOT__wait_for_request__127__req_addr 
            = vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr;
        __Vlabel13: ;
    }
    vlSelf->tb_fetch_stage__DOT__addr = __Vtask_tb_fetch_stage__DOT__wait_for_request__127__req_addr;
    __Vtask_tb_fetch_stage__DOT__check32__128__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__126__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__128__actual 
        = vlSelf->tb_fetch_stage__DOT__addr;
    __Vtask_tb_fetch_stage__DOT__check32__128__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" request address"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__128__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__128__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__128__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__128__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__128__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__128__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_bit__129__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_bit__129__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.we;
    __Vtask_tb_fetch_stage__DOT__check_bit__129__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" wb.we"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_bit__129__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_bit__129__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0b expected=%0b\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_bit__129__name),
                  1,(IData)(__Vtask_tb_fetch_stage__DOT__check_bit__129__actual),
                  1,__Vtask_tb_fetch_stage__DOT__check_bit__129__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_bit__129__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__130__expected = 0xfU;
    __Vtask_tb_fetch_stage__DOT__check32__130__actual 
        = vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel;
    __Vtask_tb_fetch_stage__DOT__check32__130__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" wb.sel"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__130__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__130__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__130__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__130__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__130__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__130__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__respond_ok__131__instr 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__126__instr;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       144);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso 
        = __Vtask_tb_fetch_stage__DOT__respond_ok__131__instr;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                       "@(posedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       149);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VdlySched.delay(0x3e8U, "tb_fetch_stage.sv", 
                                       150);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    co_await vlSelf->__VtrigSched_h49b000d3__0.trigger(
                                                       "@(negedge tb_fetch_stage.clk)", 
                                                       "tb_fetch_stage.sv", 
                                                       152);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.err = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_miso = 0U;
    __Vtask_tb_fetch_stage__DOT__check32__133__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__126__instr;
    __Vtask_tb_fetch_stage__DOT__check32__133__actual 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__133__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" instruction"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__133__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__133__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__133__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__133__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__133__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__133__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check32__134__expected 
        = __Vtask_tb_fetch_stage__DOT__fetch_ok__126__expected_addr;
    __Vtask_tb_fetch_stage__DOT__check32__134__actual 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vtask_tb_fetch_stage__DOT__check32__134__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" pc"}));
    if ((__Vtask_tb_fetch_stage__DOT__check32__134__actual 
         != __Vtask_tb_fetch_stage__DOT__check32__134__expected)) {
        VL_WRITEF("[FAIL] %@: actual=0x%08x expected=0x%08x\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check32__134__name),
                  32,__Vtask_tb_fetch_stage__DOT__check32__134__actual,
                  32,__Vtask_tb_fetch_stage__DOT__check32__134__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check32__134__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    __Vtask_tb_fetch_stage__DOT__check_status__135__expected = 0U;
    __Vtask_tb_fetch_stage__DOT__check_status__135__actual 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vtask_tb_fetch_stage__DOT__check_status__135__name 
        = VL_CVT_PACK_STR_NN(VL_CONCATN_NNN(__Vtask_tb_fetch_stage__DOT__fetch_ok__126__name, 
                                            std::string{" status"}));
    if (((IData)(__Vtask_tb_fetch_stage__DOT__check_status__135__actual) 
         != (IData)(__Vtask_tb_fetch_stage__DOT__check_status__135__expected))) {
        VL_WRITEF("[FAIL] %@: actual=%0# expected=%0#\n",
                  -1,&(__Vtask_tb_fetch_stage__DOT__check_status__135__name),
                  4,(IData)(__Vtask_tb_fetch_stage__DOT__check_status__135__actual),
                  4,__Vtask_tb_fetch_stage__DOT__check_status__135__expected);
        vlSelf->tb_fetch_stage__DOT__fail_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__fail_count);
    } else {
        VL_WRITEF("[PASS] %@\n",-1,&(__Vtask_tb_fetch_stage__DOT__check_status__135__name));
        vlSelf->tb_fetch_stage__DOT__pass_count = ((IData)(1U) 
                                                   + vlSelf->tb_fetch_stage__DOT__pass_count);
    }
    VL_WRITEF("\n========================================\nCOMPREHENSIVE FETCH_STAGE TEST SUMMARY\nPASSED: %0d\nFAILED: %0d\n========================================\n",
              32,vlSelf->tb_fetch_stage__DOT__pass_count,
              32,vlSelf->tb_fetch_stage__DOT__fail_count);
    if ((0U == vlSelf->tb_fetch_stage__DOT__fail_count)) {
        VL_WRITEF("ALL COMPREHENSIVE FETCH_STAGE TESTS PASSED\n");
        VL_FINISH_MT("tb_fetch_stage.sv", 402, "");
    } else {
        VL_WRITEF("COMPREHENSIVE FETCH_STAGE TESTS FAILED\n[%0t] %%Error: tb_fetch_stage.sv:405: Assertion failed in %Ntb_fetch_stage\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("tb_fetch_stage.sv", 405, "");
    }
    vlSelf->__Vm_traceActivity[2U] = 1U;
}

VL_INLINE_OPT VlCoroutine Vtb_fetch_stage___024root___eval_initial__TOP__2(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_initial__TOP__2\n"); );
    // Init
    IData/*31:0*/ tb_fetch_stage__DOT____Vrepeat3;
    tb_fetch_stage__DOT____Vrepeat3 = 0;
    // Body
    tb_fetch_stage__DOT____Vrepeat3 = 0x1388U;
    while (VL_LTS_III(32, 0U, tb_fetch_stage__DOT____Vrepeat3)) {
        co_await vlSelf->__VtrigSched_h49b00112__0.trigger(
                                                           "@(posedge tb_fetch_stage.clk)", 
                                                           "tb_fetch_stage.sv", 
                                                           415);
        tb_fetch_stage__DOT____Vrepeat3 = (tb_fetch_stage__DOT____Vrepeat3 
                                           - (IData)(1U));
    }
    VL_WRITEF("[FAIL] Simulation timeout\n[%0t] %%Error: tb_fetch_stage.sv:417: Assertion failed in %Ntb_fetch_stage\n",
              64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
    VL_STOP_MT("tb_fetch_stage.sv", 417, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fetch_stage___024root___dump_triggers__act(Vtb_fetch_stage___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_fetch_stage___024root___eval_triggers__act(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->tb_fetch_stage__DOT__clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk)));
    vlSelf->__VactTriggered.at(1U) = vlSelf->__VdlySched.awaitingCurrentTime();
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->tb_fetch_stage__DOT__clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk));
    vlSelf->__Vtrigrprev__TOP__tb_fetch_stage__DOT__clk 
        = vlSelf->tb_fetch_stage__DOT__clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fetch_stage___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void Vtb_fetch_stage___024root___act_comb__TOP__0(Vtb_fetch_stage___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb_fetch_stage__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fetch_stage___024root___act_comb__TOP__0\n"); );
    // Body
    vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid 
        = ((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
           & ((IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.ack) 
              | (IData)(vlSymsp->TOP__tb_fetch_stage__DOT__wb.err)));
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
    CData/*0:0*/ __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response = 0;
    IData/*31:0*/ __Vdly__tb_fetch_stage__DOT__instruction_reg_out;
    __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0;
    IData/*31:0*/ __Vdly__tb_fetch_stage__DOT__program_counter_reg_out;
    __Vdly__tb_fetch_stage__DOT__program_counter_reg_out = 0;
    CData/*3:0*/ __Vdly__tb_fetch_stage__DOT__status_forwards_out;
    __Vdly__tb_fetch_stage__DOT__status_forwards_out = 0;
    CData/*0:0*/ __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0;
    // Body
    __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response 
        = vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pc = vlSelf->tb_fetch_stage__DOT__dut__DOT__pc;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state 
        = vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state;
    __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid 
        = vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid;
    __Vdly__tb_fetch_stage__DOT__status_forwards_out 
        = vlSelf->tb_fetch_stage__DOT__status_forwards_out;
    __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
        = vlSelf->tb_fetch_stage__DOT__program_counter_reg_out;
    __Vdly__tb_fetch_stage__DOT__instruction_reg_out 
        = vlSelf->tb_fetch_stage__DOT__instruction_reg_out;
    if (vlSelf->tb_fetch_stage__DOT__rst) {
        __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
        __Vdly__tb_fetch_stage__DOT__program_counter_reg_out = 0x40000U;
        __Vdly__tb_fetch_stage__DOT__status_forwards_out = 1U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 1U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = 0x13U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc = 0x40000U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
        vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr = 0U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__pc = 0x40000U;
        vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc = 0x40000U;
        __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response = 0U;
    } else {
        if ((2U == (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))) {
            __Vdly__tb_fetch_stage__DOT__instruction_reg_out = 0x13U;
            __Vdly__tb_fetch_stage__DOT__program_counter_reg_out 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
            __Vdly__tb_fetch_stage__DOT__status_forwards_out = 1U;
            __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid = 0U;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_status = 1U;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_instr = 0x13U;
            vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_pc 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
            __Vdly__tb_fetch_stage__DOT__dut__DOT__pc 
                = vlSelf->tb_fetch_stage__DOT__jump_address_backwards_in;
            if (((IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state) 
                 & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid)))) {
                __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state)))) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 0U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 0U;
            }
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
                if (vlSelf->tb_fetch_stage__DOT__dut__DOT__response_valid) {
                    if (vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response) {
                        __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response = 0U;
                    }
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
            if ((((1U != (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in)) 
                  & (2U != (IData)(vlSelf->tb_fetch_stage__DOT__status_backwards_in))) 
                 & (~ (IData)(vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid)))) {
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.cyc = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.stb = 1U;
                vlSymsp->TOP__tb_fetch_stage__DOT__wb.adr 
                    = vlSelf->tb_fetch_stage__DOT__dut__DOT__pc;
                __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state = 1U;
                vlSelf->tb_fetch_stage__DOT__dut__DOT__request_pc 
                    = vlSelf->tb_fetch_stage__DOT__dut__DOT__pc;
                __Vdly__tb_fetch_stage__DOT__dut__DOT__pc 
                    = ((IData)(4U) + vlSelf->tb_fetch_stage__DOT__dut__DOT__pc);
            }
        }
    }
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.dat_mosi = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.we = 0U;
    vlSymsp->TOP__tb_fetch_stage__DOT__wb.sel = 0xfU;
    vlSelf->tb_fetch_stage__DOT__instruction_reg_out 
        = __Vdly__tb_fetch_stage__DOT__instruction_reg_out;
    vlSelf->tb_fetch_stage__DOT__program_counter_reg_out 
        = __Vdly__tb_fetch_stage__DOT__program_counter_reg_out;
    vlSelf->tb_fetch_stage__DOT__status_forwards_out 
        = __Vdly__tb_fetch_stage__DOT__status_forwards_out;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pc = __Vdly__tb_fetch_stage__DOT__dut__DOT__pc;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__pending_valid 
        = __Vdly__tb_fetch_stage__DOT__dut__DOT__pending_valid;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__kill_response 
        = __Vdly__tb_fetch_stage__DOT__dut__DOT__kill_response;
    vlSelf->tb_fetch_stage__DOT__dut__DOT__wb_state 
        = __Vdly__tb_fetch_stage__DOT__dut__DOT__wb_state;
}
