#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--) {
        long long n;
        scanf("%lld", &n);
        long long count = 0, x = 5;
        while(x <= n) {
            count += n / x;
            x *= 5;
        }
        printf("%lld\n", count);
    }
    return 0;
}
