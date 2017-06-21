#include <bits/stdc++.h>
using namespace std;

#define MAX 10000

vector <int> graph[MAX + 1];
vector <int> order;
set <int> nextNode;
int in_degree[MAX + 1] = {0};

int toposort()
{
    int u, v;
    int count = 0;

    while(!nextNode.empty()) {
        u = *nextNode.begin();
        nextNode.erase(nextNode.begin());
        order.push_back(u);
        count++;

        for(int i = 0; i != graph[u].size(); i++) {
            v = graph[u][i];
            in_degree[v]--;
            if(!in_degree[v])
                nextNode.insert(v);
        }
    }
    return count;
}

int main()
{
    int n, m, x, y;
    scanf("%d%d", &n, &m);

    while(m--) {
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
        in_degree[y] += 1;
    }

    for(int i = 1; i <= n; i++) {
        if(!in_degree[i])
            nextNode.insert(i);
    }

    int count = toposort();

    if(count != n)
        printf("Sandro fails.\n");
    else {
        for(int i = 0; i < n; i++)
            printf("%d ", order[i]);
        printf("\n");
    }
    return 0;
}