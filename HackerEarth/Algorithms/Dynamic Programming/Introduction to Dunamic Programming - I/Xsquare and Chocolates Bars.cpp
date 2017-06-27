#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
        string str;
        cin >> str;
        int n = str.length() + 1;
        
        if(n - 1 <= 2)
            cout << 0 << endl;
        else {
            int s[n], dp[n];
            s[0] = 0;
            
            for(int i = 0; i < n - 1; i++) {
                s[i + 1] = s[i];
                if(str[i] == 'S')
                    s[i + 1]++;
            }
            
            dp[0] = dp[1] = dp[2] = 0;
            int max_length = 0;
            for(int i = 3; i < n; i++) {
                dp[i] = dp[i - 3];
                if(s[i] - s[i - 3] and s[i] - s[i - 3] != 3) {
                    dp[i] += 3;
                    max_length = max(max_length, dp[i]);
                }
                else
                    dp[i] = 0;
            }
            cout << n - 1 - max_length << endl;
        }
    }
    
    return 0;
}
