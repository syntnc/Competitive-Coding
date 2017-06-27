#include <iostream>
using namespace std;

#define M 1000000009
long long dp[10000001];

long long fastPower(long long base)
{
	long long result = 1, power = 2;
	while (power>0) 
    {
        if (power%2==1)         
            result = (result * base)%M;
        base = (base * base)%M;
        power /= 2;
    }
    return result;
}

void pre() 
{
	dp[0] = 0;
	dp[1] = 1;
	for(long long n = 2; n <= 10000000; n++) {
		dp[n] = ((dp[n - 2] % M) + ((4 % M) * fastPower(n)) % M - ((6 % M) * (n % M)) % M + M + (6 % M)) % M;
	}
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    pre();
    while(t--) {
    	long long n;
    	cin >> n;
    	cout << dp[n] << endl;
    }
    return 0;
}
