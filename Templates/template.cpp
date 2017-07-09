#include <bits/stdc++.h>
using namespace std;

//AUTHOR: Sayantan Chatterjee - @coderIlluminatus

typedef long long int ll;
typedef pair<ll, ll> edge;

#define mod 1000000007

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define sz size()
#define len length()

#define rep(i,n) for(i=0;i<n;i++)
#define fu(i,start,end) for(i=start;i<=end;i++)
#define fd(i,start,end) for(i=start;i>=end;i--)

#define all(a) a.begin(),a.end()

#define gi(n) scanf("%d",&n)
#define gl(n) scanf("%lld",&n)

#define pi(n) printf("%d",n)
#define pl(n) printf("%lld",n)
#define psp printf(" ")
#define pln printf("\n")
#define ps(n) printf("%s", n)

ll gcd(ll a, ll b) {
    return b == 0 ? a: gcd(b, a%b);
}

ll addMod(ll a, ll b, ll M) {
    return ((a % M) + (b % M)) % M;
}

ll subMod(ll a, ll b, ll M) {
    return ((a % M) - (b % M) + M) % M;
}

ll mulMod(ll a, ll b, ll M) {
    return ((a % M) * (b % M)) % M;
}

ll power(ll base, ll power, ll M) {
    ll result = 1;
    while(power) {
        if(power & 1)
            result = mulMod(result, base, M);
        power >>= 1;
        base = mulMod(base, base, M);
    }
    return result;
}

int main() 
{
    ios::sync_with_stdio(false);
    return 0;
}