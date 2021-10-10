// https://codeforces.com/contest/1509/problem/B
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

// bool isSubSequence(string str1, string str2, int m, int n)
// {
//     if (m == 0)
//         return true;
//     if (n == 0)
//         return false;

//     if (str1[m - 1] == str2[n - 1])
//         return isSubSequence(str1, str2, m - 1, n - 1);

//     return isSubSequence(str1, str2, m, n - 1);
// }

int count(string a, string b, int m, int n)
{
    if ((m == 0 && n == 0) || n == 0)
        return 1;

    if (m == 0)
        return 0;

    if (a[m - 1] == b[n - 1])
        return count(a, b, m - 1, n - 1) + count(a, b, m - 1, n);
    else
        return count(a, b, m - 1, n);
}

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string s2;
        cin >> s2;
        string s1 = "TMT";
        ll m = 3;
        cout << count(s1, s2, m, n) << " ";
        if (count(s1, s2, m, n) == (n / 3))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

// TLE