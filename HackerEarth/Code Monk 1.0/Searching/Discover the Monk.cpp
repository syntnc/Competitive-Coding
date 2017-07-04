#include <bits/stdc++.h>
using namespace std;

map<long long, int> m;

int main()
{
    int n, q;
	long long x;
    scanf("%d %d", &n, &q);
    for(int i = 0; i < n; i++) {
    	scanf("%lld", &x);
    	m[x]++;
    }
    while(q--) {
    	scanf("%lld", &x);
    	if(m[x])
    		printf("YES\n");
    	else
    		printf("NO\n");
    }
    return 0;
}