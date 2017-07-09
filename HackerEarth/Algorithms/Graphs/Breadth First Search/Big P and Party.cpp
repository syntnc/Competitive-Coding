#include <bits/stdc++.h>
using namespace std;

#define edge pair<int, int> 
#define MAX 1000
#define INF 1e8

int dist[MAX + 1];
vector <int> adj[MAX + 1];
bool visited[MAX + 1];
int n, m;

void bfs(int source)
{
    memset(dist, INF, sizeof(dist));
    memset(visited, false, sizeof(visited));
    dist[source] = 0;
	queue <int> q;
	q.push(source);
	while(q.size()) {
		int v = q.front();
		q.pop();
		for(int i = 0; i < adj[v].size(); i++) {
			int to = adj[v][i];
            if(!visited[to]) {
                visited[to] = true;
			    dist[to] = dist[v] + 1;
			    q.push(to);
            }
		}
	}
    
	for(int i = 0; i < n; i++) {
        if(i != source) {
            if(dist[i] == INF)
                cout << -1 << endl;
            else
                cout << dist[i] << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);

    cin >> n >> m;

    for(int i = 0; i < m; i++) {
        int dancer1, dancer2;
        cin >> dancer1 >> dancer2;
        adj[dancer1].push_back(dancer2);
        adj[dancer2].push_back(dancer1);
    }

    bfs(0);
    
    return 0;
}