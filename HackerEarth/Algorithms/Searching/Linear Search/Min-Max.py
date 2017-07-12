n = int(input())
ar = list(map(int, input().strip().split()))
print(sum(ar) - max(ar), sum(ar) - min(ar))
