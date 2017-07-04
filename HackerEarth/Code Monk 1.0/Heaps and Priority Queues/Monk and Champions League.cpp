#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    std::ios::sync_with_stdio(false);
    priority_queue<int> q;
    
    long int m, n;
    cin >> m >> n;
    
    for(long int i = 0; i < m; ++i){
    	long int a; 
    	cin >> a;    
    	q.push(a);
    }
    
    long long sum = 0;
    while(n--) {
    	long int maxCost = q.top();
    	q.pop();
    	sum += maxCost;
    	q.push(maxCost - 1);
    }
    
    printf("%lld\n", sum);
    return 0;
}