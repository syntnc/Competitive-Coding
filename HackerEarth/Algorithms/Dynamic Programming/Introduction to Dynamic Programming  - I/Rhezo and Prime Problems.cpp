#include <bits/stdc++.h>
using namespace std;

#define MAX 5001

int p[MAX + 1] = {0};
vector <long long> v;
long long dp[MAX + 1] = {0};

void sieve() 
{
	for(long long i = 2; i <= MAX; i++) {
		if(!p[i]) {
			for(long long j = i * i; j <= MAX; j += i)
				p[j] = 1;
			v.push_back(i);
		}
	}
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    sieve();
    
    long long pre[n + 1], x;
    pre[0] = 0;
    for(int i = 1; i <= n; i++) {
    	cin >> x;
    	pre[i] = pre[i - 1] + x;
    }
    
    for(int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1];
        for(int j = 0; j < v.size() and v[j] <= i; j++) {
            if(i == v[j])
                dp[i] = max(dp[i], pre[i]);
            else
                dp[i] = max(dp[i], pre[i] - pre[i - v[j]] + dp[i - v[j] - 1]);
        }
    }
    cout << dp[n] << endl;
    
    return 0;
}
