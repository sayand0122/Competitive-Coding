//https://codingcompetitions.withgoogle.com/kickstart/round/0000000000050e01/00000000000698d6

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define ll long long int

int main()
{
    fastio;
    ll t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n, p;
        cin >> n >> p;
        int skill[n];
        int cumulativeSum[n + 1];
        cumulativeSum[0] = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> skill[i];
        }

        sort(skill, skill + n);

        for (ll i = 0; i < n; i++)
        {
            cumulativeSum[i + 1] = cumulativeSum[i] + skill[i];
        }

        ll ans = INT_MAX;
        for (ll i = p - 1; i < n; i++)
        {
            ll sum = cumulativeSum[i + 1] - cumulativeSum[i - (p - 1)];
            ll training = skill[i] * p - sum;
            ans = min(ans, training);
        }
        std::cout << "Case #" << i << ": " << ans << endl;
    }
    return 0;
}
