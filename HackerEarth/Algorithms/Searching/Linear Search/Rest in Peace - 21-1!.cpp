#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	long long n, flag = 1;
    	cin >> n;
    	if(n % 21 == 0) {
    		flag = 0;
    	}
    	else {
    		int state = 0;
    		while(n != 0) {
    			if(n % 10 == 1) {
    				state = 1;
    				n /= 10;
    				continue;
    			}
    			if(state == 1 && n % 10 == 2) {
    				flag = 0;
    				break;
    			}
    			else {
    				state = 0;
    				n /= 10;
    			}
    		}
    	}
    	if(flag)
    		cout << "The streak lives still in our heart!" << endl;
    	else
    		cout << "The streak is broken!" << endl;
    }
    return 0;
}