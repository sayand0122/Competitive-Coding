#pragma GCC optimize("O3")
#pragma GCC target("sse4")

#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<pair<int, int>> vpii;
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef vector<ll> vll;

#define INF 0x3f3f3f3f
#define MOD 1000000007LL
#define EPS 0.000000000001
#define f first
#define s second
#define pb push_back
#define mp make_pair

#define FOR(i, a, b) for (int i = (a); i <= (signed)(b); i++)
#define F0R(i, a) for (int i = 0; i < (signed)(a); i++)
#define RFOR(i, a, b) for (int i = (a); i >= b; i--)

#define MN 1005 //check limits you incompetent ree
int r, c;
int gr[MN][MN];
int amtU[MN][MN];
int amtD[MN][MN];
int amtL[MN][MN];
int amtR[MN][MN];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    FOR(asdf, 1, t)
    {
        cin >> r >> c;
        FOR(i, 1, r)
        {
            FOR(j, 1, c)
            {
                cin >> gr[i][j];
            }
        }
        FOR(i, 1, r)
        {
            FOR(j, 1, c)
            {
                if (!gr[i][j])
                {
                    amtU[i][j] = 0;
                    amtL[i][j] = 0;
                }
                else
                {
                    amtU[i][j] = amtU[i - 1][j] + 1;
                    amtL[i][j] = amtL[i][j - 1] + 1;
                }
            }
        }
        RFOR(i, r, 1)
        {
            RFOR(j, c, 1)
            {
                if (!gr[i][j])
                {
                    amtD[i][j] = 0;
                    amtR[i][j] = 0;
                }
                else
                {
                    amtD[i][j] = amtD[i + 1][j] + 1;
                    amtR[i][j] = amtR[i][j + 1] + 1;
                }
            }
        }
        ll ans = 0;
        FOR(i, 1, r)
        {
            FOR(j, 1, c)
            {
                int a = amtU[i][j], b = amtL[i][j], c = amtD[i][j], d = amtR[i][j];
                ans += max(0, min(a, b / 2) - 1);
                ans += max(0, min(a, d / 2) - 1);
                ans += max(0, min(b, a / 2) - 1);
                ans += max(0, min(b, c / 2) - 1);
                ans += max(0, min(c, b / 2) - 1);
                ans += max(0, min(c, d / 2) - 1);
                ans += max(0, min(d, a / 2) - 1);
                ans += max(0, min(d, c / 2) - 1);
                amtU[i][j] = amtL[i][j] = amtD[i][j] = amtR[i][j] = 0;
            }
        }

        cout << "Case #" << asdf << ": ";
        cout << ans << "\n";
    }

    return 0;
}
