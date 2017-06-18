#include <bits/stdc++.h>
using namespace std;

#define edge pair<int, int> 

int mat[3001][3001];
int dist[3001];
vector <edge> adj[3001];
int visited[3001];
int n, m;

void dijkstra(int source)
{
	priority_queue <edge, vector<edge>, greater <edge>> q;
	q.push(make_pair(0, source));
	while(q.size()) {
		edge v = q.top();
		q.pop();
        if (visited[v.second])
            continue;
        visited[v.second] = 1;
		for(int i = 0; i < adj[v.second].size(); i++) {
			int to = adj[v.second][i].first;
			if(dist[to] <= dist[v.second] + adj[v.second][i].second)
				continue;
			dist[to] = dist[v.second] + adj[v.second][i].second;
			q.push(make_pair(dist[to],to));
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
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= n; j++) {
                mat[i][j] = 1e8;
            }
        }
        while(m--) {
            int x, y, dist;
            cin >> x >> y >> dist;
            mat[x][y] = min(mat[x][y], dist);
            mat[y][x] = min(mat[y][x], dist);
        }
        
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(mat[i][j] != 1e8)
                    adj[i].push_back(make_pair(j, mat[i][j]));
            }
        }
        
        int s;
        cin >> s;
        for(int i = 1; i <= n; i++) {
				dist[i] = 1e8;
				visited[i] = 0;
	    }
		dist[s] = 0;
        dijkstra(s);
        for(int i = 1; i <= n; i++) {
			adj[i].clear();
		}
    }
    
    return 0;
}