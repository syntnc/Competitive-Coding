#include <bits/stdc++.h>
using namespace std;

const int n = 10000000;
long long phi[n+1];
 
int main()
{
    int a, b, cases;
    for (int i=1; i<=n; i++)
        phi[i] = i;
 
    for (int p=2; p<=n; p++)
    {
        if (phi[p] == p)
        {
            phi[p] = p-1;

            for (int i = 2*p; i<=n; i += p)
            {
               phi[i] = (phi[i]/p) * (p-1);
            }
        }
    }
    
    for (int p=2; p<=n; p++)
    {
        phi[p] *= phi[p];
        phi[p] += phi[p - 1];
    }
    
    scanf("%d", &cases);
    for(int j = 1; j <= cases; j++) {
        scanf("%d %d", &a, &b);
        if(a > b)
            swap(a, b);
        printf("Case %d: %llu\n", j, (phi[b] - phi[a - 1]));
    }
    return 0;
}