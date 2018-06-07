#include <bits/stdc++.h>
using namespace std;

#define MAX 1000001

int dp[MAX + 1] = {0};

void computeSteps() 
{
	for(long long i = 1; i <= MAX; i++) {
		dp[i] = i;
	}

	for(long long i = 2; i <= MAX; i++) {
		dp[i] = min(dp[i - 1] + 1, dp[i]);
		for(long long j = i + i; j <= i * i && j <= MAX; j += i) {
			dp[j] = min(dp[j], dp[i] + 1);
		}
	}
}

int main()
{
	ios::sync_with_stdio(false);
	computeSteps();

	int t;
	cin >> t;

	while(t--) {
		long long n;
		cin >> n;
		cout << dp[n] << endl;
	}

 	return 0;
}