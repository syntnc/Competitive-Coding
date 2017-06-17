def sum(n):
    return n * (n + 1) // 2

t = int(input())
for i in range(0, t):
    n = int(input())
    f3 = (n-1)//3
    f5 = (n-1)//5
    f15 = (n-1)//15
    s = sum(f3) * 3 + sum(f5) * 5 - sum(f15) * 15
    print (s)