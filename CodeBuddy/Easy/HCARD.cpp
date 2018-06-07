#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
    
        map <int, int> m;
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            m[arr[i]]++;
        }
    
        int count = 0;
        sort(arr, arr + n);
        int a = 0;
        for(int i = 1; i <= 2 * n; i++) {
            a += m[i];
            if(!m[i] and a) {
                count++;
                a--;
            }

        }

        if(!(n & 1) && count == n / 2)
            cout << "Tie" << endl;
        else if(count > n / 2)
            cout << "Alice" << endl;
        else if(count <= n / 2)
            cout << "Bob" << endl;
    }
        
    return 0;
}