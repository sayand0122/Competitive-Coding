// https://www.codechef.com/FEB21B/problems/MAXFUN

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

int main()
{
    fastio;
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        long long int max = INT_MIN;
        long long int min = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > max)
            {
                max = a[i];
            }
            if (a[i] < min)
            {
                min = a[i];
            }
        }
        long long int res = max - min;
        res *= 2;
        cout << res << endl;
    }
    return 0;
}
