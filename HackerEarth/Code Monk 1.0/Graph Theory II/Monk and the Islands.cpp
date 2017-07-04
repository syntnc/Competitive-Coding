#include <bits/stdc++.h>
using namespace std;

vector <int> adj[10001];
long long dist[10001];

int dijkstra(int n)
{
	priority_queue <int> q;
	q.push(1);
	while(q.size()) {
		int v = q.top();
		q.pop();
		
		for(int i = 0; i < adj[v].size(); i++)
        {
            int to = adj[v][i];
			if (dist[to] <= dist[v] + 1)
            	continue;
            dist[to] = dist[v]+1;
            q.push(to);
    	}
	}
	return dist[n];
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	
    	for(int i = 2; i <= n; i++) {
    		adj[i].clear();
    		dist[i] = 1e9;
    	}
    	adj[1].clear();
    	dist[1] = 0;
    	
    	for(int i = 0; i < m; i++) {
    		int u, v;
    		cin >> u >> v;
    		adj[u].push_back(v);
    		adj[v].push_back(u);
    	}
    	
    	cout << dijkstra(n) << endl;
    }
    return 0;
}
