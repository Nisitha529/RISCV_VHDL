// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb_top_cpu__Syms.h"
#include "Vtb_top_cpu.h"
#include "Vtb_top_cpu___024root.h"
#include "Vtb_top_cpu_wishbone_interface.h"

// FUNCTIONS
Vtb_top_cpu__Syms::~Vtb_top_cpu__Syms()
{
#ifdef VM_TRACE
    if (__Vm_dumping) _traceDumpClose();
#endif  // VM_TRACE
}

void Vtb_top_cpu__Syms::_traceDump() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumperp->dump(VL_TIME_Q());
}

void Vtb_top_cpu__Syms::_traceDumpOpen() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    if (VL_UNLIKELY(!__Vm_dumperp)) {
        __Vm_dumperp = new VerilatedVcdC();
        __Vm_modelp->trace(__Vm_dumperp, 0, 0);
        std::string dumpfile = _vm_contextp__->dumpfileCheck();
        __Vm_dumperp->open(dumpfile.c_str());
        __Vm_dumping = true;
    }
}

void Vtb_top_cpu__Syms::_traceDumpClose() {
    const VerilatedLockGuard lock(__Vm_dumperMutex);
    __Vm_dumping = false;
    VL_DO_CLEAR(delete __Vm_dumperp, __Vm_dumperp = nullptr);
}

Vtb_top_cpu__Syms::Vtb_top_cpu__Syms(VerilatedContext* contextp, const char* namep, Vtb_top_cpu* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__tb_top_cpu__DOT__fetch_wb{this, Verilated::catName(namep, "tb_top_cpu.fetch_wb")}
    , TOP__tb_top_cpu__DOT__mem_wb{this, Verilated::catName(namep, "tb_top_cpu.mem_wb")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__tb_top_cpu__DOT__fetch_wb = &TOP__tb_top_cpu__DOT__fetch_wb;
    TOP.__PVT__tb_top_cpu__DOT__mem_wb = &TOP__tb_top_cpu__DOT__mem_wb;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__tb_top_cpu__DOT__fetch_wb.__Vconfigure(true);
    TOP__tb_top_cpu__DOT__mem_wb.__Vconfigure(false);
    // Setup scopes
    __Vscope_tb_top_cpu.configure(this, name(), "tb_top_cpu", "tb_top_cpu", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_tb_top_cpu__put_instr.configure(this, name(), "tb_top_cpu.put_instr", "put_instr", -9, VerilatedScope::SCOPE_OTHER);
}
