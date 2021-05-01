// https://www.codechef.com/LTIME95C/problems/ARRROT
// Sayan Dutta
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define lld long double

#define ms(arr, v) memset(arr, v, sizeof(arr))
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define mod(x) ((x) >= 0) ? (x) : (-x)
#define all(v) v.begin(), v.end()
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
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
const int MX = 0; // check the limits, dummy

#define godspeed                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

ll mod = 1000000007;

int main()
{
    godspeed;

    ll n;
    cin >> n;
    ll sum = 0;
    ll a[n];
    F0R(i, n)
    {
        cin >> a[i];
        sum = (sum + a[i] + mod) % mod;
    }

    ll q;
    cin >> q;
    ll queries[q];
    F0R(i, q)
    {
        cin >> queries[i];
    }

    F0R(i, q)
    {
        sum = (2 * sum + mod) % mod;
        cout << sum << endl;
    }

    return 0;
}
