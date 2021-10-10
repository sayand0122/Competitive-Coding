#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb(x) push_back(x)
#define MAX(x, y) ((x) > (y)) ? (x) : (y)
#define MIN(x, y) ((x) < (y)) ? (x) : (y)
#define mod(x) ((x) >= 0) ? (x) : (-x)
#define INF LONG_LONG_MAX
#define godspeed                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define FOR(i, a, b) for (int i = (a); i <= (signed)(b); i++)
#define F0R(i, a) for (int i = 0; i < (signed)(a); i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)

int solve(int x, int y, string s, int n)
{
    int cost = 0, a = 0;
    F0R(i, n - 1)
    {
        if (s[i] == 'J')
        {
            if (s[i + 1] == 'C')
                cost += y;
            if (s[i + 1] == '?')
                s.replace(i + 1, 1, "J");
        }
        if (s[i] == 'C')
        {
            if (s[i + 1] == 'J')
                cost += x;
            if (s[i + 1] == '?')
                s.replace(i + 1, 1, "C");
        }
        if (s[i] == '?')
        {
            a++;
            if (s[i + 1] == 'C')
            {
                s.replace(i, a, "C");
                a = 0;
            }
            if (s[i + 1] == 'J')
            {
                s.replace(i, a, "J");
                a = 0;
            }
        }
    }
    return cost;
}

int32_t main()
{
    godspeed;
    int t;
    cin >> t;
    int i = 0;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        string s;
        cin >> s;

        cout << "Case #" << (++i) << ": " << solve(x, y, s, s.length()) << "\n";
    }
    return 0;
}
