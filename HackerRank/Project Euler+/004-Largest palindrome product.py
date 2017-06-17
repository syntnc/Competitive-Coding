import math
import bisect

pal = []

def isPal(n):
    s = str(n)
    if list(s) == list(reversed(s)):
        return True
    else:
        return False

def getPal():
    for i in range(100, 1000):
        for j in range(100, 1000):
            if isPal(i * j):
                pal.append(i * j)

def findMaxPal(n):
    return pal[bisect.bisect_left(pal, n) - 1]

if __name__ == '__main__':
    getPal()
    pal.sort()
    t = int(input())
    for _ in range(t):
        n = int(input())
        print(findMaxPal(n))