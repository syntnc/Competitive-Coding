#include <bits/stdc++.h>
using namespace std;

map <int, int> m;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	m.clear();
    	int n, count = 0;
    	cin >> n;
    	while(n--) {
    		int x, y;
    		cin >> x;
    		y = x % 10;
    		if(m[y] != 0)
    			count++;
    		m[y]++;
    	}
    	cout << count << endl;
    }
    return 0;
}
