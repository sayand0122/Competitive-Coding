// https://www.codechef.com/APRIL21B/problems/KAVGMAT
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
#define FOR(k, a, b) for (ll k = (a); k <= (b); k++)
#define F0R(i, a) for (int i = 0; i < (a); i++)
#define RFOR(i, a, b) for (int i = (a); i > (b); i--)
#define sz(x) (int)(x).size()

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

const int INF = 1000000009;
const lld pi = 3.14159265358979323846;
const int MX = 1e6; // check the limits, dummy

#define godspeed                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

int solve(ll n, ll m, ll k)
{

    double a[n + 1][m + 1];
    FOR(i, 0, n) // Adding a row of 0 and a column of 0 at starting
    {
        FOR(j, 0, m)
        {
            if (i == 0 || j == 0)
                a[i][j] = 0;
            else
                cin >> a[i][j];
        }
    }
    FOR(i, 0, n) // Getting the rowise sum
    {
        double pre = 0;
        FOR(j, 0, m)
        {
            a[i][j] += pre;
            pre = a[i][j];
        }
    }
    FOR(j, 0, m) // Getting the column wise sum and also CS of the matrix
    {
        double pre = 0;
        FOR(i, 0, n)
        {
            a[i][j] += pre;
            pre = a[i][j];
        }
    }
    ll z = min(n, m);
    ll ans = 0;
    FOR(len, 1, z)
    {
        FOR(i, len, n)
        {
            FOR(j, len, m)
            {
                if ((a[i][j] + a[i - len][j - len] - a[i][j - len] - a[i - len][j]) / (len * len) >= k)
                    ans++;
            }
        }
    }
    return ans;
}

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t-- != 0)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        cout << solve(n, m, k) << endl;
    }
    return 0;
}
