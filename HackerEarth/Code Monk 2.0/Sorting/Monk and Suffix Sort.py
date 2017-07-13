string, k = input().strip().split()
suffix = sorted([string[i:] for i in range(len(string))])
print(suffix[int(k) - 1])
