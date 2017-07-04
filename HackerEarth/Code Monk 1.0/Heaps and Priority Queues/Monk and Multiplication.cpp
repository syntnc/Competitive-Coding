#include <bits/stdc++.h>
using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
    priority_queue<int> q;
    int n;  cin >> n;
    for(int i = 0; i < 2; ++i){
        int a; cin >> a;    
        q.push(a);
        cout << "-1\n";
    }
    for(int i = 0; i < n - 2; ++i){
        int a; cin >> a;
        q.push(a);
        int x = q.top(); q.pop();
        int y = q.top(); q.pop();
        int z = q.top(); q.pop();
        
        cout << 1LL*x*y*z << "\n";
        
        q.push(x);
        q.push(y);
        q.push(z);
    }

	return 0;
}
