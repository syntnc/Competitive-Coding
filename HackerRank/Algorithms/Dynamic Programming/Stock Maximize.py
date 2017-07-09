for _ in range(int(input())):
    n = int(input())
    price = list(map(int, input().strip().split()))
    profit, max_so_far = 0, 0
    for today in price[::-1]:
        max_so_far = max(max_so_far, today)
        profit += max_so_far - today
    print(profit)

# LOGIC : ITERATE BACKWARDS AND KEEP ADDING PROFIT TILL NEW PEAK IS ENCOUNTERED
