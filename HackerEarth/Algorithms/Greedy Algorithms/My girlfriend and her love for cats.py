n = int(input())
cats, calories = [sorted(list(map(int, input().strip().split()))) for i in range(2)]
print(sum(cats[i] * calories[i] for i in range(n)))
