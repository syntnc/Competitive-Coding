#!/bin/python3

import sys


T = int(input().strip())
for a0 in range(T):
    N = int(input().strip())
    print(N * (N - 1) // 2)
