for _ in range(int(input())):
    n = int(input())
    heights = list(map(int, input().strip().split()))
    height_dict = {}
    for height in heights:
        if height in height_dict:
            height_dict[height] += 1
        else:
            height_dict[height] = 1
    print(max(height_dict.values()) - min(height_dict.values()) \
            if len(height_dict.values()) > 1\
            else -1)
