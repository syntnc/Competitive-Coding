from fractions import gcd

t = int(input())
for _ in range(t):
    n = int(input())
    LCM = 1
    for i in range(2, n + 1):
        p = i * LCM
        LCM = p // gcd(LCM, i)
    print(LCM)