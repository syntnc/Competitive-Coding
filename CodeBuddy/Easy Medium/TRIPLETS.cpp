#include <bits/stdc++.h>
using namespace std;

int upperBound(long long ar[], int l, int r, long long n) 
{
    while(l < r) {
        int mid = (l + r) / 2;
        if(ar[mid] > n)
            r = mid;
        else
            l = mid + 1;
    }
    return l;
}

int lowerBound(long long ar[], int l, int r, long long n)
{
    while(l < r) {
        int mid = (l + r) / 2;
        if(ar[mid] < n)
            l = mid + 1;
        else
            r = mid;    
    }
    return l;
}

int main()
{
    int x, y, z;
    int i, j;
    long long P[100000];
    long long Q[100000];
    long long R[100000];
    
    scanf("%d", &x);
    for(i = 0; i < x; i++) {
    	scanf("%lld", &P[i]);
    }
    sort(P, P + x);
    
    scanf("%d", &y);
    for(i = 0; i < y; i++) {
    	scanf("%lld", &Q[i]);
    }
    sort(Q, Q + y);
    
    scanf("%d", &z);
    for(i = 0; i < z; i++) {
    	scanf("%lld", &R[i]);
    }
    sort(R, R + z);
    
    long long sum = 0;
    for(i = 0; i < y; i++) {
        int P_index = upperBound(P, 0, x, Q[i]);
        int R_index = lowerBound(R, 0, z, Q[i]);
        sum += (P_index * 1LL * (z - R_index));
    }
    printf("%lld\n", sum);
    
    return 0;
}