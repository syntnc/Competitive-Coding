from math import log, ceil
for _ in range(int(input())):
    n = float(input())
    print(int(ceil(log(n, 2))) + 1)
