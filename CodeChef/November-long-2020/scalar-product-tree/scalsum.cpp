//https://www.codechef.com/NOV20B/problems/SCALSUM
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define godspeed cin.tie(0)->sync_with_stdio(0)

ll power(ll base, ll exp)
{
    if (exp == 0)
        return 1;

    if (exp == 1)
        return base;

    ll t = power(base, exp / 2);
    t = (t * t);

    if (exp % 2 == 0)
        return t;
    else
        return (base * t);
}

ll MOD = power(2, 32);

ll mod(ll n)
{
    return (n % (MOD));
}

int main()
{

    godspeed;
    ll n, q;
    cin >> n >> q;
    ll weight[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    ll parent[n + 1];
    parent[0] = 0;
    parent[1] = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll u, v;
        cin >> u >> v;
        parent[v] = u;
    }

    while (q--)
    {
        ll u, v;
        cin >> u >> v;
        ll sum = 0;
        while (u && v)
        {
            sum = mod(mod(sum) + mod(mod(weight[u - 1]) * mod(weight[v - 1])));
            u = parent[u];
            v = parent[v];
        }

        cout << sum << "\n";
    }
}