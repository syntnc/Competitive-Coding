import string

def number_needed(a, b):
    alphabets = list(string.ascii_lowercase)
    freqA = list(a.count(letter) for letter in alphabets)
    freqB = list(b.count(letter) for letter in alphabets)
    return sum([abs(i - j) for i, j in zip(freqA, freqB)])

a = input().strip()
b = input().strip()

print(number_needed(a, b))