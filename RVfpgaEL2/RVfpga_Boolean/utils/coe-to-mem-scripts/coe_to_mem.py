#!/usr/bin/env python3
import re
import sys

def coe_to_mem(coe_file, mem_file):
    with open(coe_file, 'r') as f:
        content = f.read()
    
    # Extract the vector data
    match = re.search(r'memory_initialization_vector\s*=\s*(.+);', content, re.IGNORECASE | re.DOTALL)
    
    if not match:
        print("Error: Could not find memory_initialization_vector")
        return
    
    # Get all hex values (split by comma or whitespace)
    values = re.findall(r'[0-9A-Fa-f]+', match.group(1))
    
    # Write to .mem file
    with open(mem_file, 'w') as f:
        f.write(f"// Converted from {coe_file}\n\n")
        for value in values:
            f.write(f"{value}\n")
    
    print(f"Converted {len(values)} values from {coe_file} to {mem_file}")

if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: python coe_to_mem.py input.coe output.mem")
        sys.exit(1)
    coe_to_mem(sys.argv[1], sys.argv[2])
