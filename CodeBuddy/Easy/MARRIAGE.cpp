#include  <bits/stdc++.h>
using namespace std;

#define MAX 1000000000

int primes[5];
vector <long long> id;

void insert_ID(long long x)
{
    if(x > MAX)
        return;
    id.push_back(x);
    int last_digit = x % 10;
    for(int i = 0; i < 4; i++) {
        if(last_digit + primes[i] < 10)
            insert_ID(x * 10 + (last_digit + primes[i]));
        if(last_digit - primes[i] >= 0)
            insert_ID(x * 10 + (last_digit - primes[i]));
    }
}

int main()
{
    ios::sync_with_stdio(false);

    primes[0] = 2;
    primes[1] = 3;
    primes[2] = 5;
    primes[3] = 7;
    for(int i = 1; i <= 9; i++)
        insert_ID(i);

    sort(id.begin(), id.end());

    int t;
    cin >> t;

    while(t--) {
        long long n;
        cin >> n;
        cout << lower_bound(id.begin(), id.end(), n + 1) - id.begin() << endl;
    }

    return 0;
}