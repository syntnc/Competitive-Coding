#include <bits/stdc++.h>
using namespace std;

long long a, b, c;
long long k;

long long binarySearch(long long low, long long high)
{
	if(low > high)
		return low;
	long long mid = (low + high) / 2;
	long long res = a * mid * mid + b * mid + c;
	if(res < k)
		binarySearch(mid + 1, high);
	else
		binarySearch(low, mid - 1);
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
    	scanf("%lld %lld %lld %lld", &a, &b, &c, &k);
    	printf("%lld\n", binarySearch(0, 1000000));
    }
    return 0;
}