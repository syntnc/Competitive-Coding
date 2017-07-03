#!/bin/python3

import sys


t = int(input().strip())
for a in range(t):
    h = 1
    n = int(input().strip())
    for j in range(1, n+1):
        h = h * 2 if  j % 2 != 0 else h + 1
    print(h)
