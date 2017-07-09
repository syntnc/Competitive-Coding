#include <bits/stdc++.h>
using namespace std;

#define edge pair<int, int>
#define N 100000

int dist[N + 1];
bool visited[N + 1];
vector <edge> graph[N + 1];
int n;

void bfs(int source)
{
    memset(dist, 0, sizeof(dist));
    memset(visited, false, sizeof(visited));
    dist[source] = 0;
    visited[source] = true;

    queue <int> q;
    q.push(source);
    while(!q.empty()) {
        int v = q.front();
        q.pop();
        for(int i = 0; i < graph[v].size(); i++) {
            edge e = graph[v][i];
            if(!visited[e.first]) {
                visited[e.first] = true;
                dist[e.first] = dist[v] + e.second;
                q.push(e.first);
            }
        }
    }
}

int get_diameter()
{
    bfs(1);
    bfs(max_element(dist + 1, dist + n + 1) - dist);
    return *max_element(dist + 1, dist + n + 1);
}

int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        cin >> n;

        for(int i = 0; i < n - 1; i++) {
            int a, b, dist;
            cin >> a >> b >> dist;
            graph[b].push_back(make_pair(a, dist));
            graph[a].push_back(make_pair(b, dist));
        }

        int max_distance = get_diameter();

        if(max_distance <= 100)
            cout << 0;
        else if(max_distance <= 1000)
            cout << 100;
        else if(max_distance <= 10000)
            cout << 1000;
        else
            cout << 10000;
        cout << " " << max_distance << endl;

        for(int i = 1; i <= n; i++) {
			graph[i].clear();
		}
    }

    return 0;
}