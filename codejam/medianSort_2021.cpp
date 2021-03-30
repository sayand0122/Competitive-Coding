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

#define godspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

const int MOD = 1000000007;
const char nl = '\n';
const int MX = 100001; //check the limits, dummy

int N;
void solve()
{
    vi A;
    cout << "1 2 3" << endl;
    int X;
    cin >> X;
    if (X == -1)
        return;
    if (X == 1)
    {
        A.pb(2);
        A.pb(1);
        A.pb(3);
    }
    else if (X == 2)
    {
        A.pb(1);
        A.pb(2);
        A.pb(3);
    }
    else
    {
        A.pb(1);
        A.pb(3);
        A.pb(2);
    }

    FOR(i, 4, N + 1)
    {
        int lo = 0, hi = sz(A);
        while (lo < hi)
        {
            int l = (2 * lo + hi) / 3;
            int r = (2 * hi + lo) / 3;
            if (r == sz(A))
            {
                r--;
            }
            if (r == l)
            {
                if (l > 0)
                {
                    l--;
                }
                else
                {
                    r++;
                }
            }
            cout << A[l] << " " << A[r] << " " << i << endl;
            cin >> X;
            if (X == -1)
                return;
            if (X == A[l])
            {
                hi = l;
            }
            else if (X == A[r])
            {
                lo = r + 1;
            }
            else
            {
                lo = l + 1;
                hi = r;
            }
        }
        auto it = A.begin() + lo;
        A.insert(it, i);
    }

    F0R(i, N)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    cin >> X;
    if (X == -1)
        return;
}

int main()
{

    godspeed;

    int T;
    cin >> T;
    int Q;
    cin >> N >> Q;
    FOR(i, 1, T + 1)
    {
        solve();
    }

    return 0;
}