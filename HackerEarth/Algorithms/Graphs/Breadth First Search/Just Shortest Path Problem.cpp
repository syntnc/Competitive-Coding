#include <bits/stdc++.h>
using namespace std;

#define N 1000
#define M 500000

vector <int> graph[N + 1];
bool visited[N + 1];
int dist[N + 1];
int n, m;

void bfs(int source)
{
    memset(visited, false, sizeof(visited));

    queue <int> q;
    q.push(source);

    while(!q.empty()) {
        int v = q.front();
        q.pop();

        for(int i = 0; i < graph[v].size(); i++) {
            int to = graph[v][i];
            if(!visited[to]) {
                visited[to] = true;
                if(dist[to] == -1 || dist[to] > dist[v] + 1) {
                    dist[to] = dist[v] + 1;
                    q.push(to);
                }
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    memset(dist, -1, sizeof(dist));
    dist[1] = 0;
    cin >> n >> m;

    while(m--) {
        int type;
        cin >> type;
        if(type == 1) {
            int destination;
            cin >> destination;
            cout << dist[destination] << endl;
        } else {
            int x, y;
            cin >> x >> y;
            graph[x].push_back(y);
            if(dist[x] != -1)
                bfs(x);
        }
    }
}