#!/usr/bin/python3
def maxXor(l, r):
    pr = 0
    while (l >> pr) ^ (r >> pr):
        pr += 1
    return 2 ** (pr) - 1
if __name__ == '__main__':
    l = int(input())
    r = int(input())
    print(maxXor(l, r))