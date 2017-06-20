t = int(input())
for _ in range(t):
	e, n = map(int, input().split())
	if e>n :
		mx, mn = e,n  
	else:
		mx, mn = n,e
	if mn > mx/2:
		print (int((e+n)/3))
	else:
		print (mn)
