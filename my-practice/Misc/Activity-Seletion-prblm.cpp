// https://youtu.be/DHr-Mn_vzs0

// Problem -> You are given n activities with their start and end time
//            Select the maximum number of activities that can be performed by a single person
//            assuming that the person can do only a single activity at a time.

// Sample Test Case:
// INPUT -
// 3
// 10 20
// 12 15
// 20 30
// OUTPUT -
// 2

// Constraints:
// 1<=n<=1e5
// 1<=start,end<=1e9

// Approaches :-

// GREEDY -> If your are at ith activity, What should be your next step?
//            ans -> Take the next activity which ends first
//            so SORT the activitieswith respect to end times

//
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
    int n;
    cin >> n;
    vector<vi> v;
    F0R(i, n)
    {
        int st, et;
        cin >> st >> et;
        v.pb({st, et});
    }
    sort(all(v), [&](vi &a, vi &b) { return a[1] < b[1]; });
    int take = 1;
    ll et = v[0][1];
    FOR(i, 1, n)
    {
        if (v[i][0] >= et)
        {
            take++;
            et = v[i][1];
        }
    }
    cout << take << "\n";
    return 0;
}
