from bisect import bisect
n, k = map(int, input().strip().split())
house = sorted(list(map(int, input().strip().split())))
left, radio = 0, 0
while(left < n):
    radio_pos = bisect(house, house[left] + k) - 1
    radio += 1
    left = bisect(house, house[radio_pos] + k)
print(radio)
