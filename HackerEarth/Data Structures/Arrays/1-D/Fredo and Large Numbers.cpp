#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
	ll ar[1000001];
	int n, maxfreq = 0;
	scanf("%d", &n);
	map <ll, ll> m;
	ll atleast[1000001];
	ll exact[1000001];
	for(int i = 0; i < 1000001; i++) {
		atleast[i] = 0;
		exact[i] = 0;
	}
	for(int i = 0; i < n; i++) {
		scanf("%lld", &ar[i]);
		m[ar[i]]++;
	}
	for(int i = 0; i < n; i++) {
		if(m[ar[i]] > maxfreq) {
			for(int j = maxfreq + 1; j <= m[ar[i]]; j++)
				atleast[j] = ar[i];
			maxfreq = m[ar[i]];
		}
		if(!exact[m[ar[i]]])
			exact[m[ar[i]]] = ar[i];
	}
	int q;
	scanf("%d", &q);
	while(q--) {
		int type;
		ll f;
		scanf("%d %lld", &type, &f);
		if(f > 1000000)
			printf("0\n");
		else if(type == 0)
			printf("%lld\n", atleast[f]);
		else
			printf("%lld\n", exact[f]);
	}
	return 0;
}