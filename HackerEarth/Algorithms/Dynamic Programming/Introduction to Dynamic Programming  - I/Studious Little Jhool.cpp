#include <iostream>
using namespace std;

int main()
{
    ios:: sync_with_stdio(false);
    int dp[133];
    for(int i = 0; i < 114; i++)
    	dp[i] = -1;
    for(int i = 1; i < 12; i++)
    	for(int j = 0; j <= i; j++)
    		if(dp[j*10 + (i - j)*12] != -1)
    			dp[j*10 + (i - j)*12] = min(dp[j*10 + (i - j)*12], i);
    		else
    			dp[j*10 + (i - j)*12] = i;
   	int t;
   	cin >> t;
   	while(t--) {
   		int n;
   		cin >> n;
   		cout << dp[n] << endl;
   	}
    return 0; 
}
