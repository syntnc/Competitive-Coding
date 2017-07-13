n = int(input())
strings = [input() for i in range(n)]
for i in range(n):
    n_strings = 0
    for j in range(i):
        if strings[j] < strings[i]:
            n_strings += 1
    print(n_strings)
