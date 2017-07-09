def fibonacci(n):
    # Write your code here.
    fib = [0, 1]
    if n <= 1:
        return fib[n]
    for i in range(n - 1):
        fib[0], fib[1] = fib[1], fib[0] + fib[1]
    return fib[1]
n = int(input())
print(fibonacci(n))
