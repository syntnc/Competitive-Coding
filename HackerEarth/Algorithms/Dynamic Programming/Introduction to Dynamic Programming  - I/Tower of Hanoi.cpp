#include <bits/stdc++.h>
using namespace std;

#define ll long long

bool cmp(const pair<ll, ll> &a, const pair<ll, ll> &b)
{
       return a.first < b.first;
}

int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		vector < pair <ll, ll> > v;
		
		for(int i = 0; i < n; i++) {
			long long r, h;
			cin >> r >> h;
			v.push_back(make_pair(r, h));
		}
		
		sort(v.begin(), v.end(), cmp);
		
		long long mcl[n];
		for(int i = 0; i < n; i++) {
			mcl[i] = v[i].second;
		}
		
		for(int i = 1; i < n; i++) {
			for(int j = 0; j < i; j++) {
				if((v[j].first < v[i].first) && (v[j].second < v[i].second)) {
					mcl[i] = max(mcl[i], mcl[j] + v[i].second);
				}
			}
		}
		
		long long mh = mcl[0];
		for(int i = 1; i < n; i++) {
			if(mh < mcl[i])
				mh = mcl[i];
		}

		cout << mh << endl;
	}
	
    return 0;
}
