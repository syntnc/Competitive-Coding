#include <stdio.h>

#define N 10000000

long long int factorCount[N+1];

int main(void)
{
    int i, j;

    for (i = 0; i <= N; i++) {
        factorCount[i] = 0;
    }

    for (i = 2; i <= N; i++) {
        if (factorCount[i] == 0) { // Number is prime
            for (j = i; j <= N; j += i) {
                factorCount[j]++;
            }
        }
    }
    
    int cases;
    long long int a, b, k, count = 0;
    count = 0;
    scanf("%d", &cases);
    while(cases--) {
    	scanf("%lld %lld %lld", &a, &b, &k);
    	
    	int i;
    	count = 0;
    	for(i = a; i <= b; i++)	{
    		
    		if(factorCount[i] == k) {
    			count++;
    		}
    	}
    	printf("%d\n", count);
    }

    return 0;
}