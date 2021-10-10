// https://www.codechef.com/APRIL21B/problems/SDICE

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                                         \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        if (n == 1)
            cout << 20 << endl;
        else if (n == 2)
            cout << 36 << endl;
        else if (n == 3)
            cout << 51 << endl;
        else if (n == 4)
            cout << 60 << endl;
        else
        {
            int rem = n % 4;
            int ans = ((n - rem) / 4) * 44;
            if (rem == 0)
                ans += 16;
            else if (rem == 1)
                ans += 32;
            else if (rem == 2)
                ans += 44;
            else if (rem == 3)
                ans += 55;
            cout << ans << endl;
        }
    }
    return 0;
}
