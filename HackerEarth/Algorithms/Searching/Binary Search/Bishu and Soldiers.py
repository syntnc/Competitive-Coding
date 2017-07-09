from bisect import bisect
n = int(input())
soldiers = sorted([int(input()) for i in range(n)])

power_sum = [0] * (n + 1)
for i in range(len(soldiers)):
    power_sum[i + 1] = power_sum[i] + soldiers[i]

for _ in range(int(input())):
    index = bisect(soldiers, int(input()))
    print(index, power_sum[index])
