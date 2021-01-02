// https://www.codechef.com/LTIME90B/problems/GASOLINE

// AC

#include <bits/stdc++.h>
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0)
#define arin(x, n)              \
    for (int i = 0; i < n; i++) \
    cin >> x[i]
#define debug(x, n)             \
    for (int i = 0; i < n; i++) \
    cout << x[i] << " "
#define pb push_back
typedef long long int ll;

using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i].second;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i].first;
    }
    sort(p.begin(), p.end());
    ll e = n, h = 0;
    for (auto x : p)
    {
        if (x.second >= e)
        {
            h += x.first * e;
            e = 0;
        }
        else
        {
            h += x.second * x.first;
            e -= x.second;
        }
        if (e <= 0)
            break;
    }

    //lokesh bm
    cout << h << "\n";
}

int main()
{
    fast;
    ll t = 1;
    cin >> t;
    while (t--)
        solve();
    return 0;
}