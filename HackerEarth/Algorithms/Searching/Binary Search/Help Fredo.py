from math import floor
from functools import reduce
n = int(input())
num = list(map(int, input().strip().split()))
nth_root = reduce(lambda x, y: x * y, [i ** (1. / n) for i in num], 1)
print(int(floor(nth_root)) + 1)
