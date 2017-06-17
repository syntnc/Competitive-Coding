#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	long long ar[n];
	for(int i = 0; i < n; i++) {
		cin >> ar[i];
	}

	long long nge[1000001] = {0}; //NEXT GREATEST ELEMENT
	long long pge[1000001] = {0}; //PREVIOUS GREATEST ELEMENT
	stack <int> s1, s2;

	s1.push(0);
	for(int i = 1; i < n; i++) {
		while(!s1.empty() && ar[s1.top()] < ar[i]) {
			nge[s1.top()] = i + 1;
			s1.pop();
		}
		s1.push(i);
	}

	s2.push(n - 1);
	for(int i = n - 1; i >= 0; i--) {
		while(!s2.empty() && ar[s2.top()] < ar[i]) {
			pge[s2.top()] = i + 1;
			s2.pop();
		}
		s2.push(i);
	}

	for(int i = 0; i < n; i++) {
		long long ans = nge[i] + pge[i];
		if(!nge[i]) ans -= 1;
		if(!pge[i]) ans -= 1;
		cout << ans << " ";
	}
	cout << endl;

	return 0;
}