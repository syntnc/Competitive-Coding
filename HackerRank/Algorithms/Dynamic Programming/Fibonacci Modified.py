t1, t2, n = map(int, input().strip().split())
if n == 1:
    print(t1)
elif n == 2:
    print(t2)
else:
    for _ in range(n - 2):
        t1, t2 = t2, t1 + t2 * t2
    print(t2)
