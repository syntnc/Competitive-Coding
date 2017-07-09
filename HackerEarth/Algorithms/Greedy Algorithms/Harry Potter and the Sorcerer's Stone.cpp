#include <bits/stdc++.h>
using namespace std;
 
#define MAX 8
#define INF -1
#define pos pair<int, int>
 
int row[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int col[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int dist[MAX + 1][MAX + 1];
bool visited[MAX + 1][MAX + 1];
 
bool isValid(int x, int y) 
{
    if(x <= 8 and x > 0 and y <= 8 and y > 0)
        return true;
    return false;
}
 
int bfs(int sx, int sy, int dx, int dy) 
{
    memset(visited, false, sizeof(visited));
    memset(dist, INF, sizeof(dist));
    
    dist[sx][sy] = 0;
    visited[sx][sy] = true;
    queue <pos> q;
    q.push(make_pair(sx, sy));
    
    while(!q.empty()) {
        pos p = q.front();
        q.pop();
        for(int i = 0; i < 8; i++) {
            int move_x = p.first + row[i];
            int move_y = p.second + col[i];
            if(isValid(move_x, move_y) && !visited[move_x][move_y]) {
                visited[move_x][move_y] = true;
                dist[move_x][move_y] = dist[p.first][p.second] + 1;
                q.push(make_pair(move_x, move_y));
            }
        }
    }
    return dist[dx][dy];
}
 
int main()
{
    ios::sync_with_stdio(false);
    int sx, sy, dx, dy;
    cin >> sx >> sy >> dx >> dy;
    cout << bfs(sx, sy, dx, dy) << endl; 
    return 0;
}