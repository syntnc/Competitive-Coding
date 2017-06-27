#include <iostream>
using namespace std;

int a[1000000];

int maxContiguousSum(int size)
{
	int max_so_far = a[0];
   	int curr_max = a[0];
 
   	for (int i = 1; i < size; i++)
   	{
   		curr_max = max(a[i], curr_max+a[i]);
   		max_so_far = max(max_so_far, curr_max);
   	}
   	return max_so_far;
}

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
    	string s;
    	cin >> s;
    	int l = s.length(), count = 0;
    	
    	for(int i = 0; i < l; i++) {
    		if(s[i] == 'K')
    			a[i] = 1;
    		else {
    			a[i] = -1;
    			count++;
    		}
    	}
    	int max_sum = maxContiguousSum(l);
    	cout << count + max_sum << endl;
    }
    return 0;
}