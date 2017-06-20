#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		long long t, lt, sum;
		cin >> t >> lt >> sum;
		long long n = (2 * sum) / (t + lt);
		long long d = (lt - t) / (n - 5);
		long long a = t - (2 * d);
		cout << n << endl;
		for(int i = 0; i < n; i++) {
			cout << a + (i * d) << " ";
		}
		cout << endl;
	}
	return 0;
}