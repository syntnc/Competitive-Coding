#include  <bits/stdc++.h>
using namespace std;

#define M 1000000007

long long fib[100000 + 1];

void pre()
{
    fib[0] = 1;
    fib[1] = 2;

    for(int i = 2; i <= 100000; i++) {
        fib[i] = ((fib[i - 1] % M) + (fib[i - 2] % M)) % M;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    pre();

    int t;
    cin >> t;
    long long sum = 0;

    while(t--) {
        int n;
        cin >> n;
        sum = ((sum % M) + (fib[n] % M)) % M;
    }
    cout << sum << endl;

    return 0;
}