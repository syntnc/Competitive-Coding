'''TLE'''

from bisect import bisect

def addMod(a, b, mod):
    return ((a % mod) + (b % mod)) % mod

def subMod(a, b, mod):
    return ((a % mod)- (b % mod) + mod) % mod

for _ in range(int(input())):
    n, mod = map(int, input().strip().split())
    ar = list(map(int, input().strip().split()))
    sums = {0}
    prefix, max_sum = 0, 0
    for i in range(n):
        prefix = addMod(prefix, ar[i], mod)
        max_sum = max(max_sum, prefix)
        sum_list = list(sums)
        prefix_upper = bisect(sum_list, prefix)
        if prefix_upper != len(sum_list):
            max_sum = max(max_sum, subMod(prefix, sum_list[prefix_upper], mod))
        sums.add(prefix)
    print(max_sum)
