#!/usr/bin/env python3

def twos_comp(val, bits):
  if (val & (1 << (bits - 1))) != 0:
    val = val - (1 << bits)
  return val

x = '0xFFFFFFFF'
out = twos_comp(int(x, 16), 32)
print(out)

"""
https://www.cs.cornell.edu/~tomf/notes/cps104/twoscomp.html
twos complement;
0000 0011
1111 1100
1111 1101
0xFD
"""
