#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(long long arr[], int n, long long m)
{
    long long x, prefix = 0, max_sum = 0;

    set <long long> S;
    S.insert(0);    

    for (int i = 0; i < n; i++) {
        prefix = ((prefix % m) + (arr[i] % m)) % m;
        max_sum = max(max_sum, prefix);
        auto it = S.lower_bound(prefix+1);
        if (it != S.end())
            max_sum = max(max_sum, ((prefix % m) - ((*it) % m) + m) % m);
        S.insert(prefix);
    }
    return max_sum;
}

int main()
{
    ios::sync_with_stdio(false);

    int t;
    cin >> t;

    while(t--) {
        int n;
        long long m;
        cin >> n >> m;

        long long ar[n];
        for(int i = 0; i < n; i++)
            cin >> ar[i];

        cout << maxSubarraySum(ar, n, m) << endl;
    }

    return 0;
}
