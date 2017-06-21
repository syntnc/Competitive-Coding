from datetime import datetime
for _ in range(int(input())):
    d, m, y = map(int, input().strip().split())
    print(datetime(y, m, d).strftime('%A'))
