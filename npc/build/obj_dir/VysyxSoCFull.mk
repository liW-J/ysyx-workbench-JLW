# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: /home/sends/local/share/ysyx-workbench/npc/build/riscv32-npc-interpreter

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= /usr/local/systemc-2.3.3/include
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= /usr/local/systemc-2.3.3/lib-linux64

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-O2 \
	-DCFLAGS_CPU_TYPE=single \
	-D__GUEST_ISA__=riscv32 \
	-D__CPU_TYPE__=single \
	-DITRACE_COND=true \
	-DIRINGBUF_COND=true \
	-DMTRACE_COND=true \
	-DDTRACE_COND=true \
	-Wno-unused-result \
	-DCFLAGS_TOP_NAME="VysyxSoCFull" \
	-I/home/sends/local/share/ysyx-workbench/npc/include \
	-I/home/sends/local/share/ysyx-workbench/npc/include/generated \
	-I/home/sends/local/share/ysyx-workbench/npc/build/obj_dir \
	-I/home/sends/local/share/ysyx-workbench/npc/sim/riscv32/include \
	-I/usr/lib/llvm-11/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-O2 \
	-DCFLAGS_CPU_TYPE=single \
	-D__GUEST_ISA__=riscv32 \
	-D__CPU_TYPE__=single \
	-lreadline \
	-ldl \
	-pie \
	-lLLVM-11 \
	-lSDL2 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	cpu-exec \
	dut \
	ref \
	alarm \
	audio \
	device \
	disk \
	intr \
	map \
	mmio \
	port-io \
	keyboard \
	sdcard \
	serial \
	timer \
	vga \
	hostcall \
	init \
	main \
	mrom \
	paddr \
	vaddr \
	monitor \
	expr \
	sdb \
	watchpoint \
	ftrace \
	iringbuf \
	mtrace \
	isa-dut \
	init \
	logo \
	reg \
	disasm \
	log \
	state \
	timertool \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/sends/local/share/ysyx-workbench/npc/sim \
	/home/sends/local/share/ysyx-workbench/npc/sim/cpu \
	/home/sends/local/share/ysyx-workbench/npc/sim/cpu/difftest \
	/home/sends/local/share/ysyx-workbench/npc/sim/device \
	/home/sends/local/share/ysyx-workbench/npc/sim/device/io \
	/home/sends/local/share/ysyx-workbench/npc/sim/engine/interpreter \
	/home/sends/local/share/ysyx-workbench/npc/sim/memory \
	/home/sends/local/share/ysyx-workbench/npc/sim/monitor \
	/home/sends/local/share/ysyx-workbench/npc/sim/monitor/sdb \
	/home/sends/local/share/ysyx-workbench/npc/sim/monitor/trace \
	/home/sends/local/share/ysyx-workbench/npc/sim/riscv32 \
	/home/sends/local/share/ysyx-workbench/npc/sim/riscv32/difftest \
	/home/sends/local/share/ysyx-workbench/npc/sim/utils \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

cpu-exec.o: /home/sends/local/share/ysyx-workbench/npc/sim/cpu/cpu-exec.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
dut.o: /home/sends/local/share/ysyx-workbench/npc/sim/cpu/difftest/dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ref.o: /home/sends/local/share/ysyx-workbench/npc/sim/cpu/difftest/ref.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
alarm.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/alarm.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
audio.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/audio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
device.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/device.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disk.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/disk.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
intr.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/intr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
map.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/io/map.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mmio.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/io/mmio.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
port-io.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/io/port-io.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
keyboard.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/keyboard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdcard.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/sdcard.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
serial.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/serial.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timer.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/timer.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vga.o: /home/sends/local/share/ysyx-workbench/npc/sim/device/vga.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
hostcall.o: /home/sends/local/share/ysyx-workbench/npc/sim/engine/interpreter/hostcall.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/sends/local/share/ysyx-workbench/npc/sim/engine/interpreter/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/sends/local/share/ysyx-workbench/npc/sim/main.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mrom.o: /home/sends/local/share/ysyx-workbench/npc/sim/memory/mrom.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
paddr.o: /home/sends/local/share/ysyx-workbench/npc/sim/memory/paddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
vaddr.o: /home/sends/local/share/ysyx-workbench/npc/sim/memory/vaddr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
monitor.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/monitor.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
expr.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/sdb/expr.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
sdb.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/sdb/sdb.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
watchpoint.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/sdb/watchpoint.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
ftrace.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/trace/ftrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
iringbuf.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/trace/iringbuf.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
mtrace.o: /home/sends/local/share/ysyx-workbench/npc/sim/monitor/trace/mtrace.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
isa-dut.o: /home/sends/local/share/ysyx-workbench/npc/sim/riscv32/difftest/isa-dut.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
init.o: /home/sends/local/share/ysyx-workbench/npc/sim/riscv32/init.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
logo.o: /home/sends/local/share/ysyx-workbench/npc/sim/riscv32/logo.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
reg.o: /home/sends/local/share/ysyx-workbench/npc/sim/riscv32/reg.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
disasm.o: /home/sends/local/share/ysyx-workbench/npc/sim/utils/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
log.o: /home/sends/local/share/ysyx-workbench/npc/sim/utils/log.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
state.o: /home/sends/local/share/ysyx-workbench/npc/sim/utils/state.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
timertool.o: /home/sends/local/share/ysyx-workbench/npc/sim/utils/timertool.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
/home/sends/local/share/ysyx-workbench/npc/build/riscv32-npc-interpreter: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
