#!/bin/python3

import sys

arr = list(map(int, input().strip().split(' ')))
print(sum(arr) - max(arr), sum(arr) - min(arr))
