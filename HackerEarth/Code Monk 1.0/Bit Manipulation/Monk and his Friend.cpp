#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	long long p, m, t, count = 0;
    	cin >> p >> m;
    	p ^= m;
    	bitset <64> b(p);
    	cout << b.count() << endl;
    }
    return 0;
}
