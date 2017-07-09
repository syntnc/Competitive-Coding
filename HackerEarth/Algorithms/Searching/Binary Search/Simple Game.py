from bisect import bisect_left
from bisect import bisect_right

n, m = map(int, input().strip().split())

A = sorted(list(map(int, input().strip().split())))
B = sorted(list(map(int, input().strip().split())))

point_A = 0
for i in A:
    point_A += (bisect_left(B, i)) * (m - bisect_right(B, i))

point_B = 0
for i in B:
    point_B += (bisect_left(A, i)) * (n - bisect_right(A, i))

if point_A == point_B:
    print('Tie')
elif point_A > point_B:
    print('Monk', (point_A - point_B))
else:
    print('!Monk', (point_B - point_A))
