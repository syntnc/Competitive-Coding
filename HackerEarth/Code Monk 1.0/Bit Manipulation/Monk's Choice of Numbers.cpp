#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		int n, k, x;
		long long sum = 0;
		cin >> n >> k;
		priority_queue <int> pq;
		for(int i = 0; i < n; i++) {
			cin >> x;
			pq.push(__builtin_popcount(x));
		}
		while(k--) {
			sum += pq.top();
			pq.pop();
		}
		cout << sum << endl;
	}
    return 0;
}
