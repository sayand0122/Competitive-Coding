// https://www.codechef.com/APRIL21B/problems/CHAOSEMP
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
    ll t, q, d;
    cin >> t >> q >> d;
    while (t--)
    {
        ll lx = (-1ll) * 1e18, rx = 1e18, ly = lx, ry = rx;
        lx--;
        rx++;
        ly--;
        ry++;
        ll cur = 1;
        string cc;
        ll z = -1;
        while (true)
        {
            if (cur == 1)
            {
                if (rx >= (lx + 2) and ry >= (ly + 2))
                {
                    ll midx = (rx + lx) / 2;
                    ll midy = (ry + ly) / 2;
                    cout << cur << " " << midx << " " << midy << endl;
                    cin >> cc;
                    if (cc.compare("O") == 0 || cc.compare("FAILED") == 0)
                        break;
                    if (cc[0] == 'X')
                    {
                        lx = midx - 1;
                        rx = midx + 1;
                    }
                    else if (cc[0] == 'P')
                    {
                        if (d == 0)
                        {
                            rx = midx - 1;
                        }
                        else
                        {
                            rx = midx;
                            lx--;
                        }
                    }
                    else
                    {
                        if (d == 0)
                            lx = midx + 1;
                        else
                        {
                            lx = midx;
                            rx++;
                        }
                    }
                    if (cc[1] == 'Y')
                    {
                        ly = midy - 1;
                        ry = midy + 1;
                    }
                    else if (cc[1] == 'P')
                    {
                        if (d == 0)
                            ry = midy - 1;
                        else
                        {
                            ry = midy;
                            ly--;
                        }
                    }
                    else
                    {
                        if (d == 0)
                            ly = midy + 1;
                        else
                        {
                            ly = midy;
                            ry++;
                        }
                    }
                    if (d == 0)
                    {
                    }
                    else
                    {
                        if (rx <= (lx + 3) and ry <= (ly + 3))
                            cur = 2;
                    }
                }
                else
                {
                    cur = 2;
                    cout << cur << " " << lx << " " << ly << " " << rx << " " << ry << endl;
                    cin >> cc;
                    break;
                }
            }
            else
            {
                if (rx == (lx + 3) and ry == (ly + 3))
                {
                    cout << cur << " " << lx << " " << ly << " " << lx + 2 << " " << ry << endl;
                    cin >> cc;
                    if (cc.compare("O") == 0)
                    {
                        break;
                    }
                    else if (cc.compare("IN") == 0)
                    {
                        rx = lx + 2;
                    }
                    else
                    {
                        lx += 2;
                        rx++;
                    }
                }

                if (rx == (lx + 2) and ry == (ly + 3))
                {
                    cout << cur << " " << lx << " " << ly << " " << rx << " " << ly + 2 << endl;
                    cin >> cc;
                    if (cc.compare("O") == 0)
                    {
                    }
                    else if (cc.compare("IN") == 0)
                    {
                        cout << cur << " " << lx << " " << ly << " " << rx << " " << ly + 2 << endl;
                        cin >> cc;
                    }
                    else
                    {
                        cout << cur << " " << lx << " " << ly + 2 << " " << rx << " " << ly + 4 << endl;
                        cin >> cc;
                    }
                    break;
                }
                if (rx == (lx + 3) and ry == (ly + 2))
                {
                    cout << cur << " " << lx << " " << ly << " " << lx + 2 << " " << ry << endl;
                    if (cc.compare("O") == 0)
                    {
                    }
                    else if (cc.compare("IN") == 0)
                    {
                        cout << cur << " " << lx << " " << ly << " " << lx + 2 << " " << ry << endl;
                        cin >> cc;
                    }
                    else
                    {
                        cout << cur << " " << lx + 2 << " " << ly << " " << lx + 4 << " " << ry << endl;
                        cin >> cc;
                    }
                    break;
                }
                else
                {
                    cout << cur << " " << lx << " " << ly << " " << rx << " " << ry << endl;
                    cin >> cc;
                    break;
                }
            }
            cout.flush();
        }
        cout.flush();
    }
    return 0;
}
