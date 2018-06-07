#include <bits/stdc++.h>
using namespace std;

int ar[100][100];

void getMaxCoins(int n, int m) 
{
	int coins[n][m];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			coins[i][j] = 0;
		}
	}

	for(int j = 0; j < m; j++)
		coins[0][j] = ar[0][j];

	for(int i = 1; i < n; i++) {
		for(int j = 0; j < m; j++) {
			int left = 0;
			if(j != 0)
				left = coins[i - 1][j - 1];

			int right = 0;
			if(j != m - 1)
				right = coins[i - 1][j + 1];

			coins[i][j] = ar[i][j] + max(left, right);
		}
	}
	int maxCoins = 0;
	for(int j = 0; j < m; j++)
		maxCoins = max(maxCoins, coins[n - 1][j]);

	cout << maxCoins << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	
	while(t--) {
		int n, m;
		cin >> n >> m;


		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++) {
				cin >> ar[i][j];
			}
		}

		getMaxCoins(n, m);
	}
	
	return 0;
}