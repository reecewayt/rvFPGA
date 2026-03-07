#!/usr/bin/env bash
# =============================================================================
# create_vivado_project.sh
#
# Shell wrapper that invokes Vivado in batch mode to run
# create_vivado_project.tcl.
#
# Usage:
#   ./create_vivado_project.sh [<project_dir>] [<project_name>]
#
# Defaults:
#   project_dir  = <repo_root>/vivado_project
#   project_name = rvfpga_boolean
# =============================================================================

set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
TCL_SCRIPT="${SCRIPT_DIR}/create_vivado_project.tcl"

PROJECT_DIR="${1:-${SCRIPT_DIR}/vivado_project}"
PROJECT_NAME="${2:-rvfpga_boolean}"

# Ensure Vivado is on PATH
if ! command -v vivado &>/dev/null; then
    echo "ERROR: 'vivado' not found on PATH."
    echo "       Source the Vivado settings64.sh script first, e.g.:"
    echo "         source /tools/Xilinx/Vivado/2022.2/settings64.sh"
    exit 1
fi

echo "========================================================"
echo "  RVfpgaEL2-Boolean — Vivado Project & Bitstream Build"
echo "========================================================"
echo "  Project dir  : ${PROJECT_DIR}"
echo "  Project name : ${PROJECT_NAME}"
echo "  Vivado       : $(command -v vivado)"
echo "========================================================"
echo ""

vivado -mode batch \
       -source "${TCL_SCRIPT}" \
       -notrace \
       -tclargs "${PROJECT_DIR}" "${PROJECT_NAME}"
