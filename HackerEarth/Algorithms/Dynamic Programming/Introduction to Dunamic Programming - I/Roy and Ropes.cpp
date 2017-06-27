#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t;
    cin >> t;
    while(t--) {
    	int l;
    	cin >> l;
    	int upper[l + 1], lower[l + 1], dp[l + 1];
    	
    	for(int i = 1; i < l; i++) {
    		cin >> upper[i];
    	}
    	for(int i = 1; i < l; i++) {
    		cin >> lower [i];
    	}
    	
    	upper[l] = 0;
    	lower[l] = 0;
    	dp[0] = 0;
    	for(int i = 1; i <= l; i++) {
    		dp[i] = max(dp[i - 1], (i + max(upper[i], lower[i])));
    	}
    	cout << dp[l] << endl;
    }
    return 0;
}