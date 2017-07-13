#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    queue <int> q[5];
    int etime[5];
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        char c;
        cin >> c;
        if(c == 'E') {
            int school, roll;
            cin >> school >> roll;
            q[school].push(roll);
            if(q[school].size() == 1)
                etime[school] = i;
        } else {
            int dep = 0, first = 1e8;
            for(int j = 1; j <= 4; j++) {
                if(q[j].size() && etime[j] < first) {
                    first = etime[j];
                    dep = j;
                }
            }
            cout << dep << " " << q[dep].front() << endl;
            q[dep].pop();
        }
    }
    return 0;
}
