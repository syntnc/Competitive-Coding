def fib(n):
    a, b = 1, 2
    for i in range(n):
        a, b = b, a + b
    return a

t = int(input())
for i in range(0, t):
    n = int(input())
    j, sum = 2, 0
    x = fib(j - 1)
    while x <= n:
        sum += x
        j += 3
        x = fib(j - 1)
    print (sum)