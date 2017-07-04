#include <bits/stdc++.h>
using namespace std;

map<int, vector<long long>> tasks;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	tasks.clear();
    	int n;
    	cin >> n;
    	while(n--) {
    		long long today;
    		cin >> today;
    		tasks[__builtin_popcount(today)].push_back(today);
    	}
    	map<int, vector<long long>> :: iterator it;
    	for(it = tasks.begin(); it != tasks.end(); it++) {
    		vector <long long> :: iterator im;
    		for(im = (it->second).begin(); im != (it->second).end(); im++) {
    			cout << (*im) << " ";
    		}
    	}
    	cout << endl;
    }
    return 0;
}