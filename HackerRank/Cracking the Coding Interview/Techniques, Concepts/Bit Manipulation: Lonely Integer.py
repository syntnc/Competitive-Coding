#!/usr/bin/py
# Head ends here
def lonelyinteger(b):
    from functools import reduce
    answer = reduce((lambda x, y: x^y), b)
    return answer
# Tail starts here
if __name__ == '__main__':
    a = int(input())
    b = map(int, input().strip().split(" "))
    print(lonelyinteger(b))