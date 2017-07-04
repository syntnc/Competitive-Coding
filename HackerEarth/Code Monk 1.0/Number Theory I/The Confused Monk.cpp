#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
int a[55];

long long fx(int n) 
{
	long long ans = 1;
	for(int i = 0; i < n; i++) {
		ans = ((ans % MOD) * (a[i] % MOD)) % MOD;
	}
	return ans;
}

long long gx(int n)
{
	int hcf = a[0];
	for(int i = 1; i < n; i++) {
		hcf = __gcd(hcf, a[i]);
	}
	return 1LL *hcf;
}

long long fastPower(long long base, long long power)
{
	long long result = 1;
	while(power > 0) {
		if(power & 1)
			result = ((result % MOD) * (base % MOD)) % MOD;
		base = ((base % MOD) * (base % MOD)) % MOD;
		power /= 2;
	}
	return result;
}

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
    	scanf("%d", &a[i]);
    }
    printf("%lld\n", fastPower(fx(n), gx(n)));
    return 0;
}