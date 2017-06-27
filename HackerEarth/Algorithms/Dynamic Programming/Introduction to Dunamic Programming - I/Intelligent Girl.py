s = raw_input()
l = len(s)
a = [0] * l
for i in range(l - 1, -1, -1):
	if int(s[i]) & 1 == 0:
		a[i] += 1
	if i != l - 1:
		a[i] += a[i + 1]
for i in a:
	print i,
print ''