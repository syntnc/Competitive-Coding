#include <bits/stdc++.h>
using namespace std;

int parent[100001];

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

void makeLeader(int n)
{
	int nset = findParent(n);
	parent[nset] = n;
	parent[n] = n;
}

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	makeSet(n);
	while(k--) {
		int op;
		scanf("%d", &op);
		if(op == 1) {
			int e1, e2;
			scanf("%d %d", &e1, &e2);
			makeUnion(e1, e2);
		} else if(op == 2) {
			int leader;
			scanf("%d", &leader);
			makeLeader(leader);
		} else if(op == 3) {
			int x;
			scanf("%d", &x);
			printf("%d\n", findParent(x));
		}
	}
	
    return 0;
}