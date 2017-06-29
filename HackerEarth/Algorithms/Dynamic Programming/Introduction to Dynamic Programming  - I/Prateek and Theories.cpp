#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        
        long long start[n], end[n];
        for(int i = 0; i < n; i++) {
            cin >> start[i] >> end[i];
        }
        
        sort(start, start + n);
        sort(end, end + n);
        
        int i = 1, j = 0;
        int current = 1, max_theories = 1;
        
        while(i < n and j < n) {
            if(start[i] < end[j]) {
                current++;
                i++;
                max_theories = max(max_theories, current);
            }
            else {
                current--;
                j++;
            }
        }
        cout << max_theories << endl;
    }
    
    return 0;
}
