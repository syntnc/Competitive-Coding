#include <bits/stdc++.h>
using namespace std;

int parent[100001];
int size[100001];
multiset <int> m;

void makeSet(int n)
{
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
		size[i] = 1;
		m.insert(1);
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
    		m.erase(m.find(size[yset]));
    		m.erase(m.find(size[xset]));
    		size[yset] += size[xset];
    		size[xset] = 0;
    		m.insert(size[yset]);
    	}
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	makeSet(n);
	while(k--) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		makeUnion(e1, e2);
		printf("%d\n", *(m.rbegin()) - *(m.begin()));
	}
	
    return 0;
}