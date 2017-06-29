#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    
    int n, q;
    cin >> n >> q;
    
    long long a[n], b[n];
    for(int i = 0; i < n; i++)
    	cin >> a[i];
    for(int i = 0; i < n; i++)
    	cin >> b[i];
    	
    long long s1[n + 1], s2[n + 1];
    s1[0] = s2[0] = 0;
    for(int i = 0; i < n; i++) {
    	if(i % 2) {
    		s1[i + 1] = s1[i] + b[i];
    		s2[i + 1] = s2[i] + a[i];
    	}
    	else {
	    	s1[i + 1] = s1[i] + a[i];
	    	s2[i + 1] = s2[i] + b[i];
    	}
    }
    
    while(q--) {
    	int type, l, r;
    	cin >> type >> l >> r;
    	if(type & 1 && l & 1 || !(type & 1) && !(l & 1))
    		cout << s1[r] - s1[l - 1] << endl;
    	else
    		cout << s2[r] - s2[l - 1] << endl;
    }
    
    return 0;
}