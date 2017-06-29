#include <bits/stdc++.h>
using namespace std;

#define MAX 1000000

int main()
{
	ios::sync_with_stdio(false);
    
    int dp[MAX + 1];
    dp[2] = dp[3] = dp[5] = dp[7] = 1;
    dp[1] = -1;
    dp[4] = dp[6] = dp[8] = 2;
    for(int i = 9; i != MAX; i++) {
    	dp[i] = min(dp[i - 2], min(dp[i - 3], min(dp[i - 5], dp[i - 7]))) + 1;
    }
    
    int t;
    cin >> t;
    
    while(t--) {
    	int x;
    	cin >> x;
    	cout << dp[x] << endl;
    }
    
    return 0;
}