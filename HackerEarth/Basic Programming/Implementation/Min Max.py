n = int(input().strip())
given = list(set(map(int, input().strip().split(' '))))
given.sort()
if given == list(range(given[0], given[-1] + 1)):
    print('YES')
else:
    print('NO')