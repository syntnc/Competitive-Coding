n, money = map(int, input().strip().split())
costs, samosa = sorted(list(map(int, input().strip().split()))), 0
for i in costs:
    if money - i >= 0:
        money, samosa = money - i, samosa + 1
    else:
        break
print(samosa)
