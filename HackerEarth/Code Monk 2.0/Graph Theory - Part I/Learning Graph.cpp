#include <bits/stdc++.h>
using namespace std;

#define edge pair<int, int>
#define N 1000
#define M 1000000

int val[N + 1];
priority_queue <edge> adj[N + 1];

void print_kth(int n, int k)
{
    for(int i = 1; i <= n; i++) {
        NEXT: int node;
        for(int j = 0; j < k; j++) {
            if(adj[i].empty()) {
                cout << -1 << endl;
                i++;
                if(i <= n) goto NEXT;
                else goto EXIT;
            }
            node = adj[i].top().second;
            adj[i].pop();
        }
        cout << node << endl;
    }
    EXIT: return;
}

int main()
{
    ios::sync_with_stdio(false);

    int n, m, k;
    cin >> n >> m >> k;

    for(int i = 0; i < n; i++)
        cin >> val[i + 1];

    for(int i = 0; i < m; i++) {
        int node1, node2;
        cin >> node1 >> node2;
        adj[node1].push(make_pair(val[node2], node2));
        adj[node2].push(make_pair(val[node1], node1));
    }
    
    print_kth(n, k);

    return 0;
}