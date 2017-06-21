from math import sqrt
for _ in range(int(input())):
    X, Y = map(int, input().split())
    print('%.3f' % (2*sqrt(X*X - Y*Y)))
