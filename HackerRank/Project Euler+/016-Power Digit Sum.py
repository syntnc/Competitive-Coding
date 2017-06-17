t = int(input())
for _ in range(t):
    print(sum(map(int, list(str(2 ** int(input()))))))


# EXPANDED

t = int(input())
for _ in range(t):
    n = int(input())
    l = list(str(2 ** n))
    total = 0
    for i in l:
        total += int(i)
    print(total)