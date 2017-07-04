#include <bits/stdc++.h>
using namespace std;

map <long, long> food;

int main()
{
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
    	food.clear();
    	int n, count = 0;
    	cin >> n;
    	for(int i = 0; i < n; i++) {
    		long currFood, currPokemon;
    		cin >> currFood >> currPokemon;
    		if(currFood != currPokemon) {
    			if(food[currPokemon] == 0)
    				count++;
    			else
    				food[currPokemon]--;
    			food[currFood]++;
    		}
    	}
    	cout << count << endl;
    }
    
    return 0;
}
