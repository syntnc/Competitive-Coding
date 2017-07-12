n = int(input())
vaccines = sorted(list(map(int, input().strip().split())))
midichlorians = sorted(list(map(int, input().strip().split())))
flag = True
for i in range(n):
    if vaccines[i] < midichlorians[i]:
        flag = False
        break
print('Yes' if flag else 'No')
