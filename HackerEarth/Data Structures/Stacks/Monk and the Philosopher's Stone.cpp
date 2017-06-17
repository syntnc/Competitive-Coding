#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int q;
    long long x, sum;
    cin >> q >> x;
    stack <int> st;
    int i = 0, flag = 0;
    while(q--){
        string s;
        cin >> s;
        if(s[0] == 'H') {
            st.push(a[i]);
            sum += a[i];
            i++;
        } else {
            sum -= st.top();
            st.pop();
        }
        if(sum == x) {
            cout << st.size() << endl;
            flag = 1;
            break;
        }
    }
    if(!flag)
        cout << -1 << endl;
    return 0;
}
