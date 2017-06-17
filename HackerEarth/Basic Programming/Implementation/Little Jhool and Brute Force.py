import itertools
import bisect

cubes = [(i ** 3) for i in range(1, 100)]
swing = list(sum(list(pair)) for pair in itertools.combinations(cubes, 2))
swing = sorted(list(set(i for i in swing if swing.count(i) > 1)))

t = int(input().strip())
for _ in range(t):
    n = int(input().strip())
    if bisect.bisect_left(swing, n) <= 0:
        print(-1)
    else:
        print(swing[bisect.bisect_left(swing, n) - 1])