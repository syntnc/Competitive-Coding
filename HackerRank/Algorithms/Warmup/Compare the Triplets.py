#!/bin/python3

import sys    

A = [int(i) for i in input().strip().split()]
B = [int(i) for i in input().strip().split()]
alice = sum(A[i] > B[i] for i in range(len(A)))
bob = sum(A[i] < B[i] for i in range(len(B)))
print(alice, bob)
