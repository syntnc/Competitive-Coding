def maxSubArraySum(a, size):     
    max_so_far = a[0]
    curr_max = a[0]     
    for i in range(1,size):
        curr_max = max(a[i], curr_max + a[i])
        max_so_far = max(max_so_far,curr_max)
    return max_so_far

def maxNonContiguous(a):
    positive = sum(i for i in a if i > 0)
    return positive if positive > 0 else max(a)
    
t = int(input())
for cases in range(t):
    n = int(input())
    a = [int(i) for i in input().split()]
    maxSum = maxSubArraySum(a, n)
    print(maxSum, end = ' ')
    maxSumNonContiguous = maxNonContiguous(a)
    print(maxSumNonContiguous)
