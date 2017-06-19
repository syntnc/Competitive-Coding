#!/bin/python3

import sys

n = int(input().strip())
for i in range(1, n + 1):
    for j in range(0, n - i):
        print(' ', end = '')
    for j in range(0, i):
        print('#', end = '')
    print ()
