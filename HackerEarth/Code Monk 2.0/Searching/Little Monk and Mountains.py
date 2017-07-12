from bisect import bisect_left
n, q = map(int, input().strip().split())
start, end = [0] * n, [0] * n
cumulative = [0]
for i in range(n):
    start[i], end[i] = map(int, input().strip().split())
    cumulative.append(cumulative[-1] + end[i] - start[i] + 1)
for _ in range(q):
    nth = int(input())
    index = bisect_left(cumulative, nth)
    print(-1 if index == len(cumulative) else (start[index - 1] + nth - cumulative[index - 1] - 1))
