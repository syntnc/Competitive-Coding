#include <bits/stdc++.h>
using namespace std;

int banana[100001];
int parent[100001];
map <int, long long> teamCoins;

void makeSet(int n)
{
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
		banana[i] = 0;
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
	
	if(yset != xset)
		parent[xset] = yset;
}

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	int n, m;
    	cin >> n >> m;
    	makeSet(n);
    	for(int i = 0; i < m; i++) {
    		int x, y;
    		cin >> x >> y;
    		makeUnion(x, y);
    	}
    	
    	teamCoins.clear();
    	for(int i = 1; i <= n; i++) {
			cin >> banana[i]; 
    		teamCoins[findParent(i)] += banana[i];
    	}
    	
    	map <int, long long> :: iterator it, max;
		max = teamCoins.begin();
		for(it = teamCoins.begin(); it != teamCoins.end(); it++) {
			if(it->second > max->second) {
				max = it;
			}
		}
		
		cout << max->second << endl;
    }
    return 0;
}