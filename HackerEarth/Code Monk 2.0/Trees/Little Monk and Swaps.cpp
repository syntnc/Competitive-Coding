#include <bits/stdc++.h>
using namespace std;

int minSwaps(vector <int> arr) 
{
    int n = arr.size();
    pair <int, int> arrPos[n];
    for(int i = 0; i < n; i++) {
        arrPos[i].first = arr[i];
        arrPos[i].second = i;
    }
    sort(arrPos, arrPos + n);
    
    vector <bool> visited(n, false);
    int ans = 0;

    for(int i = 0; i < n; i++) {
        if(visited[i] || arrPos[i].second == i)
            continue;
            
        int cycle_size = 0;
        int j = i;
        while(!visited[j]) {
            visited[j] = true;
            cycle_size++;
            j = arrPos[j].second;
        }

        ans += cycle_size - 1;
    }

    return ans;
}

vector <int> in_order;

void getInOrder(int tree[], int n, int index)
{
    if(2 * index <= n)
        getInOrder(tree, n, 2 * index);
    in_order.push_back(tree[index]);
    if(2 * index + 1 <= n)
        getInOrder(tree, n, 2 * index + 1);
}

int main()
{
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    int tree[n + 1];

    for(int i = 0; i < n; i++) {
        cin >> tree[i + 1];
    }

    getInOrder(tree, n, 1);
    cout << minSwaps(in_order) << endl;

    return 0;
}