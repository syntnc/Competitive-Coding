n = int(input())
num = list(map(int, input().strip().split()))
num_dict = {}
for i in num:
    if i in num_dict:
        num_dict[i] += 1
    else:
        num_dict[i] = 1
k = int(input())
for i in sorted(num_dict.keys()):
    if num_dict[i] == k:
        print(i)
        break
