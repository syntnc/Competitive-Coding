n, m, k = map(int, input().strip().split())
available = {}
seats, count_not_preferred = [0] * m, max(0, n - m * k)
choice = list(map(int, input().strip().split()))[:min(n, m * k)]
 
for preferred_row in choice:
    preferred_row -= 1
    if seats[preferred_row] < k:
        seats[preferred_row] += 1
    else:
        count_not_preferred += 1
        available_row = available[preferred_row] if preferred_row in available else preferred_row
        while seats[available_row] == k:
            available_row = (available_row + 1) % m
        seats[available_row] += 1
        available[preferred_row] = available_row
 
print(count_not_preferred)