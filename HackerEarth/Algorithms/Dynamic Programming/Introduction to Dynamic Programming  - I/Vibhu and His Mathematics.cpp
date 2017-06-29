#include <bits/stdc++.h>
using namespace std;

#define M 1000000007

int main()
{
	long long dp[1000001];
	dp[0] = 1;
	dp[1] = 1;
	for(int i = 1; i <= 1000000; i++) {
		dp[i] = ((dp[i - 1] % M) + ((((i - 1) % M) * (dp[i - 2] % M) )% M)) % M;
	}
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	cout << dp[n] << endl;
    }
    return 0;
}

// USED SELF INVERSE PERMUTATION (INVOLUTION) FORMULA