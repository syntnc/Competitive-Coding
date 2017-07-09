def davis(n):
    ways = [1, 2, 4]
    if n <= 3:
        return ways[n - 1]
    for i in range(n - 3):
        ways = [ways[1], ways[2], ways[0] + ways[1] + ways[2]]
    return ways[2]

s = int(input().strip())
for a0 in range(s):
    n = int(input().strip())
    print(davis(n))
