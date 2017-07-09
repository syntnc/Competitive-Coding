for _ in range(int(input())):
    s = input().strip()
    new_s = [s[0]]
    new_s += (s[i] for i in range(len(s)) if s[i] != new_s[-1])
    print(''.join(new_s))
