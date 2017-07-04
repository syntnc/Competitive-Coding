#include <bits/stdc++.h>
using namespace std;

multiset <int> m;

int main()
{
    int q;
    scanf("%d", &q);
    while(q--) {
        int op;
        scanf("%d", &op);
        if(op == 1) {
            int x;
            scanf("%d", &x);
            m.insert(x);
        } else if(op == 2) {
            int x;
            scanf("%d", &x);
            if(m.find(x) == m.end())
                printf("-1\n");
            else
                m.erase(m.find(x));
        } else if(op == 3) {
            if(m.size() > 0)
                printf("%d\n", *(m.rbegin()));
            else
                printf("-1\n");
        } else if(op == 4) {
            if(m.size() > 0)
                printf("%d\n", *(m.begin()));
            else
                printf("-1\n");
        }
    }
    return 0;
}