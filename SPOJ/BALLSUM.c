#include <stdio.h>

long long int gcd(long long int, long long int);

int main()
{
	long long int n = 0, k = 0, p, q, r;
	while(1)
	{
		scanf("%lld %lld", &n, &k);
		if(n == -1 && k == -1) 
            break;
		if(k % 2 == 0)
            p = (k*k - 2*k) / 4;
		else
            p = (k*k - 2*k + 1) / 4;

		q = (n * (n-1)) / 2;
		if(p != 0)
		{
			r = gcd(q, p);
		    printf("%lld/%lld\n", p/r, q/r);
	    }
		else printf("0\n");
	}
    return 0;
}

long long int gcd (long long int x,long long int y)
{
    if (y == 0) {
        return x;
    } else if (x >= y && y > 0) {
        return gcd (y, (x % y));
    }
    return;
}