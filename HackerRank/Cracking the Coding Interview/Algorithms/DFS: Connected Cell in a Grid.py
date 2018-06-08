from copy import deepcopy

DIRECTIONS = ['U', 'D', 'L', 'R', 'UL', 'UR', 'DL', 'DR']
MOVES = {'U': [-1, 0], 'D': [1, 0], 'L': [0, -1], 'R': [0, 1], 'UL': [-1, -1], 'UR': [-1, 1], 'DL': [1, -1], 'DR': [1, 1]}
ROWS, COLUMNS = 0, 0

def get_region_size(grid, row, column):
    grid[row][column], region_size = 0, 1
    for direction in DIRECTIONS:
        next_x, next_y = row + MOVES[direction][0], column + MOVES[direction][1]
        if next_x < 0 or next_x >= ROWS or next_y < 0 or next_y >= COLUMNS:
            continue
        if grid[next_x][next_y] == 0:
            continue
        region_size += get_region_size(grid, next_x, next_y)
    return region_size

def get_largest_region(grid):
    global ROWS, COLUMNS
    largest_region = 0
    for row in range(ROWS):
        for column in range(COLUMNS):
            if grid[row][column] == 1:
                largest_region = max(largest_region, get_region_size(deepcopy(grid), row, column))
                grid[row][column] = 0
    return largest_region

def main():
    global ROWS, COLUMNS
    ROWS, COLUMNS = [int(input().strip()) for _ in range(2)]
    grid = [list(map(int, input().strip().split())) for _ in range(ROWS)]
    print(get_largest_region(grid))

if __name__ == '__main__':
    main()
