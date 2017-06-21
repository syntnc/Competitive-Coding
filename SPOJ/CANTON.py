from math import sqrt, ceil
for _ in range(int(input())):
	x = int(input())   
	n = ceil((sqrt(8*x+1)-1)/2) 
	t = x - n*(n-1)/2   
	print('TERM %d IS %d/%d' % ((x, n-t+1, t)  if n%2 else  (x, t, n-t+1)))


# NOTES:
#
# n = length of diagonal of triangular number series
# t = x - number of terms till the last diagonal
# OR 
# t = position in current diagonal
# numerator and denominator are decided accordingly for even and odd diagonals