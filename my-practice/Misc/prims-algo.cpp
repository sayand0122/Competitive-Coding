// https://youtu.be/IU5L8oePljw

// It gives us the MST (minimum spanning tree)
// It's based on the GREEDY ALGO
//
//
// Select an arbitary vertex s to start the tree from
// while(there are still non-tree vertices):
//      Select the edge of minimum weight betweeb a tree and non-tree vertex
//      And the selected edge and vertex to the tree.
//
//
// Sample Test Case:
// 4 5
// 0 1 10
// 1 2 15
// 0 2 5
// 3 1 2
// 3 2 40
//
// Output:
// 17

#include <bits/stdc++.h>
using namespace std;
int n, m;
const int N = 1e5 + 3;
vector<vector<int>> g[N];
int cost = 0;
const int INF = 1e9;
vector<int> dist(N), parent(N);
vector<bool> vis(N);

void primsMST(int source)
{
    for (int i = 0; i < n; i++)
    {
        dist[i] = INF;
    }
    set<vector<int>> s;
    dist[source] = 0;
    s.insert({0, source});
    while (!s.empty())
    {
        auto x = *(s.begin());
        s.erase(x);
        vis[x[1]] = true;
        int u = x[1];
        int v = parent[x[1]];
        int w = x[0];
        cout << u << " " << v << " " << w << "\n";
        cost += w;
        for (auto it : g[x[1]])
        {
            if (vis[it[0]])
                continue;
            if (dist[it[0]] > it[1])
            {
                s.erase({dist[it[0]], it[0]});
                dist[it[0]] = it[1];
                s.insert({dist[it[0]], it[0]});
                parent[it[0]] = x[1];
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }
    primsMST(0);
    cout << cost;
}