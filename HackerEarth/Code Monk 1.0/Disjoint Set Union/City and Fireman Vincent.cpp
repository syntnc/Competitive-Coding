#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007

int parent[1001];
int risk[1001];
map <int, int> minimum;
map <int, int> countMin; 

void makeSet(int n)
{
	for(int i = 1; i <= n; i++) {
		parent[i] = i;
		minimum[i] = risk[i];
		countMin[i] = 1;
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
    	
    	if(minimum[yset] > minimum[xset]){
    		minimum[yset] = minimum[xset];
    		countMin[yset] = countMin[xset];
    	} else if(minimum[yset] == minimum[xset]) {
    		countMin[yset] += countMin[xset];
    	}
    	
    	countMin[xset] = 1;
    }
}

int main()
{
	int n, q;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
		scanf("%d", &risk[i]);
	}
	makeSet(n);
	
	scanf("%d", &q);
	while(q--) {
		int e1, e2;
		scanf("%d %d", &e1, &e2);
		makeUnion(e1, e2);
	}
	
	long long ans = 1;
	map <int, int> :: iterator i;
	for(i = countMin.begin(); i != countMin.end(); i++) {
		ans = ((ans % MOD) * (i->second % MOD)) % MOD;
	}
	printf("%lld\n", ans);
    return 0;
}