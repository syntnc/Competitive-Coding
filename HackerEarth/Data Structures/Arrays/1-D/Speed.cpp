#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	long long ans = 1, constraint;
    	cin >> constraint;
    	n--;
    	
    	while(n--) {
    		long long speed;
    		cin >> speed;
    		if(speed <= constraint) {
    			ans++;
    			constraint = speed;
    		}
    	}
    	cout << ans << endl;
    }
    return 0;
}