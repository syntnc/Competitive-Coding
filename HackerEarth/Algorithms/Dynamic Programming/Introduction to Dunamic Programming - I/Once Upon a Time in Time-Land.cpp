#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	
	int t;
	cin >> t;
	
	while(t--) {
		int n, k;
		cin >> n >> k;
		long long ar[n];
		
		for(int i = 0; i < n; i++)
			cin >> ar[i];
		
		long long dp[n + 1];
		
		dp[0] = 0;
		for(int i = 1; i <= k + 1; i++) {
			dp[i] = max(dp[i - 1], ar[i - 1]);
		}
		for(int i = k + 2; i <= n; i++) {
			if(ar[i - 1] < 0)
				dp[i] = dp[i - 1];
			else
				dp[i] = max(ar[i - 1] + dp[i - k - 1], dp[i - 1]);
		}
		
		cout << dp[n] << endl;
	}
    
    return 0;
}
