
def can_place_cows(n, c, barns, distance):
    n_cows, prev = 1, barns[0]
    for i in range(1, n):
        if barns[i] - prev >= distance:
            n_cows += 1
            if n_cows == c:
                return True
            prev = barns[i]
    return False

def search(n, c, barns):
    start, end = 0, barns[n - 1] - barns[0] + 1
    while start + 1 < end:
        distance = (end + start) // 2
        if can_place_cows(n, c, barns, distance):
            start = distance
        else:
            end = distance
    return start

def main():
    for _ in range(int(input())):
        n, c = map(int, input().strip().split())
        barns = sorted([int(input()) for i in range(n)])
        print(search(n, c, barns))

if __name__ == '__main__':
    main()
