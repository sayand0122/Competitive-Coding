// https://www.codechef.com/JAN21B/problems/FAIRELCT

#include <bits/stdc++.h>
using namespace std;

int sumArray(int x[], int l)
{
    int s = 0;
    return accumulate(x, x + l, s);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        int a[n];
        int b[m];
        cin >> n >> m;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < m; i++)
            cin >> b[i];

        if (sumArray(a, n) >= sumArray(b, m))
            cout << 0 << endl;
        else
        {
            int tmp = 0, pos_a = 0, pos_b = m, flag = 0;
            sort(a, a + n);
            sort(b, b + m);
            while (sumArray(a, n) >= sumArray(b, m))
            {
                tmp = a[pos_a];
                a[pos_a] = b[pos_b];
                b[pos_b] = a[pos_a];
                pos_a++;
                pos_b--;
                if (sumArray(a, n) >= sumArray(b, m))
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
            {
                cout << pos_a << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
}