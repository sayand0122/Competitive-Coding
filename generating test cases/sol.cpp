#include <bits/stdc++.h>
using namespace std;

// MACROS
#define int long long
#define MAX(x, y) (((x) > (y)) ? (x) : (y))
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define mod(x) (((x) >= 0) ? (x) : (-x))
#define deb(x) cout << #x << " " << x << "\n";
#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define FILE                        \
    freopen("inp.txt", "r", stdin); \
    freopen("out.txt", "w", stdout)
#define inf LLONG_MAX;
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin, (x).rend()
#define tr(c, i) for (__typeof__((c)).begin() i = (c).begin(); i != (c).end(); i++)
#define cpresent(c, x) (find(all(c), x) != (c).end())
#define pb(a) push_back(a)
#define mp(a, b) make_pair(a, b)
void __testCase(int t);
void solve()
{
    int n, k, res;
    cin >> n >> k;
    res = 800 / ((n * 17) - (k * 13));
    cout << res << "\n";
}

int32_t main()
{
    FAST;
    FILE;
    int t = 1;
    cin >> t;

    __testCase(t);

    return 0;
}
void __testCase(int t)
{

    while (t--)
        solve();
}
