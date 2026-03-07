# RVfpgaEL2 Lab 05 — Vivado Project Setup: Agent Context

## Overview
This document describes how to create a Vivado 2022.2 project targeting the **RVfpgaEL2-Boolean** RISC-V SoC on **Real Digital's Boolean FPGA board** (Xilinx Spartan-7, part: `xc7s50csga324-1`). The goal is to synthesize, implement, and generate a bitstream for the system so it can be downloaded and run on hardware.

---

## Environment & Prerequisites

| Item | Value |
|------|-------|
| Tool | Xilinx Vivado 2022.2 |
| Target Board | Real Digital Boolean (FPGA: xc7s50csga324-1, Spartan-7) |
| SoC | RVfpgaEL2-Boolean (RISC-V VeeR-EL2 core) |
| Default Core Frequency | 12.5 MHz (25 MHz works but has timing violations) |
| Root Path Variable | `[RVfpgaBooleanPath]` — path to the RVfpgaEL2-Boolean installation |
| OS Support | Linux (`vivado` in terminal) or Windows (Start menu) |

---

## Step-by-Step Setup Instructions

### Step 1 — Open Vivado
- Launch Vivado 2022.2
- On the welcome screen, click **Create Project**

---

### Step 2 — Create a New RTL Project
- Click **Next** on the wizard intro screen
- **Project name:** any name (e.g. `project_2`)
- **Project location:** `[RVfpgaBooleanPath]/Labs/Lab05/`
- Check **Create project subdirectory**
- Click **Next**
- Select project type: **RTL Project**
- Click **Next**

---

### Step 3 — Add RTL Source Files and Constraint Files

#### Add Design Sources
- In the **Add Sources** window, click **Add Directories**
- Select directory: `[RVfpgaBooleanPath]/src`
- Ensure both options are checked:
  - ✅ Scan and add RTL include files into project
  - ✅ Add sources from subdirectories
- Click **Next**

#### Add Constraints
- In the **Add Constraints** window, click **Add Files**
- Select: `[RVfpgaBooleanPath]/src/rvfpgaboolean.xdc`
  - This file maps Verilog signal names (e.g. `o_led`) to physical FPGA pins
- Click **Next**

---

### Step 4 — Select Target FPGA Part
- In the **Default Part** window, click the **Parts** tab
- Search for and select: **`xc7s50csga324-1`**
  - Family: Spartan-7
  - Package: csga324
  - Speed Grade: -1
  - LUT Elements: 32600, FlipFlops: 65200, Block RAMs: 75
- Click **Next**, then **Finish**

---

### Step 5 — Post-Creation Configuration (Critical)

#### 5a. Set Top Module
- In the **Sources** pane → Design Sources
- Right-click on `rvfpgaboolean` → **Set as Top**
- This sets `rvfpgaboolean` as the synthesis/implementation entry point

#### 5b. Set `common_defines.vh` as Global Include
- In Sources pane → Design Sources → Non-module Files
- Click `common_defines.vh`
- In **Source File Properties** pane below, check ✅ **Global Include**

#### 5c. Set `el2_pdef.vh` as Global Include AND SystemVerilog
- Click `el2_pdef.vh` in Sources pane
- In **Source File Properties**, check ✅ **Global Include**
- Also set **File Type** to **SystemVerilog**

#### 5d. Add `boot_main.mem` (Boot ROM initialization file)
- In **Flow Navigator** → click **Add Sources**
- Keep default option: "Add or create design sources"
- Click **Add Files**
- Navigate to: `[RVfpgaBooleanPath]/src/VeeRwolf/BootROM/sw`
- Select: `boot_main.mem`
- This file initializes the SoC Boot ROM; it is referenced as a parameter in `rvfpgaboolean.sv`:
  ```verilog
  module rvfpgaboolean
    #(parameter bootrom_file = "boot_main.mem")
    (input wire clk,
     input wire i_uart_rx,
     output wire o_uart_tx,
     inout wire [15:0] i_sw,
     output reg [15:0] o_led,
  ```

#### 5e. Add Pulp Platform Include Directories
- In **Flow Navigator** → **Settings** → **General** → **Verilog options (…)**
- Add these two include directories:
  1. `[RVfpgaBooleanPath]/src/VeeRwolf/Interconnect/AxiInterconnect/pulp-platform.org__axi_0.25.0/include`
  2. `[RVfpgaBooleanPath]/src/OtherSources/pulp-platform.org__common_cells_1.20.0/include`
- These are required for the AXI Interconnect and generic SoC modules from [Pulp Platform](https://pulp-platform.org/)

#### 5f. Add `-sweep` Option to Implementation
- In **Settings** → **Implementation** → **Opt Design (opt_design)**
- Under **More Options**, add: `-sweep`
- This removes unused logic during optimization

---

### Step 6 — Generate Bitstream
- Click **Flow → Generate Bitstream**
- Duration: ~20 minutes (varies by machine)
- On completion, a dialog confirms success — click the X to close

#### Output Location
The generated bitstream will be at:
```
[RVfpgaBooleanPath]/Labs/Lab05/<project_name>/<project_name>.runs/impl_1/
```

---

## Post-Build Usage
- Use **Catapult SDK** to download the bitstream to the Boolean board
- After programming the FPGA, use Catapult SDK to download and run/debug RISC-V programs on RVfpgaEL2-Boolean
- The system built here can be modified in Labs 6–9 and resynthesized using this same flow

---

## Key Files Reference

| File | Path | Purpose |
|------|------|---------|
| Top module | `[RVfpgaBooleanPath]/src/rvfpgaboolean.sv` | Top-level SoC Verilog |
| Constraints | `[RVfpgaBooleanPath]/src/rvfpgaboolean.xdc` | Pin mapping for Boolean board |
| Boot ROM init | `[RVfpgaBooleanPath]/src/VeeRwolf/BootROM/sw/boot_main.mem` | Initializes boot ROM |
| Global defines | `[RVfpgaBooleanPath]/src/common_defines.vh` | Global Verilog defines |
| EL2 params | `[RVfpgaBooleanPath]/src/VeeRwolf/.../el2_pdef.vh` | Core config (SystemVerilog) |
| Pre-built bitstream | `[RVfpgaBooleanPath]/src/rvfpgaboolean.bit` | Default 12.5 MHz bitstream |

---

## Common Gotchas / Notes
- `el2_pdef.vh` must be set as **both** Global Include **and** SystemVerilog file type — missing either will cause errors
- The 25 MHz core configuration produces timing violations; the default 12.5 MHz is safe for all exercises
- Lab 11 documents the specific core configuration used
- Board files for Vivado must be installed separately before this flow will work