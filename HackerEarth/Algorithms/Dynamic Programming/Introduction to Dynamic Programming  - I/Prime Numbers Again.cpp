#include <bits/stdc++.h>
using namespace std;

#define MAX 10001

int p[MAX+ 1] = {0};
int dp[MAX + 1];
vector <int> primatic;

void sieve()
{
    for(int i = 2; i < MAX; i++) {
        if(!p[i]) {
            primatic.push_back(i);
            if(i <= 5)
                primatic.push_back(pow(i, i));
            for(int j = i * i; j < MAX; j += i)
                p[j] = 1;
        }
    }
}

void pre()
{
    sieve();
    fill(dp, dp + MAX, INT_MAX - 1);
    sort(primatic.begin(), primatic.end());
    dp[0] = 0;
    for(int i = 2; i < MAX; i++) {
        for(int j = 0; j < primatic.size() and primatic[j] <= i; j++) {
            dp[i] = min(dp[i], 1 + dp[i - primatic[j]]);
        }
    }
}

int main()
{
    pre();
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
    
    return 0;
}