// https://www.codechef.com/MAY21C/problems/TCTCTOE
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

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        ll cx = 0, co = 0, c_ = 0;
        char mat[3][3] = {0};
        F0R(i, 3)
        {
            F0R(j, 3)
            {
                cin >> mat[i][j];
                if (mat[i][j] == 'X')
                    cx++;
                if (mat[i][j] == '_')
                    c_++;
                if (mat[i][j] == 'O')
                    co++;
            }
        }
        int resx = 0, res0 = 0;

        if (mat[0][0] == 'X' and mat[1][0] == 'X' and mat[2][0] == 'X')
            resx = 1;
        if (mat[0][1] == 'X' and mat[1][1] == 'X' and mat[2][1] == 'X')
            resx = 1;
        if (mat[0][2] == 'X' and mat[1][2] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][0] == 'X' and mat[1][1] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][0] == 'X' and mat[0][1] == 'X' and mat[0][2] == 'X')
            resx = 1;
        if (mat[1][0] == 'X' and mat[1][1] == 'X' and mat[1][2] == 'X')
            resx = 1;
        if (mat[2][0] == 'X' and mat[2][1] == 'X' and mat[2][2] == 'X')
            resx = 1;
        if (mat[0][2] == 'X' and mat[1][1] == 'X' and mat[2][0] == 'X')
            resx = 1;

        if (mat[0][0] == 'O' and mat[1][0] == 'O' and mat[2][0] == 'O')
            res0 = 1;
        if (mat[0][1] == 'O' and mat[1][1] == 'O' and mat[2][1] == 'O')
            res0 = 1;
        if (mat[0][2] == 'O' and mat[1][2] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][0] == 'O' and mat[1][1] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][0] == 'O' and mat[0][1] == 'O' and mat[0][2] == 'O')
            res0 = 1;
        if (mat[1][0] == 'O' and mat[1][1] == 'O' and mat[1][2] == 'O')
            res0 = 1;
        if (mat[2][0] == 'O' and mat[2][1] == 'O' and mat[2][2] == 'O')
            res0 = 1;
        if (mat[0][2] == 'O' and mat[1][1] == 'O' and mat[2][0] == 'O')
            res0 = 1;

        if ((resx == 1 and res0 == 1) or ((cx - co) < 0) or (cx - co) > 1)
            cout << 3 << "\n";
        else if (cx == 0 and co == 0 and c_ == 9)
            cout << 2 << "\n";
        else if (resx == 1 and res0 == 0 and cx > co)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 1 and cx == co)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 0 and c_ == 0)
            cout << 1 << "\n";
        else if (resx == 0 and res0 == 0 and c_ >= 0)
            cout << 2 << "\n";
        else
            cout << 3 << "\n";
    }
    return 0;
}