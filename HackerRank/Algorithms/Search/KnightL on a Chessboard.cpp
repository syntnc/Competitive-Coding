#include <bits/stdc++.h>
using namespace std;

struct Node 
{
	int x, y, dist;
};

#define MAX 25

int mat[MAX + 1][MAX + 1];
bool visited[MAX + 1][MAX + 1];

bool isValid(int N, int row, int col)
{
	return (row >= 0) && (row < N) && (col >= 0) && (col < N) 
            && !visited[row][col];
}

int BFS(int N, int i, int j, int x, int y, int row[], int col[])
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
		for (int k = 0; k < 8; k++) {
			if (isValid(N, i + row[k], j + col[k])) {
				visited[i + row[k]][j + col[k]] = true;
				q.push({ i + row[k], j + col[k], dist + 1 });
			}
		}
	}

	if (min_dist != INT_MAX)
		return min_dist;
	else
		return -1;
}

int main()
{
	ios::sync_with_stdio(false);
    int N;
    cin >> N;

    for(int a = 1; a <= N; a++) {
        for(int b = 1; b <= a; b++) {
            int row[8] = {a, a, -a, -a, b, b, -b, -b};
            int col[8] = {b, -b, b, -b, a, -a, a, -a};
            int answer = BFS(N, 0, 0, N-1, N-1, row, col);
            mat[a][b] = mat[b][a] = answer;
        }
    }

    for(int i = 1; i < N; i++) {
        for(int j = 1; j< N; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

	return 0;
}