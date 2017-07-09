for _ in range(int(input())):
    insects = list(map(int, input().strip().split()))[1:]
    count_odd = sum(1 for i in insects if i & 1)
    print('No' if count_odd & 1 else 'Yes')
