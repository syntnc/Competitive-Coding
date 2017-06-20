#include <bits/stdc++.h>
int main()
{
    int n;
    scanf("%d",&n);
    long long int i, z, count=0, total;
    for(i = 1; i <= sqrt(n); i++)
    {
        z = n / i - i;
        count += z;
    }
    total = sqrt(n) + count;
    printf("%lld\n", total);
    return 0;
}