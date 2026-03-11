#!/usr/bin/tclsh
# =============================================================================
# create_vivado_project.tcl
#
# Sets up a Vivado project for the RVfpgaEL2-Boolean RISC-V SoC targeting
# Real Digital's Boolean FPGA board (Xilinx Spartan-7, xc7s50csga324-1)
# and integrates the SHA-3 Wishbone peripheral extension.
#
# If the project already exists it is opened directly without re-running
# setup, so re-running the script is safe and fast.
#
# Synthesis, implementation, and bitstream generation are left to the user
# to run interactively in the Vivado GUI.
#
# Usage:
#   vivado -mode gui   -source create_vivado_project.tcl
#   vivado -mode batch -source create_vivado_project.tcl -tclargs <proj_dir> <proj_name>
#
# Optional tclargs:
#   argv[0]  Output directory for the Vivado project  (default: ./vivado_project)
#   argv[1]  Project name                             (default: rvfpga_boolean)
# =============================================================================

# =============================================================================
# Configuration — adjust these paths if your workspace is in a different location
# =============================================================================

# Resolve the script's own directory so paths work regardless of the working
# directory Vivado is launched from.
set SCRIPT_DIR [file normalize [file dirname [info script]]]

# Root of the RVfpgaEL2-Boolean installation
set RVFPGA_BOOLEAN_PATH [file join $SCRIPT_DIR "RVfpgaEL2" "RVfpga_Boolean"]

# Root of the SHA-3 extension
set SHA3_PATH [file join $SCRIPT_DIR "extensions" "sha3"]

# Target FPGA part
set FPGA_PART "xc7s50csga324-1"

# =============================================================================
# NOTE: Synthesis, implementation, and bitstream generation are intentionally
# NOT automated here. Use the Vivado GUI Flow Navigator to run them.
# =============================================================================

# =============================================================================
# Idempotency — if the .xpr already exists, just open it and stop
# =============================================================================

# (evaluated after argv is parsed below)

# =============================================================================
# Parse optional command-line arguments
# =============================================================================

if {[llength $argv] >= 1} {
    set PROJECT_DIR [file normalize [lindex $argv 0]]
} else {
    set PROJECT_DIR [file join $SCRIPT_DIR "vivado_project"]
}

if {[llength $argv] >= 2} {
    set PROJECT_NAME [lindex $argv 1]
} else {
    set PROJECT_NAME "rvfpga_boolean"
}

# =============================================================================
# Idempotency check — open existing project and exit early
# =============================================================================

set XPR_FILE [file join $PROJECT_DIR "${PROJECT_NAME}.xpr"]

if {[file exists $XPR_FILE]} {
    puts "============================================================"
    puts "Project already exists — opening: $XPR_FILE"
    puts "============================================================"
    open_project $XPR_FILE
    puts "Project opened. Use the Flow Navigator to run synthesis,"
    puts "implementation, and bitstream generation."
    return
}

# =============================================================================
# Derived paths — do not edit below unless the source tree changes
# =============================================================================

set SRC_DIR          [file join $RVFPGA_BOOLEAN_PATH "src"]
set XDC_FILE         [file join $SRC_DIR "rvfpgaboolean.xdc"]
set BOOT_MEM_FILE    [file join $SRC_DIR "VeeRwolf" "BootROM" "sw" "boot_main.mem"]
set COMMON_DEFINES   [file join $SRC_DIR "VeeRwolf" "VeeR_EL2CoreComplex" "include" "common_defines.vh"]
set EL2_PDEF         [file join $SRC_DIR "VeeRwolf" "VeeR_EL2CoreComplex" "include" "el2_pdef.vh"]
set PULP_AXI_INC     [file join $SRC_DIR "VeeRwolf" "Interconnect" "AxiInterconnect" \
                          "pulp-platform.org__axi_0.25.0" "include"]
set PULP_CELLS_INC   [file join $SRC_DIR "OtherSources" \
                          "pulp-platform.org__common_cells_1.20.0" "include"]

set SHA3_RTL_DIR     [file join $SHA3_PATH "rtl"]

puts "============================================================"
puts "RVfpgaEL2-Boolean Vivado Project Setup"
puts "============================================================"
puts "Script directory : $SCRIPT_DIR"
puts "RVfpga root      : $RVFPGA_BOOLEAN_PATH"
puts "SHA3 extension   : $SHA3_PATH"
puts "Project dir      : $PROJECT_DIR"
puts "Project name     : $PROJECT_NAME"
puts "FPGA part        : $FPGA_PART"
puts "============================================================\n"

# =============================================================================
# Validate critical paths before touching Vivado
# =============================================================================

foreach {label path} [list \
    "RVfpga source dir"       $SRC_DIR        \
    "Constraint file"         $XDC_FILE       \
    "Boot ROM (.mem)"         $BOOT_MEM_FILE  \
    "common_defines.vh"       $COMMON_DEFINES \
    "el2_pdef.vh"             $EL2_PDEF       \
    "Pulp AXI include dir"    $PULP_AXI_INC   \
    "Pulp cells include dir"  $PULP_CELLS_INC \
    "SHA3 RTL dir"            $SHA3_RTL_DIR   \
] {
    if {![file exists $path]} {
        puts "ERROR: $label not found at expected path:\n  $path"
        exit 1
    }
}

