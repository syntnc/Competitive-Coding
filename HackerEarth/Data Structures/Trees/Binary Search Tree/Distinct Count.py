t = int(input().strip())
for _ in range(t):
    n, x = map(int, input().strip().split())
    num = set((map(int, input().strip().split())))
    if len(num) == x:
        print('Good')
    elif len(num) < x:
        print('Bad')
    else:
        print('Average')