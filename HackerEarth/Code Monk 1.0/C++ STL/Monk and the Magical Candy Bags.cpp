#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t, n, k;
	long long int sum, candy;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		multiset <long long int, greater<long long int>> candies;
		for(int i = 0; i < n; i++) {
			cin >> candy;
			candies.insert(candy);
		}
		sum = 0;
		while(k--) {
			multiset<long long int>::iterator it = candies.begin();
			sum += *it;
			candies.erase(it);
			candies.insert((*it) / 2);
		}
		cout << sum << endl;
	}
    return 0;
}
