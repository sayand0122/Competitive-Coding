// https://www.codechef.com/LTIME90B/problems/FRCTNS

// AC
#include <iostream>

using namespace std;

const int mxn = 1e6 + 1;
int divisor[mxn];

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 1; i <= n + 1; ++i)
        for (int j = i; j <= n + 1; j += i)
            ++divisor[j];
    for (int i = 1; i <= n; ++i)
        ans += divisor[i] * divisor[i + 1] / 2 - 1;
    cout << ans << '\n';
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}

// // Patial && TLE

// #include <bits/stdc++.h>
// using namespace std;

// bool reduce(int n, int d)
// {
//     int x;
//     x = __gcd(n, d);
//     n = n / x;
//     d = d / x;
//     if (d - n == 1)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }

// int main()
// {
//     int n, c = 0, num, den, j = 1;
//     bool b;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             num = i * (j + 1);
//             den = (i + 1) * j;
//             b = reduce(num, den);
//             if (b)
//             {
//                 c++;
//             }
//         }
//     }
//     cout << c << endl;
// }