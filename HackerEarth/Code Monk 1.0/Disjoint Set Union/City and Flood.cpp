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
    parent[xset] = yset;
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
	}
	
	int count = 0;
	for(int i = 1; i <= n; i++)
		if(findParent(i) == i)
			count++;
	printf("%d\n", count);
    return 0;
}
