//https://www.codechef.com/NOV20B/problems/ADADISH
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, n1, n2;
        int a[n];
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n, greater<int>());

        if (n == 1)
            cout << a[0];

        else
        {
            n1 = a[0];
            n2 = a[1];
            for (int i = 2; i < n; i++)
            {
                if (n1 <= n2)
                    n1 += a[i];
                else
                    n2 += a[i];
            }
            if (n1 >= n2)
                cout << n1;
            else
                cout << n2;
        }
    }
}