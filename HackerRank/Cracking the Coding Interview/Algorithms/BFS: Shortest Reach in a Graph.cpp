#include <bits/stdc++.h>
using namespace std;

int dist[3001];
vector <int> adj[3001];
int visited[3001];
int n, m;

void bfs(int source)
{
	queue <int> q;
	q.push(source);
    visited[source] = 1;
    
	while(!q.empty()) {
		int v = q.front();
		q.pop();
		for(int i = 0; i < adj[v].size(); i++) {
			int to = adj[v][i];
			if(!visited[to]) {
                visited[to] = 1;
                dist[to] = dist[v] + 6;
                q.push(to);
            }
		}
	}
    
	for(int i = 1; i <= n; i++) {
        if(i != source) {
            if(dist[i] == 1e8)
                cout << -1 << " ";
            else
                cout << dist[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    
    while(t--) {
        cin >> n >> m;
        while(m--) {
            int x, y, dist;
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        
        int s;
        cin >> s;
        for(int i = 1; i <= n; i++) {
				dist[i] = 1e8;
				visited[i] = 0;
	    }
		dist[s] = 0;
        bfs(s);
        for(int i = 1; i <= n; i++) {
			adj[i].clear();
		}
    }
    
    return 0;
}