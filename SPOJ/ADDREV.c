#include <stdio.h>

unsigned int reverse(unsigned int n)
{
	unsigned int copy = n, rev = 0;
	
	while(copy != 0) 
	{
		rev = rev * 10 + (copy % 10);
		copy /= 10;
	}
	
	return rev;
}

int main(void) {
	
	unsigned int N, i, n1, n2, sum;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++)
	{
		scanf("%d %d", &n1, &n2);
		sum = reverse((reverse(n1) + reverse(n2)));
		printf("%d\n", sum);
	}

	return 0;
}