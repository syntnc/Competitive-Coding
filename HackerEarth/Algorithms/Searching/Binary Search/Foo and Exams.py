from math import ceil
for _ in range(int(input())):
    a, b, c, d, k = map(int, input().strip().split())
    t = int(ceil((k/a)**(1.0/3.0)))
    while t:
        t -= 1
        if (t*t*t)*a + (t*t)*b + t*c +d <= k or t == 0:
            print(t)
            break
