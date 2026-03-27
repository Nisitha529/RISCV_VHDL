import re

with open('../../rtl/sources/memory_pkg.vhd', 'r') as f:
    lines = f.readlines()

for line in lines:
    m = re.search(r'x"([0-9a-fA-F]+)"', line)
    if m:
        print(m.group(1).lower())