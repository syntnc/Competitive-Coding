#include <bits/stdc++.h>

#define MAX 10000009

int p[MAX];
long long res[MAX];

void pre()
{
	for(int i = 2; i <= MAX - 9; i++) {
  		if(!p[i]) {
   			for(int j = i + i; j <= MAX - 9; j+=i)
    			if(!p[j])
     				p[j] = i;
   				res[i] = res[i - 1] + i;
  		}
  		else
   			res[i] = res[i - 1] + p[i];
 	}
}

int main()
{
 	int t;
 	pre();
 	scanf("%d",&t);
 	
 	while(t--) {
  		int n;
  		scanf("%d",&n);
  		printf("%lld\n",res[n]);
 	}
 	return 0;
}