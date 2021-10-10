// https://www.codechef.com/FEB21B/problems/TEAMNAME

#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

int main()
{
    fastio;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string str[n];
        for (ll i = 0; i < n; i++)
            cin >> str[i];

        sort(str, str + n);
        string a, b;
        ll count = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                a = str[i];
                b = str[j];
                swap(a[0], b[0]);

                if (a[0] == b[0])
                {
                }
                else if (a == b)
                {
                }
                else if (!binary_search(str, str + n, a) && !binary_search(str, str + n, b))
                    count += 2;
            }
        }
        ll res = count;
        cout << res << endl;
    }
    return 0;
}