#include <bits/stdc++.h>
using namespace std;

#define N 1000
#define M 100000

long long ar[N + 1];
bool visited[M + 1];
long long n, key;

void bfs(long long data)
{
    memset(visited, false, sizeof(visited));
    queue <pair <long long, long long>> q;
    long long counter = 0;
    if(data != key)
        q.push(make_pair(data, 0));
    else
        goto RESULT;
    while(!q.empty()) {
        pair<long long, long long> v = q.front();
        q.pop();
        for(long long i = 0; i < n; i++) {
            long long new_data = ((v.first % M) * (ar[i] % M)) % M;
            if(new_data == key) {
                counter = v.second + 1;
                goto RESULT;
            }
            if(!visited[new_data]) {
                visited[new_data] = true;
                q.push(make_pair(new_data, v.second + 1));
            }
        }
    }
    if(q.empty())
        counter = -1;
    RESULT: cout << counter << endl;
}

int main()
{
    ios::sync_with_stdio(false);

    long long samarpit, x;
    cin >> samarpit >> key;
    cin >> n;
    for(long long i = 0; i < n; i++)
        cin >> ar[i];
    bfs(samarpit);
    
    return 0;
}