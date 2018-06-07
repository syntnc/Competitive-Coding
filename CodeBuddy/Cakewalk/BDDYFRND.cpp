#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	while(t--) {
	    map <long long, int> m;
	    int n;
	    cin >> n;
	    for(int i = 0; i < n; i++) {
	        long long x;
	        cin >> x;
	        if(m[x])
	            cout << "YES" << endl;
	        else {
	            cout << "NO" << endl;
	            m[x] = 1;
	        }
	    }
    }
	return 0;
}