#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int bit[1000001];
    int n, q;
    cin >> n >> q;
    for(int i = 0; i < n; i++)
        cin >> bit[i];
    while(q--) {
        int qtype;
        cin >> qtype;
        if(qtype == 0) {
            int l, r;
            cin >> l >> r;
            if(bit[r - 1] == 0) cout << "EVEN" << endl;
            else cout << "ODD" << endl;
        } else {
            int x;
            cin >> x;
            bit[x - 1] = 1 - bit[x - 1];
        }
    }
    return 0;
}