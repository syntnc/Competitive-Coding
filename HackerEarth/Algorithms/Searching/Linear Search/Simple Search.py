n = int(input())
ar = list(map(int, input().strip().split()))
e = int(input())
for i in range(len(ar)):
    if ar[i] == e:
        print(i)
