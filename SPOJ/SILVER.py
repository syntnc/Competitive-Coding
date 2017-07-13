from math import log
while(True):
    n = int(input())
    if n == 0:
        break
    print(int(log(n, 2)))
