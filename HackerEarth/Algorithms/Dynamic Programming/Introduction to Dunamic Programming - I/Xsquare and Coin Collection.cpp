#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
    	long long n, k;
    	cin >> n >> k;
    	
    	long long h[n];
    	for(int i = 0; i < n; i++) {
    		cin >> h[i];
    	}
    	
    	long long sum = 0, maxSum = 0;
    	for(int i = 0; i < n; i++) {
    		if(h[i] > k) {
    			sum = 0;
    		} else {
    			sum += h[i];
    			maxSum = max(sum, maxSum); 
    		}
    	}
    	cout << maxSum << endl;
    }
    
    return 0;
}