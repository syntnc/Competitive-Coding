#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        int t1[n], t2[n];
        int c1[n - 1], c2[n - 1];
        long long dp[n][2];

        for(int i = 0; i < n; i++)
            cin >> t1[i];
            
        for(int i = 0; i < n; i++)
            cin >> t2[i];
            
        for(int i = 0; i < n - 1; i++)
            cin >> c1[i];
            
        for(int i = 0; i < n - 1; i++)
            cin >> c2[i];
        
        dp[0][0] = t1[0];
        dp[0][1] = t2[0];
        for(int i = 1; i < n; i++) {
            dp[i][0] = min(dp[i - 1][0], dp[i - 1][1] + c2[i - 1]) + t1[i];
            dp[i][1] = min(dp[i - 1][0] + c1[i - 1], dp[i - 1][1]) + t2[i];
        }
        cout << min(dp[n - 1][0], dp[n - 1][1]) << endl;
    }
    return 0;
}
