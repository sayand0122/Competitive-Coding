// https://codeforces.com/contest/1511/problem/B
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

int getNum(ll base, ll exp)
{
    int res = pow(base, exp);
    return res;
}

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        // 'x' is equal to the 10 raise to ('a' - 1) to get a number with 'a' digits
        ll x = getNum(10, a - 1);
        // 'y' is equal to the 10 raise to ('b' - 1) to get a number with 'b' digits
        // plus 10 raise to ('c' - 1) to a GCD with 'c' digits
        ll y = getNum(10, b - 1) + getNum(10, c - 1);
        cout << x << " " << y << '\n';
    }
    return 0;
}
