#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    int ar[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> ar[i];
    }
    
    int current = 0, rest = 0;
    for(int i = 1; i <= n; i++) {
        if(!ar[i]) { // BOTH CLOSED
            rest++;
            current = 0;
        }
        else if(!current) // AT LEAST ONE OPTION AVAILABLE, PREVIOUSLY RESTED
            current = ar[i];
        else if(ar[i] == current && ar[i] != 3) { // SAME ACTIVITY TWICE
            rest++;
            current = 0;
        }
        else if(ar[i] != current && current != 3) // ALTERNATE ACTIVITY
            current = 1 + (2 - current);
        else if(current == 3) // BOTH OPTIONS OPEN ON EVERY PREVIOUS DAY
            current = ar[i];
        else // BOTH OPTIONS OPEN TODAY, BUT NOT ON PREVIOUS DAY
            current = 1 + (2 - current);
    }
    cout << rest << endl;
    
    return 0;
}