#include<bits/stdc++.h>
using namespace std;

#define N 1000
#define INF 1e8

bool visited[N + 1];
int dist[N + 1];
vector <int> graph[N + 1];

void dfs(int s, int level)
{
    visited[s] = true;
    dist[s] = level;
    for(int i = 0; i < graph[s].size(); i++)
    {
        if(!visited[graph[s][i]])
            dfs(graph[s][i], level + 1);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    
    int n, q;
    cin >> n;
    
    for(int i = 0; i < n - 1; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
    }

    memset(visited, false, sizeof(visited));
    memset(dist, INF, sizeof(dist));
    dist[1] = 0;
    dfs(1, 0);

    cin >> q;
    int girl, min_distance = INF;
    while(q--) {
        int g;
        cin >> g;
        if(dist[g] < min_distance) {
            min_distance = dist[g];
            girl = g;
        }
    }
    cout << girl << endl;
    
    return 0;
}