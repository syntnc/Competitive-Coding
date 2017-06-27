#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t, count = 0;
    cin >> t;
    while(t--) {
    	string s;
    	cin >> s;
    	int l = s.length();
    	stack <int> st;
    	for(int i = 0; i < l; i++) {
    		if(st.empty() || st.top() != s[i] - 65) {
    			st.push(s[i] - 65);
    		} else {
    			st.pop();
    		}
    	}
    	if(st.empty())
    		count++;
    }
    cout << count << endl;
    return 0;
}