from bisect import bisect_left
from bisect import bisect_right

n = int(input())
num = sorted(list(map(int, input().strip().split())))
for _ in range(int(input())):
    q_type, q = map(int, input().strip().split())
    print(n - (bisect_left(num, q) if q_type == 0 else bisect_right(num, q)))
