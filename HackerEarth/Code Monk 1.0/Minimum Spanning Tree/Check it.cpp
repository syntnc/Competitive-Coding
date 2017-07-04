#include <bits/stdc++.h>
using namespace std;

int parent[5001];
vector <pair<int, int>> adj;

void makeSet(int n)
{
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
	}
}

int findParent(int x)
{
	if(parent[x] == x)
		return x;
	return (parent[x] = findParent(parent[x]));
}

void makeUnion(int x, int y)
{
	int xset = findParent(x);
	int yset = findParent(y);
	
	if(xset != yset) {
		parent[xset] = yset;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--) {
		int n, m;
		scanf("%d %d", &n, &m);
		adj.clear();
		while(m--) {
			int u, v;
			scanf("%d %d", &u, &v);
			adj.push_back(make_pair(u, v));
		}
		makeSet(n);
		for(int i = 0; i < n - 1; i++) {
			int edge;
			scanf("%d", &edge);
			makeUnion(adj[edge - 1].first, adj[edge - 1].second);
		}
		int flag = 1;
		for(int i = 1; i < n; i++) {
			if(findParent(i) != findParent(i + 1)) {
				flag = 0;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}