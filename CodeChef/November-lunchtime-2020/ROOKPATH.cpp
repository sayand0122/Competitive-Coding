// https://www.codechef.com/LTIME90B/problems/ROOKPATH

// AC

#include <bits/stdc++.h>
#define PB push_back
#define ST first
#define ND second
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
//mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());

using namespace std;

using ll = long long;
using pi = pair<int, int>;
using vi = vector<int>;

const int nax = 50 * 1000 + 10;
int t, n, m;
vector<pi> V[nax * 2];
bool visited[nax * 2];
int I[nax * 2], deg[nax * 2];
vi cycle = {};

void dfs(int x)
{
    while (I[x] < (int)V[x].size())
    {
        int i = I[x]++;
        if (!visited[V[x][i].ND])
        {
            visited[V[x][i].ND] = 1;
            dfs(V[x][i].ST);
            cycle.PB(V[x][i].ND);
        }
    }
}

int main()
{
    _
            cin >>
        t;
    while (t--)
    {
        cin >> n >> m;
        for (int i = 1; i <= 2 * n; ++i)
        {
            V[i].clear();
            I[i] = 0;
            deg[i] = 0;
        }
        for (int a, b, i = 1; i <= m; ++i)
        {
            visited[i] = 0;
            cin >> a >> b;
            deg[a]++;
            deg[b + n]++;
            V[a].emplace_back(b + n, i);
            V[b + n].emplace_back(a, i);
        }
        cycle = {};
        for (int i = 1; i <= 2 * n; ++i)
        {
            if (deg[i] & 1)
            {
                dfs(i);
                break;
            }
        }
        if ((int)cycle.size() == 0)
        {
            for (int i = 1; i <= 2 * n; ++i)
            {
                if (deg[i] > 0)
                {
                    dfs(i);
                    break;
                }
            }
        }
        for (int x : cycle)
            cout << x << " ";
        cout << "\n";
    }
}
