#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while (t-- ) {
		string s;
		cin >> s;
		int c1 = 0, c2 = 0, l = s.length();
	    for(int i = 0; i < l; i++) {
	    	if(s[i] == 'S') {
	    		if(s.substr(i + 1, 6) == "UVOJIT") {
	    			c2++;
	    			i = i + 5;
	    		}
	    		else if(s.substr(i + 1, 3) == "UVO") {
	    			c1++;
	    			i = i + 2;
	    		}
	    	}
	    }
	    cout << "SUVO = " << c1 << ", SUVOJIT = " << c2 << endl;
	}
    return 0;
}