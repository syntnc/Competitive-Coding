t = int(input())
factorial = [1]
for i in range(1, 1001):
    factorial.append(i * factorial[i - 1])
for _ in range(t):
    n = int(input())
    l = list(str(factorial[n]))
    total = 0
    for i in l:
        total += int(i)
    print(total)