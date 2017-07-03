for _ in range(int(input())):
    r, g = map(int, input().strip().split())
    if r:
        p, f, prev = r / (r + g), 0, 1
        while g >= 2 and r:
            t = (r + g)
            f = prev * g * (g - 1) / (t * (t - 1))
            prev, p = f, p + (f * r / (t - 2))
            g -= 2
        print("%f" % (p + f))
    else:
        print("1.000000")
