from math import pi

def check_valid_size(n, f, pie, size):
    n_friends = sum(pie_size // size for pie_size in pie)
    if n_friends >= f:
        return True
    return False

def search_pie_size(n, f, pie):
    start, end = 0, pie[n - 1]
    while end - start > 10**(-5):
        pie_size = (start + end) / 2
        if check_valid_size(n, f, pie, pie_size):
            start = pie_size
        else:
            end = pie_size
    return start

def main():
    for _ in range(int(input())):
        n, f = map(int, input().strip().split())
        pie = sorted([pi * r * r for r in list(map(int, input().strip().split()))])
        print(round(search_pie_size(n, f + 1, pie), 4))

if __name__ == '__main__':
    main()