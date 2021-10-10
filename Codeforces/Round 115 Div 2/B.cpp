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
const int MX = 0; //check the limits, dummy

#define godspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

void solve()
{
    int n;
    cin >> n;
    int arr[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            int c1 = 0, c2 = 0, c3 = 0;
            for (int k = 0; k < n; k++)
            {
                if (arr[k][i] == 1)
                    c1++;
                if (arr[k][j] == 1)
                    c2++;
                if (arr[k][j] == 1 && arr[k][i] == 1)
                    c3++;
            }
            c1 -= c3;
            c2 -= c3;
            if (c1 <= n / 2 && c2 <= n / 2 && c1 + c2 + c3 == n)
            {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
