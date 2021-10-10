// https://codeforces.com/problemset/problem/559/B
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
const int MX = 2e5; // check the limits, dummy

#define godspeed                                                                                                       \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

string process(string s)
{

    if (s.size() % 2)
        return s;
    ll mid = s.size() / 2;
    string s1 = process(s.substr(0, mid)), s2 = process(s.substr(mid, mid));
    return (s1 < s2 ? s1 + s2 : s2 + s1);
}

int main()
{
    godspeed;
    string a, b;
    cin >> a;
    cin >> b;
    cout << (process(a) == process(b) ? "YES" : "NO") << endl;
    return 0;
}
