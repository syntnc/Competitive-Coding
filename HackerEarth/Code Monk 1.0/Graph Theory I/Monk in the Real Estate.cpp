#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	set <int> s;
    	int n;
    	cin >> n;
    	while(n--) {
    		int x, y;
    		cin >> x >> y;
    		s.insert(x);
    		s.insert(y);
    	}
    	cout << s.size() << endl;
    }
    return 0;
}