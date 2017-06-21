#include <bits/stdc++.h>
using namespace std;

#define MAX 100

vector <int> graph[MAX + 1];
vector <int> order;
set <int> nextNode;
int in_degree[MAX + 1] = {0};

void toposort()
{
    int u, v;

    while(!nextNode.empty()) {
        u = *nextNode.begin();
        nextNode.erase(nextNode.begin());
        order.push_back(u);

        for(int i = 0; i != graph[u].size(); i++) {
            v = graph[u][i];
            in_degree[v]--;
            if(!in_degree[v])
                nextNode.insert(v);
        }
    }
}

int main()
{
    int n, m, x, y, k;
    scanf("%d %d", &n, &m);

    while(m--) {
        scanf("%d %d", &x, &k);
        while(k--) {
            scanf("%d", &y);
            graph[y].push_back(x);
            in_degree[x] += 1;
        }
    }

    for(int i = 1; i <= n; i++) {
        if(!in_degree[i])
            nextNode.insert(i);
    }

    toposort();

    for(int i = 0; i < n; i++)
        printf("%d ", order[i]);
    printf("\n");

    return 0;
}