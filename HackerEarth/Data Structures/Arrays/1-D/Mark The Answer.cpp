#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, flag = 1, ans = 0;
    long long diff, cutoff;
    cin >> n >> cutoff;
    while(n--) {
    	cin >> diff; 
    	if(diff > cutoff) {
    		if(!flag)
    			break;
    		flag = 0;
    		continue;
    	}
    	ans++;
    }
    cout << ans << endl;
    return 0;
}
