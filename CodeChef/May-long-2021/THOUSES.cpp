// https://www.codechef.com/MAY21C/problems/THOUSES
// Sayan Dutta
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define lld long double

#define ms(arr, v) memset(arr, v, sizeof(arr))
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define mod(x) ((x) >= 0) ? (x) : (-x)
#define all(v) v.begin(), v.end()
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i > (b); i--)
#define sz(x) (int)(x).size()
#define eb emplace_back
#define rall(x) rbegin(x), rend(x)

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1000000009;
const lld pi = 3.14159265358979323846;
const int MX = 0; // check the limits, dummy

#define godspeed                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

const int mod = 1e9 + 7;
const int maxn = 3e5 + 5;

vi adj[maxn], subval, val;
vpi ch;

void dfs(int now, int last = -1)
{
    for (auto x : adj[now])
    {
        if (x == last)
            continue;
        dfs(x, now);
    }

    ch.clear();
    for (auto x : adj[now])
    {
        if (x != last)
            ch.eb(subval[x], x);
    }
    sort(rall(ch));

    int tok = 1;
    for (auto [_val, id] : ch)
        val[id] = tok++;
    for (auto x : adj[now])
    {
        if (x != last)
            subval[now] += val[x] * subval[x];
    }
}

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        subval.assign(n, 1);
        val.assign(n, 0);
        F0R(i, n)
        {
            vi().swap(adj[i]);
        }
        F0R(i, n - 1)
        {
            int u, v;
            cin >> u >> v;
            --u;
            --v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        dfs(0);
        cout << subval[0] % mod * x % mod << "\n";
    }
    return 0;
}
