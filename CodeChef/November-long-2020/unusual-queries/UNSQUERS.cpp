#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num, que, satis, L, R, x, y, last = 0, z;
    cin >> num >> que >> satis;
    int a[num];
    for (int i = 0; i < num; i++)
    {
        cin >> a[i];
    }

    for (int u = 0; u < que; u++)
    {
        cin >> x;
        cin >> y;

        L = (x + (satis * last) - 1) % num + 1;
        R = (y + (satis * last) - 1) % num + 1;

        if (L > R)
        {
            swap(L, R);
        }
        for (int i = 0; i < num; i++)
        {
            for (int j = i + 1; j < num; j++)
            {
                int q = 0, m[num] = {'\0'};
                for (int k = i; k < j - 1; k++)
                {
                    int ans = 1;
                    int temp = a[k];
                    for (int l = k + 1; l < j - 1; l++)
                    {
                        if (a[l] > temp)
                        {
                            temp = a[l];
                            ans++;
                        }
                    }
                    m[q++] = ans;
                }
                sort(m, m + q);
            }
        }
        int temp = 0, ans = 0;
        int b[R - L + 1] = {'\0'}, l = 0;
        for (int y = L - 1; y < R; y++)
        {
            ans = 1;
            temp = a[y];
            for (int j = y + 1; j < R; j++)
            {
                if (a[j] > temp)
                {
                    temp = a[j];
                    ans++;
                }
            }
            b[l++] = ans;
        }
        sort(b, b + l);
        cout << b[l - 1] << endl;
        last = b[l - 1];
    }

    return 0;
}