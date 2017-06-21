#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define M 10000007

ll sumMod(ll a, ll b) 
{
    return ((a % M) + (b % M)) % M;
}

ll mulMod(ll a, ll b)
{
    return ((a % M) * (b % M)) % M;
}

ll fastPower(ll base, ll power) 
{
    ll result = 1;
    while(power) {
    	if(power & 1)
	        result = mulMod(result, base);
        power >>= 1;
        base = mulMod(base, base);
    }
    return result;
}

int main()
{
    while(true) {
        ll n, k;
        scanf("%lld %lld", &n, &k);
        if(!n && !k)
            break;
        ll s1 = mulMod(2, fastPower(n - 1, n - 1));
        ll s2 = mulMod(2, fastPower(n - 1, k));
        ll s3 = fastPower(n, k);
        ll s4 = fastPower(n, n);
        printf("%lld\n", sumMod(s1, sumMod(s2, sumMod(s3, s4))));
    }
    return 0;
}