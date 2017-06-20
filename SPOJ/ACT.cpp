#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	int t, n;
	cin >> t;
	while(t--) {
		string s;
		cin >> n >> s;
		cout << s[s.length() - 1] << endl;
	}
	return 0;
}
