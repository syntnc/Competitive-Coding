#include <bits/stdc++.h>
using namespace std;
 
int main() {
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		int l;
		cin >> l;
 
		int ar[1000001];
		int cur_max = 0, count = 0;
		for(int i = 0; i < l; i++) {
			cin >> ar[i];
			if(i == 0) {
				cur_max = ar[0];
				count++;
			}
			else if(ar[i] > cur_max) {
				cur_max = ar[i];
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}