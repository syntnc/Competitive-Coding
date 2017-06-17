#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios::sync_with_stdio(false);
    int lastAns = 0;
    int n, q;
    cin >> n >> q;
    vector <long long> seq[n];
    while(q--) {
    	int type;
    	long long x, y;
    	cin >> type >> x >> y;
    	int index = (x ^ lastAns) % n;
    	if(type == 1) {
    		seq[index].push_back(y);
    	} else if(type == 2) {
    		lastAns = seq[index][y % seq[index].size()];
    		cout << lastAns << endl;
    	}
    }  
    return 0;
}
