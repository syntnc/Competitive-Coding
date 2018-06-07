#include <stdio.h>

int main()
{
    long long int i, t, k;
    long int n;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
    	scanf("%ld %lld", &n, &k);
    	if(k > (long long int)(n * (n + 1) / 2)) {
    		printf("NO\n");
    	}
    	else {
    		printf("YES\n");
    	}
    }
    return 0;
}