#include<bits/stdc++.h>
using namespace std;

long long x;
map <long long, long long> m;

long long pre(long long n)
{
	if(n == 0) {
		return 0;
	}
	if(m.count(n)) {
		return m[n];
	}
	x = max(n, (pre(n/2) + pre(n/3) + pre(n/4)));
	m[n] = x;
	return x;
}

int main()
{
   	long long n;
   	while(scanf("%lld", &n) != EOF)
      	printf("%lld\n", pre(n));	
   	return 0;
}