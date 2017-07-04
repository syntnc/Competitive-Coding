#include <bits/stdc++.h>
using namespace std;

long long potions[100001];

void getPotions(long long a, long long b) {
	potions[0] = a;
	for(int i = 1; i <= 100000; i++) {
		potions[i] = ((potions[i - 1] % b) * (potions[i - 1] % b)) % b;
	}
}

int main()
{
    long long a, b, ans = 0;
    string s;
    scanf("%lld %lld", &a, &b);
    getPotions(a, b);
    cin >> s;
    int l = s.length();
    for(long long i = 0; i < l; i++) {
    	if(s[i] == '1') {
    		ans = ((ans % b) + (potions[i] % b)) % b;
    	}
    }
    printf("%lld\n", ans);
    return 0;
}
