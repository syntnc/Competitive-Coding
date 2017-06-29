#include <bits/stdc++.h>
using namespace std;

#define M 1000000007
 
void matmult(long long a[][2], long long b[][2], long long c[][2])
{
    int i, j, k;
    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for(k = 0; k < 2; k++)
            {
                c[i][j] = ((c[i][j] % M) + (((a[i][k] % M) * (b[k][j] % M)) % M)) % M;
            }
        }
    }
 
}
void matpow(long long Z[][2], long long n, long long ans[][2])
{
 
    long long temp[2][2];
    int i, j;
    ans[0][0] = 1;
    ans[1][0] = 0;
    ans[0][1] = 0;
    ans[1][1] = 1;
    while(n > 0)
    {
        if(n & 1)
        {
            matmult(ans, Z, temp);
            for(i = 0; i < 2; i++)
                for(j = 0; j < 2; j++)
                    ans[i][j] = temp[i][j];
        }
        matmult(Z, Z, temp);
        for(i = 0; i < 2; i++)
            for(j = 0; j < 2; j++)
                Z[i][j] = temp[i][j];
                
        n >>= 1;
    }
    return;
}
 
long long fib(long long n)
{ 
    long long ans;
    if(n > 2)
    {
        long long Z[2][2] = {{1, 1}, {1, 0}}, result[2][2];
        matpow(Z, n - 2, result);
        ans = result[0][0] * 1 + result[0][1] * 0;    
    }
    else
        ans = n - 1;
    
    return ans;
}
 
int main()
{
	int T;
	scanf("%d", &T);
	while(T--) {
		long long n;
		scanf("%lld", &n);
		printf("%lld\n", fib(n + 3));
	}
    return 0;
}