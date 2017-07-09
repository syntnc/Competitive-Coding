for _ in range(int(input())):
    n = int(input())
    B = list(map(int, input().strip().split()))
    low, high = 0, 0
    for i in range(1, n):
        low_to_high = abs(1 - B[i])
        high_to_low = abs(B[i - 1] - 1)
        high_to_high = abs(B[i - 1] - B[i])

        low_next = max(low, high + high_to_low)
        high_next = max(high, low + low_to_high, high + high_to_high)

        low, high = low_next, high_next
    print(max(low, high))
