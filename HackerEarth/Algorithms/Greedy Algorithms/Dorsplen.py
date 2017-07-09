gems = sorted(list(map(int, input().strip().split())))
turns = gems[1] + (gems[2] - gems[1]) - (gems[2] - gems[1]) // 2
print(turns)
