#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int parent[5001];
vector <pair<long long, pair<int, int>>> adj;

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
			long long w;
			scanf("%d %d %lld", &u, &v, &w);
			adj.push_back(make_pair(w, make_pair(u, v)));
		}
		sort(adj.begin(), adj.end());
		makeSet(n);
		long long ans = 1;
		for(int i = 0; i < adj.size(); i++) {
			int a = adj[i].second.first;
			int b = adj[i].second.second;
			long long c = adj[i].first;
			
			if(findParent(a) != findParent(b)) {
				makeUnion(a, b);
				ans = ((ans % MOD) * (c % MOD)) % MOD;
			}
		}
		printf("%lld\n", ans);
	}
   	return 0;
}