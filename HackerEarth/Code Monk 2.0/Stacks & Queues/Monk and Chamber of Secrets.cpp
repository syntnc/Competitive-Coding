#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n, x;
    cin >> n >> x;
    
    queue < pair <int, int> > q, aux, sel;
    pair <int, int > select;
    
    for(int i = 0; i < n; i++) {
        int in;
        cin >> in;
        q.push(make_pair(in, i + 1));
    }
    
    for(int it = 0; it < x; it++) {
        int s = q.size();
        select = make_pair(-1, 0);
        for(int i = 0; i < min(x, s); i++) {
            if(q.front().first > select.first)
                select = q.front();
            aux.push(q.front());
            q.pop();
        }
        sel.push(select);
        while(!aux.empty()) {
            if(aux.front().first == select.first) {
                select = make_pair(-1, 0);
            } else {
                if(aux.front().first)
                    q.push(make_pair(aux.front().first - 1, aux.front().second));
                else
                    q.push(aux.front());
            }
            aux.pop();
        }
    }
    
    while(!sel.empty()) {
        cout << sel.front().second << " ";
        sel.pop();
    }
    cout << endl;
    
    return 0;
}
