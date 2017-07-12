def get_size(sum_ar, x):
    low, high = 0, len(sum_ar)
    while low < high:
        mid = (low + high) // 2
        max_sum = 0
        for i in range(0, len(sum_ar) - mid):
            max_sum = max(max_sum, sum_ar[i + mid] - sum_ar[i])
        if max_sum <= x:
            low = mid + 1
        else:
            high = mid
    return low - 1

def main():
    n, x = map(int, input().strip().split())
    ar = list(map(int, input().strip().split()))
    sum_ar = [0]
    sum_ar += (sum_ar[-1] + i for i in ar)
    print(get_size(sum_ar, x))

if __name__ == '__main__':
    main()
