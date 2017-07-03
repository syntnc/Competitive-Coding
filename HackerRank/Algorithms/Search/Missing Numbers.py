n = int(input())
A = list(map(int, input().strip().split()))

m = int(input())
B = list(map(int, input().strip().split()))

table = [0 for i in range(max(A + B) + 1)]

for i in A:
    table[i] -= 1
for i in B:
    table[i] += 1

print(' '.join([str(i) for i in range(len(table)) if table[i] != 0]))
