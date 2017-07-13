from bisect import bisect
distances_sq = []
for _ in range(int(input())):
    coordinate = tuple(map(int, input().strip().split()))
    distances_sq.append(pow(coordinate[0], 2) + pow(coordinate[1], 2))
distances_sq.sort()
for _ in range(int(input())):
    print(bisect(distances_sq, pow(int(input()), 2)))
