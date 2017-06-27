#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    for(int x = 0; x < t; x++) {
        int n;
        cin >> n;
        cout << "Case "<< (x + 1) << ": ";
        
        long long ar[n];
        long long dp[n];
        
        for(int i = 0; i < n; i++)
            cin >> ar[i];
        
        if(n == 1) 
            cout << ar[0] << endl;
        else {
            dp[0] = ar[0];
            dp[1] = ar[1];
            dp[2] = dp[0] + ar[2];
            for(int i = 3; i < n; i++) {
                dp[i] = max(dp[i - 2], dp[i - 3]) + ar[i];
            }
            cout << max(dp[n - 1], dp[n - 2]) << endl;
        }
    }
    
    return 0;
}