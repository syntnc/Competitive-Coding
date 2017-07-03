#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    int n;
    cin >> n;
    
    int hs[n], dp[n];
    for(int i = 0; i < n; i++) {
    	cin >> hs[i];
    	dp[i] = 1;
    }
    
    //CHECKING LEFT NEIGHBOUR
    for(int i = 1; i < n; i++) {
    	if(hs[i] > hs[i - 1])
    		dp[i] = dp[i - 1] + 1;
    	else
    		dp[i] = 1;
    }
    
    //CHECKING RIGHT NEIGHBOUR
    long long sum = dp[n - 1];
    for(int i = n - 2; i >= 0; i--) {
    	if(hs[i] > hs[i + 1] && !(dp[i] > dp[i + 1]))
    		dp[i] = dp[i + 1] + 1;
    	sum += dp[i];
    }
    
    cout << sum << endl;
    return 0;
}
