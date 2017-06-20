from fractions import gcd
w, h = -1, -1
while True:
    w, h = map(int, input().strip().split())
    hcf = gcd(w, h)
    if w == 0 and h == 0:
        break
    elif w != hcf and h != hcf:
        print(w * h)
    else:
        print(max(w, h) // hcf)