# =============================================================================
# Step 1 — Create the Vivado project
# =============================================================================

puts "\n--- Step 1: Creating Vivado project ---"

file mkdir $PROJECT_DIR

create_project $PROJECT_NAME $PROJECT_DIR -part $FPGA_PART -force

set_property target_language Verilog [current_project]

# =============================================================================
# Step 2 — Add RTL sources (recursive directory scan)
# =============================================================================

puts "\n--- Step 2: Adding RTL source files from $SRC_DIR ---"

# Add the entire src/ tree; Vivado will scan for RTL include files and recurse
# into subdirectories automatically with these flags.
add_files -scan_for_includes $SRC_DIR
set_property -name {source_mgmt_mode} -value {DisplayOnly} -objects [current_project]

puts "   Sources added from $SRC_DIR"

# =============================================================================
# Step 3 — Add SHA-3 Wishbone extension RTL
# =============================================================================

puts "\n--- Step 3: Adding SHA-3 extension RTL from $SHA3_RTL_DIR ---"

# Ordered list so the package is read first (important for SystemVerilog packages)
set SHA3_FILES [list \
    [file join $SHA3_RTL_DIR "sha3_pkg.sv"]          \
    [file join $SHA3_RTL_DIR "rconst_lut.sv"]        \
    [file join $SHA3_RTL_DIR "round.sv"]             \
    [file join $SHA3_RTL_DIR "padder.sv"]            \
    [file join $SHA3_RTL_DIR "f_permutation.sv"]     \
    [file join $SHA3_RTL_DIR "keccak.sv"]            \
    [file join $SHA3_RTL_DIR "wb" "sha3-wb.sv"]      \
    [file join $SHA3_RTL_DIR "wb" "sha3_wb_top.sv"]  \
]

foreach f $SHA3_FILES {
    if {![file exists $f]} {
        puts "WARNING: SHA3 file not found, skipping: $f"
        continue
    }
    add_files -norecurse $f
    puts "   Added: [file tail $f]"
}

# =============================================================================
# Step 4 — Add constraints (XDC)
# =============================================================================

puts "\n--- Step 4: Adding constraints file ---"

add_files -fileset constrs_1 $XDC_FILE
puts "   Constraint: $XDC_FILE"

# =============================================================================
# Step 5a — Set top module
# =============================================================================

puts "\n--- Step 5a: Setting top module to 'rvfpgaboolean' ---"

set_property top rvfpgaboolean [current_fileset]
update_compile_order -fileset sources_1

# =============================================================================
# Step 5b — Set common_defines.vh as Global Include
# =============================================================================

puts "\n--- Step 5b: Setting common_defines.vh as Global Include ---"

set_property is_global_include true [get_files $COMMON_DEFINES]

# =============================================================================
# Step 5c — Set el2_pdef.vh as Global Include AND SystemVerilog
# =============================================================================

puts "\n--- Step 5c: Configuring el2_pdef.vh (Global Include + SystemVerilog) ---"

set_property is_global_include true  [get_files $EL2_PDEF]
set_property file_type SystemVerilog [get_files $EL2_PDEF]

# =============================================================================
# Step 5d — Add boot_main.mem (Boot ROM initialisation file)
# =============================================================================

puts "\n--- Step 5d: Adding boot_main.mem ---"

add_files -norecurse $BOOT_MEM_FILE
puts "   Boot ROM mem: $BOOT_MEM_FILE"

# =============================================================================
# Step 5e — Add Pulp Platform include directories
# =============================================================================

puts "\n--- Step 5e: Adding Pulp Platform include directories ---"

# Fetch any existing include_dirs so we append rather than overwrite
set existing_incs [get_property include_dirs [current_fileset]]

set new_incs [concat $existing_incs [list $PULP_AXI_INC $PULP_CELLS_INC]]
set_property include_dirs $new_incs [current_fileset]

puts "   include_dirs set:"
foreach d $new_incs {
    puts "     $d"
}

# =============================================================================
# Step 5f — Add -sweep option to Implementation (opt_design)
# =============================================================================

puts "\n--- Step 5f: Adding -sweep to Implementation Opt Design ---"

set_property -name {STEPS.OPT_DESIGN.ARGS.MORE OPTIONS} \
             -value {-sweep} \
             -objects [get_runs impl_1]

# =============================================================================
# Done — project is configured, hand off to the user
# =============================================================================

puts "\n============================================================"
puts "Project setup complete!"
puts "Project file: $XPR_FILE"
puts ""
puts "Next steps in the Vivado GUI Flow Navigator:"
puts "  1. Run Synthesis"
puts "  2. Run Implementation"
puts "  3. Generate Bitstream"
puts "============================================================\n"
