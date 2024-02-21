// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VTOP.h"
#include "VTOP__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VTOP::VTOP(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VTOP__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_bundleControl_isALUSrc{vlSymsp->TOP.io_bundleControl_isALUSrc}
    , io_bundleControl_isJump{vlSymsp->TOP.io_bundleControl_isJump}
    , io_bundleControl_isBranch{vlSymsp->TOP.io_bundleControl_isBranch}
    , io_bundleControl_isJAL{vlSymsp->TOP.io_bundleControl_isJAL}
    , io_bundleControl_isLoad{vlSymsp->TOP.io_bundleControl_isLoad}
    , io_bundleControl_isStore{vlSymsp->TOP.io_bundleControl_isStore}
    , io_bundleControl_isSigned{vlSymsp->TOP.io_bundleControl_isSigned}
    , io_bundleControl_writeEnable{vlSymsp->TOP.io_bundleControl_writeEnable}
    , io_bundleControl_lsType{vlSymsp->TOP.io_bundleControl_lsType}
    , io_bundleControl_exeType{vlSymsp->TOP.io_bundleControl_exeType}
    , io_resBranch{vlSymsp->TOP.io_resBranch}
    , io_pc{vlSymsp->TOP.io_pc}
    , io_inst{vlSymsp->TOP.io_inst}
    , io_resEX{vlSymsp->TOP.io_resEX}
    , io_rs1{vlSymsp->TOP.io_rs1}
    , io_rs2{vlSymsp->TOP.io_rs2}
    , io_imm{vlSymsp->TOP.io_imm}
    , io_resLoad{vlSymsp->TOP.io_resLoad}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VTOP::VTOP(const char* _vcname__)
    : VTOP(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VTOP::~VTOP() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VTOP___024root___eval_debug_assertions(VTOP___024root* vlSelf);
#endif  // VL_DEBUG
void VTOP___024root___eval_static(VTOP___024root* vlSelf);
void VTOP___024root___eval_initial(VTOP___024root* vlSelf);
void VTOP___024root___eval_settle(VTOP___024root* vlSelf);
void VTOP___024root___eval(VTOP___024root* vlSelf);

void VTOP::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VTOP::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VTOP___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VTOP___024root___eval_static(&(vlSymsp->TOP));
        VTOP___024root___eval_initial(&(vlSymsp->TOP));
        VTOP___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VTOP___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VTOP::eventsPending() { return false; }

uint64_t VTOP::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VTOP::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VTOP___024root___eval_final(VTOP___024root* vlSelf);

VL_ATTR_COLD void VTOP::final() {
    VTOP___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VTOP::hierName() const { return vlSymsp->name(); }
const char* VTOP::modelName() const { return "VTOP"; }
unsigned VTOP::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> VTOP::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VTOP___024root__trace_init_top(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VTOP___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VTOP___024root*>(voidSelf);
    VTOP__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VTOP___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VTOP___024root__trace_register(VTOP___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VTOP::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VTOP::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VTOP___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
