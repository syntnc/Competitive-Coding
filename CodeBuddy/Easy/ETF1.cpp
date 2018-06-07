#include <bits/stdc++.h>
using namespace std;

const int n = 10000000;
int phi[n+1];
 
int main()
{
	int query, cases;
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
	scanf("%d", &cases);
    while(cases--)
    {
    	scanf("%d", &query);
    	printf("%d\n", phi[query]);
	}
    return 0;
}