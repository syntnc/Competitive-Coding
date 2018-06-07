#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	int x, y, dist;
};

int row[] = { -1, 0, 0, 1 };
int col[] = { 0, -1, 1, 0 };

int mat[1001][1001];
bool visited[1001][1001];

bool isValid(int M, int N, int row, int col)
{
	return (row >= 0) && (row < M) && (col >= 0) && (col < N) 
		&& mat[row][col] && !visited[row][col];
}

void BFS(int M, int N, int i, int j, int x, int y)
{
	memset(visited, false, sizeof visited);
	queue <Node> q;
	visited[i][j] = true;
	q.push({i, j, 0});
	int min_dist = INT_MAX;

	while (!q.empty()) 
	{
		Node node = q.front();
		q.pop();
		int i = node.x, j = node.y, dist = node.dist;
		if (i == x && j == y) {
			min_dist = dist;
			break;
		}
		for (int k = 0; k < 4; k++) {
			if (isValid(M , N, i + row[k], j + col[k])) {
				visited[i + row[k]][j + col[k]] = true;
				q.push({ i + row[k], j + col[k], dist + 1 });
			}
		}
	}

	if (min_dist != INT_MAX)
		cout << min_dist << endl;
	else
		cout << "-1" << endl;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;

	while(t--) {
		int N, M;
		cin >> N >> M;

		for(int i =  0; i < N; i++) 
			for(int j = 0; j < M; j++)
				mat[i][j] = 1;

		int sx, sy, dx, dy;
		cin >> sx >> sy >> dx >> dy;
		int p;
		cin >> p;
		while(p--) {
			int x, y;
			cin >> x >> y;
			mat[x - 1][y - 1] = 0;
		}
		BFS(N, M, sx - 1, sy - 1, dx - 1, dy - 1);
	}

	return 0;
}