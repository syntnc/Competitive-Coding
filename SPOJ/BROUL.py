from math import ceil
while True:
	i, b, f = map(int, input().strip().split())
	if b == 0:
		break
	print('No accounting tablet' if (f-i) % b else int(ceil(abs(f-i) / (b*3))))
