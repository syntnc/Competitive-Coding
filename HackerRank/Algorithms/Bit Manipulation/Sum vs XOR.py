#!/bin/python3

import sys

def solve(n):
    # Complete this function
    return 2 ** ("{0:b}".format(n)).count('0') if n > 0 else 1

n = int(input().strip())
result = solve(n)
print(result)