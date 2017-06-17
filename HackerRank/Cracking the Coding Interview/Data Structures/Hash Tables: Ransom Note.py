def ransom_note(magazine, ransom):
    d_mag, d_ran = {}, {}
    for word in magazine:
        if word in d_mag:
            d_mag[word] += 1
        else:
            d_mag[word] = 1
    for word in ransom:
        if word in d_ran:
            d_ran[word] += 1
        else:
            d_ran[word] = 1
    for word in list(d_ran.keys()):
        if d_mag[word] < d_ran[word]:
            return False
    return True

m, n = map(int, input().strip().split(' '))
magazine = input().strip().split(' ')
ransom = input().strip().split(' ')
answer = ransom_note(magazine, ransom)
if(answer):
    print("Yes")
else:
    print("No")