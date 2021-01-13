// https://www.codechef.com/DEC20B/problems/HXOR

#include <bits/stdc++.h>
using namespace std;
int Bit(int n)
{
    if (n == 0)
        return -1;

    return (log2(n));
}
bool isSet(int n, int k)
{
    if (n & (1 << (k)))
        return true;
    return false;
}

int type1(int *a, int n, int x)
{
    for (int i = 0; i < n - 1; i++)
    {
        while (a[i] && x)
        {
            int flag = 0;
            for (int j = i + 1; a[i] != 0 && j < n; j++)
            {
                int MSB = Bit(a[i]);
                if (isSet(a[j], MSB) && x > 0)
                {
                    flag = 1;
                    a[i] &= ~(1 << MSB);
                    a[j] &= ~(1 << MSB);
                    x--;
                    break;
                }
            }
            if (!flag)
            {
                int MSB = Bit(a[i]);
                a[i] &= ~(1 << MSB);
                a[n - 1] ^= 1 << MSB;
                x--;
            }
        }
    }
    return x;
}

void solution()
{
    int n, x;
    cin >> n >> x;

    int a[n], b[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];

        b[i] = a[i];
    }

    int t = type1(a, n, x);
    if (t == 1 || (t % 2 && n == 2))
    {
        int index = n - 2;
        int MSB;
        if (a[index] != 0)
        {
            MSB = 1 << (int)log2(a[index]);
        }
        else
            MSB = 1;
        a[index] ^= MSB;
        a[index + 1] ^= MSB;
    }

    for (int i = 0; i < n; ++i)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE

#endif

    int t;
    cin >> t;
    while (t--)
    {
        solution();
        cout << endl;
    }
    return 0;
}