/*
Given is a number sequence A1,A2,A3,…,AN, which may contain negative elements.On a number line, there is a robot
at coordinate 0. It will do the following actions in order:

Move A1 in the positive direction.

Move A1 in the positive direction, and then move A2 in the positive direction.

Move A1 in the positive direction, then move A2 in the positive direction, and then move A3 in the positive direction.
⋮
Move A1 in the positive direction, then move A2 in the positive direction, then move A3 in the positive direction,
…,…, and then move AN in the positive direction.


Find the greatest coordinate occupied by the robot from the beginning to the end of the process.
*/

#include <bits/stdc++.h>
#include <atcoder/all>

using namespace atcoder;
using namespace std;
using uint = unsigned int;
using ll = long long;
using ull = unsigned long long;
const ll MOD = 1000000007;
const ll LNF = __LONG_LONG_MAX__;

int main()
{
    int N;
    cin >> N;
    vector<ll> A(N);
    vector<ll> s(N + 1);
    s[0] = 0;
    vector<ll> ma(N + 1, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
        s[i + 1] = s[i] + A[i];
        ma[i + 1] = max(ma[i], s[i + 1]);
    }
    ll ans = 0;
    ll x = 0;
    for (int i = 0; i <= N; i++)
    {
        ans = max(ans, x + ma[i]);
        x += s[i];
    }
    cout << ans << endl;
    return 0;
}
