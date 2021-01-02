//https://www.codechef.com/DEC20B/problems/POSPREFS/

#include <bits/stdc++.h>
using namespace std;

#define godspeed cin.tie(0)->sync_with_stdio(0)

int main()
{
    godspeed;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, i, sum = 0;
        cin >> n >> k;
        int a[n + 1];
        for (i = 1; i <= n;)
        {
            if (k == 0 or k == n)
                break;
            if (sum + i <= i + 1 and k > 0)
            {
                a[i] = i;
                sum += i;
                i++;
                k--;
                continue;
            }
            if (sum > i)
            {
                a[i] = -i;
                sum -= i;
                i++;
                if (sum > 0)
                    k--;
                continue;
            }
            if (sum + i > i + 1 and k == 1)
            {
                a[i] = -i;
                i++;
                if (sum - i > 0)
                    break;
                else
                {
                    sum -= i;
                    continue;
                }
            }
            if (sum + i > i + 1 and k > 1)
            {
                a[i] = i;
                if (sum > 0)
                    k--;
                sum += i;
                i++;
            }
        }
        if (k == n)
        {
            for (i = 1; i <= n; i++)
                a[i] = i;
        }
        else if (i <= n)
        {
            for (; i <= n; i++)
                a[i] = -i;
        }
        for (i = 1; i <= n; i++)
            cout << a[i] << " ";
        cout << endl;
    }
}

// while (t--)
// {
//     int n, k, i;
//     cin >> n >> k;
//     int arr[n];
//     for (i = 0; i < k; i++)
//     {
//         arr[i] = i + 1;
//     }

//     for (int j = i; j < n; j++)
//     {
//         arr[j] = -(j + 1);
//     }

//     for (int j : arr)
//     {
//         cout << j << " ";
//     }

//     cout << endl;
// }
