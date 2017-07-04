#include <bits/stdc++.h>
using namespace std;

#define MAX 10000000
int sp[MAX + 1] = {0};

void sieve() 
{
	long int i, j;
	for(i = 2; i <= MAX; i++) {
		if(!sp[i]) {
			for(j = i; j * i <= MAX; j++) {
				sp[j * i] = i;
			}
		}
	}
}

int main()
{
    sieve();
    int n;
    scanf("%d", &n);
    while(n--) {
    	long int x;
    	scanf("%ld", &x);
    	int count = 1;
    	while(sp[x]) {
    		long int y = x, power = 0;
    		while(y % sp[x] == 0) {
    			y /= sp[x];
    			power++;
    		}
    		count *= (power + 1);
    		x = y;
    	}
    	if(x != 1) count *= 2;
    	if(count >= 4)
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
    return 0;
