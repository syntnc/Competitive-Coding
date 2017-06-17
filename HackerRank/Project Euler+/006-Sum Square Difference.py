t = int(input())
for _ in range(t):
    n = int(input())
    sumWhole = n * (n + 1) * (2 * n + 1) // 6
    sumSquare = (n * (n + 1) // 2) ** 2
    print(sumSquare - sumWhole)