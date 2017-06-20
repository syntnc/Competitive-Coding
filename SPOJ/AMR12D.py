def isPalindromic(s):
    print('YES' if s == s[::-1] else 'NO')

for _ in range(int(input())):
    s = input().strip()
    isPalindromic(s)
