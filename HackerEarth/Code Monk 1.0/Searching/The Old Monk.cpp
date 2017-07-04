#include <bits/stdc++.h>
using namespace std;

vector <long long> A, B;

int bs(long long x, int n)
{
	int low = 0, high = n;
	while(low <= high) {
		int mid = (low  + high) / 2;
		if(B[mid] < x)
			high = mid - 1;
		else if(mid < n - 1 && B[mid + 1] >= x)
			low = mid + 1;
		else
			return mid;
	}
}

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
    	int n, monkiness = 0, maxMonkiness = 0;
    	scanf("%d", &n);
    	for(int i = 0; i < n; i++) {
    		long long x;
    		scanf("%lld", &x);
    		A.push_back(x);
    	}
    	for(int i = 0; i < n; i++) {
    		long long x;
    		scanf("%lld", &x);
    		B.push_back(x);
    	}
    	int i = 0, j = 0;
    	while(i < n) {
    		monkiness = bs(A[i], n) - i;
    		if(monkiness > maxMonkiness)
    			maxMonkiness = monkiness;
    		i++;
    	}
    	printf("%d\n", maxMonkiness);
    	A.clear();
    	B.clear();
    }
    return 0;
}