#include <bits/stdc++.h>
using namespace std;

int convert(string s) 
{
	int l = s.length(), ans = 0;
	for(int i = 0; i < l; i++) {
		if(!isdigit(s[i]))
			return -1;
		ans = (ans * 10) + (s[i] - 48);
	}
	return ans;
}

int main() 
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) 
	{
		string a, d1, b, d2, c;
		cin >> a >> d1 >> b >> d2 >> c;
		int n1, n2, n3;
		n1 = convert(a);
		n2 = convert(b);
		n3 = convert(c);
		if(n1 < 0) 
			n1 = n3 - n2;
		else if(n2 < 0)
			n2 = n3 - n1;
		else
			n3 = n1 + n2;
		cout << n1 << " " << d1 << " " << n2 << " " << d2 << " " << n3 << endl;
	}
	return 0;
}