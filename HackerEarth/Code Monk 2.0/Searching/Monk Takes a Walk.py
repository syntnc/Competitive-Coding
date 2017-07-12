vowels = ['a', 'e', 'i', 'o', 'u']
for _ in range(int(input())):
    print(sum(1 for i in input().strip() if i.lower() in vowels))
