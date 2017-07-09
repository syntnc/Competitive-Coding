grid, n, m = [None] * 3

def recursive_flood_fill(i, j):
    global grid, n, m
    if i < 0 or i >= n or j < 0 or j >= m:
        return 0
    if grid[i][j] == -1 or grid[i][j] == 0:
        return 0
    answer, grid[i][j] = 1, -1
    for x in range(i - 1, i + 2):
        for y in range(j - 1, j + 2):
            if x != i or y != j:
                answer += recursive_flood_fill(x, y)
    return answer

def main():
    global grid, n, m
    n, m = [int(input()) for i in range(2)]
    grid = [None] * n
    for i in range(n):
        grid[i] = list(map(int, input().strip().split()))
    max_spread = 0
    for i in range(n):
        for j in range(m):
            if grid[i][j]:
                max_spread = max(max_spread, recursive_flood_fill(i, j))
    print(max_spread)

if __name__ == '__main__':
    main()
