// https://www.codechef.com/APRIL21B/problems/BOOLGAME
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
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define For(i, a, b) for (int i = (a); i <= (b); i++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i > (b); i--)
#define RFor(i, a, b) for (int i = (a); i >= (b); i--)
#define sz(x) (int)(x).size()
#define f first
#define s second

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1000000009;
const lld pi = 3.14159265358979323846;
// const int MX = 2^N; // check the limits, dummy

#define godspeed                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vl g(n + 1);
    F0R(i, n)
    {
        cin >> g[i + 1];
    }

    vector<vpl> arr(n + 1);
    F0R(i, m)
    {
        ll u, v, d;
        cin >> u >> v >> d;
        arr[u].pb(mp(i, d));
        arr[v].pb(mp(i, d));
    }

    vector<vpl> dp(n + 1);
    dp[0].pb(mp(0, 0));
    For(i, 1, n)
    {
        vpl temp;
        temp.insert(temp.end(), all(dp[i - 1]));
        ll cur = 0, mask = 0;
        set<ll> open;
        RFor(j, i, 1)
        {
            cur += g[j];
            mask ^= 1LL << j;
            for (auto &[idx, w] : arr[j])
            {
                if (open.count(idx))
                    cur += w;
                else
                    open.insert(idx);
            }
            if (j > 1)
                for (auto &[val, old_mask] : dp[j - 2])
                    temp.pb(mp(val + cur, mask ^ old_mask));
            else
                temp.pb(mp(cur, mask));
        }
        sort(all(temp));
        reverse(all(temp));
        set<ll> sel;
        ll filled = 0;
        for (ll j = 0; j < temp.size() and filled < k; j++)
        {
            if (sel.count(temp[j].s))
                continue;
            dp[i].pb(temp[j]);
            filled++;
            sel.insert(temp[j].s);
        }
    }
    F0R(i, k)
    {
        cout << dp[n][i].f << " ";
    }
    cout << endl;
}

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
