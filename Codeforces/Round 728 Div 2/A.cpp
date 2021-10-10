//https://codeforces.com/contest/1541/problem/A
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
#define FOR(i, a, b) for (int i = (a); i <= (b); i++)
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

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        //int a[100];
        for (int i = 1; i < n - 2; i += 2)
        {
            cout << i + 1 << " " << i << "\n";
        }
        if (n % 2 == 0)
            cout << n << " " << n - 1 << "\n";
        else
            cout << n << " " << n - 2 << " " << n - 1 << "\n";
    }
    return 0;
}
