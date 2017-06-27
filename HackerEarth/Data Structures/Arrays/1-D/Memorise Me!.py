from collections import Counter

n = int(input())
num = Counter(list(map(int, input().strip().split())))
for _ in range(int(input())):
    times = num[int(input())]
    print(times if times else 'NOT PRESENT')
