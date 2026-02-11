# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vrvfpgasim.mk

default: Vrvfpgasim

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

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
VM_PREFIX = Vrvfpgasim
# Module prefix (from --prefix)
VM_MODPREFIX = Vrvfpgasim
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Iconfig \
	-I/usr/include/gtk-3.0/ \
	-I/usr/include/glib-2.0/ \
	-I/usr/lib/x86_64-linux-gnu/glib-2.0/include/ \
	-I/usr/include/pango-1.0 \
	-I/usr/include/cairo \
	-I/usr/include/gdk-pixbuf-2.0 \
	-I/usr/include/atk-1.0 \
	-I/usr/include/harfbuzz/ \
	-I../../src/VeeRwolf/VeeR_EL2CoreComplex/include/ \
	-I../SimulationSources/jtag_vpi_0-r5/ \
	-I../../src/VeeRwolf/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include \
	-I../../src/OtherSources/pulp-platform.org__common_cells_1.20.0/include \
	-I../../src/VeeRwolf/Peripherals/uart \
	-I../../src/VeeRwolf/Peripherals/spi \
	-I../../src/VeeRwolf/Peripherals/ptc \
	-I../../src/VeeRwolf/Peripherals/gpio \
	-I../../src/VeeRwolf/Interconnect/WishboneInterconnect/wb_common_1.0.3 \
	-I../../src/VeeRwolf/Interconnect/WishboneInterconnect \
	-I../../src/VeeRwolf/Interconnect/AxiInterconnect \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lgtk-3 -lgdk-3 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	jtagServer \
	jtag_common \
	Disassembler \
	tb_PipelineSimulator \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	. \
	../SimulationSources/jtag_vpi_0-r5 \


### Default rules...
# Include list of all generated classes
include Vrvfpgasim_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

jtagServer.o: ../SimulationSources/jtag_vpi_0-r5/jtagServer.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
jtag_common.o: ../SimulationSources/jtag_vpi_0-r5/jtag_common.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
Disassembler.o: ./Disassembler.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
tb_PipelineSimulator.o: ./tb_PipelineSimulator.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vrvfpgasim: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
