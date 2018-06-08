#include <bits/stdc++.h>

using namespace std;

#define MAX 2000000001

bool prime[(int)(ceil(sqrt(MAX)))] = {0};
vector <int> primes;

void sieve()
{
    prime[0] = 1;
    prime[1] = 1;
    for(long long i = 2; i * i <= MAX; i++) {
        if(!prime[i]) {
            primes.push_back(i);
            for(long long j = i + i; j * j <= MAX; j += i) {
                prime[j] = 1;
            }
        }
    }
}

bool isPrime(int n)
{
    if(n <= ceil(sqrt(MAX))) {
        if(!prime[n])
            return true;
        return false;
    }
    for(auto i : primes) {
        if(i > n)
            return true;
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    int p;
    cin >> p;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    sieve();

    for (int p_itr = 0; p_itr < p; p_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        if(isPrime(n))
            cout << "Prime" << endl;
        else
            cout << "Not prime" << endl;
    }

    return 0;
}
