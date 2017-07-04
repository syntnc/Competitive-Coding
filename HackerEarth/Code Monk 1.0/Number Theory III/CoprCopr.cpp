#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000

long int phi[MAX + 1];
long long sumPhi[MAX + 1];

void ETF()
{
	for(long int i = 1; i <= MAX; i++)
        phi[i] = i;
 
    for(long int p = 2; p <= MAX; p++)
    {
        if(phi[p] == p) {
            phi[p] = p-1;

            for (long int i = 2*p; i <= MAX; i += p){
				phi[i] = (phi[i]/p) * (p-1);
			}
        }
    }
    
    sumPhi[0] = 0;
    for(long int i = 1; i <= MAX; i++) {
    	sumPhi[i] = sumPhi[i - 1] + phi[i];
    }
}

int main()
{
    ETF();
    int t;
    scanf("%d", &t);
    while(t--) {
    	long int n;
    	scanf("%ld", &n);
    	printf("%lld\n", (sumPhi[n]));
    }
    return 0;
}