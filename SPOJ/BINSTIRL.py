for _ in range(int(input())):
    n, m = map(int, input().strip().split())
    print(int(not((n - m) & ((m - 1) >> 1))))
