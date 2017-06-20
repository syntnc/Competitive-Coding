for _ in range(int(input())):
    	a, b = map(int, input().strip().split())
	r = range(a, b + 1)
	p = [0, 1, 2, 3]
	print(sum(1 for i in p if i in r))
