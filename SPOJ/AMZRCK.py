def fib(n):
    Phi = (5**0.5 + 1)/2
    phi = (5**0.5 - 1)/2
    return (Phi**n - (-phi)**n)/(5**0.5)

for _ in range(int(input())):  
    print(int(fib(int(input()) + 2)))
