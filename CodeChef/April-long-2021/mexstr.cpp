//
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

int temp0[MX], temp1[MX];
int dp0[MX + 2], dp1[MX + 2];

void solve()
{
    string s;
    cin >> s;
    int n = s.length();

    int last = -1;
    FOR(i, 0, n)
    {
        if (s[i] == '0')
        {
            For(j, last + 1, i)
            {
                temp0[j] = i;
            }
            last = i;
        }
    }

    FOR(i, last + 1, n)
    {
        temp0[i] = n;
    }

    if (temp0[0] == n)
    {
        cout << "0" << endl;
        return;
    }

    last = -1;
    FOR(i, 0, n)
    {
        if (s[i] == '1')
        {
            For(j, last + 1, i)
            {
                temp1[j] = i;
            }
            last = i;
        }
    }

    FOR(i, last + 1, n)
    {
        temp1[i] = n;
    }

    dp0[n] = dp0[n + 1] = 0;
    dp1[n] = dp1[n + 1] = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        dp0[i] = dp0[i + 1];
        if (s[i] == '0' and temp1[i] < n)
            dp0[i] = max(dp0[i], dp0[temp1[i] + 1] + 1);
        if (s[i] == '1' and temp0[i] < n)
            dp0[i] = max(dp0[i], dp0[temp0[i] + 1] + 1);
        dp1[i] = dp1[i + 1];
        if (temp1[i] < n)
            dp1[i] = max(dp1[i], dp0[temp1[i] + 1] + 1);
    }

    int len = dp1[0] + 1;
    int c = temp1[0] + 1;
    string res = "1";
    FOR(i, 1, len)
    {
        if (c >= n)
        {
            res.pb('0');
            continue;
        }
        if (temp0[c] >= n)
        {
            res.pb('0');
            c = temp0[c] + 1;
            continue;
        }
        if (dp0[temp0[c] + 1] < len - i - 1)
        {
            res.pb('0');
            c = temp0[c] + 1;
        }
        else
        {
            res.pb('1');
            c = temp1[c] + 1;
        }
    }
    cout << res << endl;
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
