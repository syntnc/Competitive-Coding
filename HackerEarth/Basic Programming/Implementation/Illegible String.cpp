#include <iostream>
using namespace std;

int main()
{
    int n, minl = 0, maxl = 0, l2 = 0;
    cin >> n;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++) {
    	if(s[i] == 'v')
    		l2 += 1;
    	else if(s[i] == 'w')
    		l2 += 2;
    	else {
    		minl += 1 + (l2 / 2) + (l2 % 2);
    		maxl += 1 + l2;
    		l2 = 0;
    	}
    }
    minl += (l2 / 2) + (l2 % 2);
    maxl += l2;
    cout << minl << " " << maxl << endl;
    return 0;
}