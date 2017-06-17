import sys
t = int(input())
for i in range (t):
    n = ~(int(input()))
    if n > 0:
        print (n)
    else:
        print ((2**32) + n)