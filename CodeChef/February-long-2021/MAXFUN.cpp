// https://www.codechef.com/FEB21B/problems/MAXFUN

#include <bits/stdc++.h>
using namespace std;

#define fastio                                                                                                         \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int res = abs(a[n - 1] - a[n - 2]) + abs(a[n - 2] - a[n - 3]) + abs(a[n - 3] - a[n - 1]);
        cout << res << endl;
    }

    return 0;
}
