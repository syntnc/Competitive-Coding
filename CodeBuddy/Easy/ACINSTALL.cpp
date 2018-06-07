#include  <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        int n, r, x;
        cin >> n >> r;
        vector <int> room;
        for(int i = 0; i < n; i++) {
            cin >> x;
            room.push_back(x);
        }
        sort(room.begin(), room.end());
        int left = 0, ac = 0;
        while(left < n) {
            int ac_pos = upper_bound(room.begin(), room.end(), room[left] + r) - room.begin() - 1;
            ac++;
            left = upper_bound(room.begin(), room.end(), room[ac_pos] + r) - room.begin();
        }
        cout << ac << endl;
    }

    return 0;
}