#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    stack <int> st;
    st.push(0);
    int count = 0;
    int a[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++) {
        if(a[i] > 0) {
            st.push(i);
        } else {
            int peak = st.top();
            st.pop();
            if(a[peak] + a[i] == 0) {
                if(!st.empty())
                    count = max(count, i - st.top());
                else
                    st.push(i);
            } else {
                st.push(i);
            }
        }
    }
    cout << count;
    return 0;
}
