n = int(input())
l = []
for i in range(n):
    l.append(input().upper())
l.sort()
nq = int(input())
for i in range(nq):
    name = input()
    if name in l:
        total = 0
        for j in name.upper():
            total += ord(j) - 64
        print(total * (l.index(name) + 1))