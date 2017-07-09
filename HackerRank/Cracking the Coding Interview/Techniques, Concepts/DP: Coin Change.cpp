#include <bits/stdc++.h>

using namespace std;

long long make_change(vector <int> coins, int money) 
{
    long long table[money + 1] = {0};
    table[0] = 1;
    for(int i = 0; i < coins.size(); i++) {
        for(int j = coins[i]; j <= money; j++) {
            table[j] += table[j - coins[i]];
        }
    }
    return table[money];    
}

int main()
{
    ios::sync_with_stdio(false);
    
    int n, m;
    cin >> n >> m;
    
    vector <int> coins(m);
    
    for(int i = 0; i < m; i++)
       cin >> coins[i];
    cout << make_change(coins, n) << endl;
    return 0;
}
