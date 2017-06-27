#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	stack <int> st;
	int n, sum = 0;
	cin >> n;
	while(n--) {
		int x;
		cin >> x;
		if(x) {
			st.push(x);
			sum += x;
		} else {
			sum -= st.top();
			st.pop();
		}
	}
	cout << sum << endl;
    return 0;
}