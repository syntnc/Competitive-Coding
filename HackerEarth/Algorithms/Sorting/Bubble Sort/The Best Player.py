n, t = map(int, input().strip().split())
fans = []
for _ in range(n):
    fans.append(tuple(input().strip().split()))
fans.sort(key=lambda x: (-int(x[1]), x[0]))
print('\n'.join(i[0] for i in fans[:t]))
