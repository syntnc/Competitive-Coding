#include <bits/stdc++.h>
using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    while(t--) {
        stack <char> st;

        string s;
        cin >> s;
        int len = s.length();

        for(int i = 0; i < len; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
                st.push(s[i]);
            else {
                if(st.empty()) {
                    st.push(s[i]);
                    break;
                }
                if(s[i] == ')' && st.top() == '(')
                    st.pop();
                else if(s[i] == '}' && st.top() == '{')
                    st.pop();
                else if(s[i] == ']' && st.top() == '[')
                    st.pop();
                else
                    break;
            }
        }
        if(st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
