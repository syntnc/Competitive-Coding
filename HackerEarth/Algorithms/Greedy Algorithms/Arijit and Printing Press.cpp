#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	string s, s1 = "", r, sr = "";
    	cin >> s >> r;
    	int lr = r.length(), ls = s.length();
    	multiset <char> m;
    	for(int i = 0; i < lr; i++)
    		m.insert(r[i]);
    	multiset <char> :: iterator it = m.begin();
    	for(int i = 0; i < ls; i++) {
    		if(it != m.end() && *it < s[i]) {
    			s1 += *it;
    			it++;
    		}
    		else
    			s1 += s[i];
    	}
    	cout << s1 << endl;
    }
    return 0;
}