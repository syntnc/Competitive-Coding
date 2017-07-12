def check_segment(roads, n, l):
    max_right, cur_right = 0, 0
    for i in range(n):
        max_right, cur_right = roads[i][0] + l, roads[i][1]
        for j in range(i + 1, n):
            if roads[j][1] <= max_right and roads[j][0] > roads[i][0] and roads[j][1] > cur_right:
                cur_right = max(cur_right, roads[j][1])
            if cur_right == max_right:
                return True
    return False

def main():
    for _ in range(int(input())):
        n, l = map(int, input().strip().split())
        roads = []
        roads += (tuple(map(int, input().strip().split())) for i in range(n))
        print('Yes' if check_segment(sorted(roads), n, l) else 'No')

if __name__ == '__main__':
    main()
