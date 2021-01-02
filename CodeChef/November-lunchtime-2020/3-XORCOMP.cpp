// Problem - https://www.codechef.com/LTIME90B/problems/XORCOMP

//AC

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        if (x == y)
        {
            puts("0");
            continue;
        }
        y ^= x;
        int k;
        for (k = 29; k >= 0; k--)
        {
            if (y >> k & 1)
                break;
        }
        int ans = (n >> k + 1) << k;
        n &= (1 << k + 1) - 1;
        if (n >= (1 << k))
        {
            if (x >> k & 1)
                ans += n + 1 - (1 << k);
            else
                ans += 1 << k;
        }
        else if (!(x >> k & 1))
            ans += n + 1;
        cout << ans;
    }

    return 0;
}

// // Partial && TLE

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         unsigned long int x, y, n, c = 0;
//         cin >> x >> y >> n;
//         for (ll z = 0; z <= n; z++)
//         {
//             if ((x ^ z) < (y ^ z))
//             {
//                 c++;
//             }
//         }
//         cout << c << endl;
//     }
// }