#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, e, l, r;
    cin >> t;
    for(int i  = 0; i < t; i++) {
    	set <int> s;
    	cin >> n;
    	for(int j = 0; j < n; j++) {
    		cin >> e;
    		s.insert(e);
    	}
    	l = 0; r = n - 1;
    	std::set<int>::iterator i1=s.end();
    	i1--;
    	std::set<int>::iterator i2=s.begin();
    	while(*i1 > *i2) {
    		cout << *i1 << ' '; 
    		cout << *i2 << ' ';
    		i1--;
    		i2++;
    	}
    	if(*i1 == *i2) cout << *i1;
    	cout << endl;
    }
    return 0;
}