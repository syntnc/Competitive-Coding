for _ in range (int(input())):
    n = int(input())
    a = list(map(int, input().strip().split()))
    sumContiguous = [0] * (n + 1)
    for i in range(n):
        sumContiguous[i + 1] = sumContiguous[i] + a[i]
    flag = False
    for i in range(1, n + 1):
        if sumContiguous[i - 1] - sumContiguous[0] == sumContiguous[n] - sumContiguous[i]:
            flag = True
    print('YES' if flag else 'NO')
