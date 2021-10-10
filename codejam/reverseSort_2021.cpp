#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb(x) push_back(x)
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define mod(x) ((x) >= 0) ? (x) : (-x)

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define FOR(i, a, b) for (ll i = a; i < b; i++)
#define F0R(i, a) for (ll i = 0; i < a; i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)

int reverseSort(vector<ll> arr, ll n)
{
    ll cost = 0, j;
    bool updated = false;
    F0R(i, n - 1)
    {
        ll min = arr[i];
        FOR(pos, i, n)
        {
            if (arr[pos] < min)
            {
                updated = true;
                j = pos;
                min = arr[pos];
            }
        }

        if (updated)
        {
            reverse(arr.begin() + i, arr.begin() + (j + 1));
            cost += (j - i + 1);
        }
        else
            cost += 1;
        updated = false;
    }
    return cost;
}

int32_t main()
{
    fastio;
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        ll n, k;
        cin >> n;
        vector<ll> arr;
        for (ll i = 0; i < n; i++)
        {
            cin >> k;
            arr.push_back(k);
        }
        cout << "Case #" << (++i) << ": " << reverseSort(arr, n) << "\n";
    }
    return 0;
}
