num = {}
for i in range(1, 10**5):
    num[(i * (i + 1)) // 2] = 1
n = int(input())
flag = False
for i in sorted(list(num.keys())):
    if n - i in num:
        flag = True
        break
    if i > n:
        break
print('YES' if flag else 'NO')
