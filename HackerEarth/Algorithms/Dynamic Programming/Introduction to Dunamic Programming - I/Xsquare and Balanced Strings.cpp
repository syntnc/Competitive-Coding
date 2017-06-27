#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
    	string s;
    	cin >> s;
    	int l = s.length();
		map <char, int> m;
		for(int i = 0; i < l; i++) {
			m[s[i]]++;
		}
		int flag = 1;
		for(int i = 0; i < 26; i++) {
			if(m[(char)(97 + i)] & 1) {
				flag = -1;
				break;
			}
		}
		cout << flag << endl;
    }
    
    return 0;
}