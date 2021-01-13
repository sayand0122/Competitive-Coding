// https://www.codechef.com/DEC20B/problems/VACCINE2/

#include <bits/stdc++.h>
using namespace std;

#define godspeed cin.tie(0)->sync_with_stdio(0)
#define ll long long

int main()
{
    godspeed;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, d, risk = 0, min_day;
        cin >> n >> d;
        ll age[n];
        for (int i = 0; i < n; i++)
        {
            cin >> age[i];
            if (age[i] >= 80 or age[i] <= 9)
                risk++;
        }
        ll not_risk = n - risk;
        min_day = ceil((double)risk / (double)d) + ceil((double)not_risk / (double)d);
        cout << min_day << endl;
    }
}