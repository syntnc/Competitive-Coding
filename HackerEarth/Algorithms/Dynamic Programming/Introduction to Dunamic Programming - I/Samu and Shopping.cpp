#include <bits/stdc++.h>
using namespace std;
 
int main() 
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int a[3][n], b[3][n];
	    
	    for(int i = 0; i < n; i++)
	    {
	        cin >> a[0][i] >> a[1][i] >> a[2][i];
	        
	    }

	    b[0][0] = a[0][0];
	    b[1][0] = a[1][0];
	    b[2][0] = a[2][0];
	    for(int i = 1; i < n; i++)
	    {
	        b[0][i] = a[0][i] + min(b[1][i-1], b[2][i-1]);
	        b[1][i] = a[1][i] + min(b[0][i-1], b[2][i-1]);
	        b[2][i] = a[2][i] + min(b[0][i-1], b[1][i-1]);
	    }

	    cout << min(b[0][n-1], min(b[1][n-1], b[2][n-1])) << endl;
	}
	return 0;
}
