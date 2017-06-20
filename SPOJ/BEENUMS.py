from math import sqrt
while True:
    n = int(input())
    if n == -1:
        break
    print('N' if sqrt(12*n - 3) % 1 else 'Y')
