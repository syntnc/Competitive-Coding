from bisect import bisect_left
n = int(input())
transactions = list(map(int, input().strip().split()))
sum_t = [0]
sum_t += (sum_t[-1] + i for i in transactions)
for _ in range(int(input())):
    q = int(input())
    day = bisect_left(sum_t, q)
    print(-1 if day == len(sum_t) else day)
