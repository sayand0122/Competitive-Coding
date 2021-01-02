//https://www.codechef.com/DEC20B/problems/EVENPSUM/

#include <bits/stdc++.h>
using namespace std;

#define godspeed cin.tie(0)->sync_with_stdio(0)
#define ll long long

int main()
{
    godspeed;
    ll t;
    cin >> t;
    // int arr[t], i = 0;
    // int t1 = t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll f = a / 2;
        ll f1 = a - f;
        ll l = b / 2;
        ll l1 = b - l;
        cout << f * l + f1 * l1 << endl;
        // arr[i] = f * l + f1 * l1;
        // i++;
    }
    // for (int i = 0; i < t1; i++)
    // {
    //     cout << arr[i] << endl;
    // }
}