#!/bin/python3

import sys


n = int(input().strip())
arr = [int(i) for i in input().strip().split(' ')]
pv = sum(k > 0 for k in arr)
nv = sum(k < 0 for k in arr)
print(pv/n, nv/n, (n-pv-nv)/n, sep='\n')
