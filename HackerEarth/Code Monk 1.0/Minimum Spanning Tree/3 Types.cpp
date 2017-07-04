#include <bits/stdc++.h>
using namespace std;

vector <pair<int, pair<int, int>>> adj;
int parent[1001], edgeMen = 0, edgeWomen = 0;

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

int men(int n) 
{
	makeSet(n);
	int ans = 0;
	for(int i = adj.size() - 1; i >= 0; i--) {
		int a = adj[i].second.first;
		int b = adj[i].second.second;
		int c = adj[i].first;
		
		if(c == 1 || c == 3) {
			if(findParent(a) != findParent(b)) {
				makeUnion(a, b);
				edgeMen++;
			}
			else
				ans++;
		}
	}
	return ans;
}

int women(int n) 
{
	makeSet(n);
	int ans = 0;
	for(int i = adj.size() - 1; i >= 0; i--) {
		int a = adj[i].second.first;
		int b = adj[i].second.second;
		int c = adj[i].first;
		
		if(c == 2 || c == 3) {
			if(findParent(a) != findParent(b)) {
				makeUnion(a, b);
				edgeWomen++;
			}
			else if(c != 3)
				ans++;
		}
	}
	return ans;
}

int main()
{
	ios::sync_with_stdio(false);
	int n, m;
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int u, v, w;
		cin >> u >> v >> w;
		adj.push_back(make_pair(w, make_pair(u, v)));
	}
	sort(adj.begin(), adj.end());
	int ans = men(n) + women(n);
	if(edgeMen == (n - 1) && edgeWomen == (n - 1))
		cout << ans << endl;
	else
		cout << -1 << endl;
    	return 0;
}
