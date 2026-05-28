// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_mcu__Syms.h"
#include "Vtb_mcu.h"
#include "Vtb_mcu___024root.h"
#include "Vtb_mcu_wishbone_interface.h"

// FUNCTIONS
Vtb_mcu__Syms::~Vtb_mcu__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_mcu__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_mcu__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_mcu__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_mcu__Syms::Vtb_mcu__Syms(VerilatedContext* contextp, const char* namep, Vtb_mcu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_mcu__DOT__dut__DOT__fetch_bus{this, Verilated::catName(namep, "tb_mcu.dut.fetch_bus")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[0]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[1]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[2]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[3]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[4]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[5]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[6]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[7]")}
    , TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__{this, Verilated::catName(namep, "tb_mcu.dut.mem_bus_slaves[8]")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_mcu__DOT__dut__DOT__fetch_bus = &TOP__tb_mcu__DOT__dut__DOT__fetch_bus;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__;
    TOP.__PVT__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__ = &TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_mcu__DOT__dut__DOT__fetch_bus.__Vconfigure(true);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__0__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__1__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__2__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__3__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__4__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__5__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__6__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__7__KET__.__Vconfigure(false);
    TOP__tb_mcu__DOT__dut__DOT__mem_bus_slaves__BRA__8__KET__.__Vconfigure(false);
    // Setup scopes
    __Vscope_tb_mcu.configure(this, name(), "tb_mcu", "tb_mcu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_mcu__write_ram_word.configure(this, name(), "tb_mcu.write_ram_word", "write_ram_word", -9, VerilatedScope::SCOPE_OTHER);
}
