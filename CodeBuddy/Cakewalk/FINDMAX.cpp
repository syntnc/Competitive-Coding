#include <bits/stdc++.h>
using namespace std;

int main() {
	
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    
    while(t--) {
        map <long long, int> m;
        int l;
        cin >> l;
        long long ar[201];
        for(int i = 0; i < l; i++) {
            cin >> ar[i];
            m[ar[i]]++;
        }
        sort(ar, ar + l);
        
        long long ans = -1;
        bool flag = false;
        for(int i = l - 1; i >= 2; i--) {
            for(int j = 0; ar[j] < ar[i]; j++) {
                if(ar[i] - ar[j] == ar[j]) {
                    if(m[ar[i] - ar[j]] > 1) {
                        flag = true;
                        ans = ar[i];
                    }
                }
                else if(m[ar[i] - ar[j]]) {
                    flag = true;
                    ans = ar[i];
                }
                if(flag)
                    break;
            }
            if(flag)
                break;
        }
        cout << ans << endl;
    }
	return 0;
}