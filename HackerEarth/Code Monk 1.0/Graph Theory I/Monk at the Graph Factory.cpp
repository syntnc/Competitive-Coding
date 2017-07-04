#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
    long long n;
    cin >> n;
    long long x, sum = 0, edge = n - 1;
    while(n--) {
    	cin >> x;
    	sum += x;
    }
    if(sum & 1 || sum / 2 != edge)
    	cout << "No" << endl;
   	else
   		cout << "Yes" << endl;
    return 0;
}
