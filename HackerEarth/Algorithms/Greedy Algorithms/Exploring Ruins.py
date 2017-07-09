string = list(input()) + ['.']
for i in range(len(string) - 1):
    if string[i] == '?':
        if i == 0 and string[i + 1] != 'a':
            string[i] = 'a'
        elif i != 0 and string[i - 1] != 'a' and string[i + 1] != 'a':
            string[i] = 'a'
        else:
            string[i] = 'b'
print(''.join(string[:-1]))
