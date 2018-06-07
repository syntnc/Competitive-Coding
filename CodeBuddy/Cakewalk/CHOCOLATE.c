#include <stdio.h>

int main()
{
    long long int t, n, c, i, j;
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
    	scanf("%lld %lld", &n, &c);
    	long long int ans = 0;
    	int term = (c - 1) * n + 1;
    	for(j = 1; j < n; j++) {
    		ans += term;
    		term += n - (c - 1);
    	}
    	ans += term;
    	printf("%lld\n", ans);
    }
    return 0;
}