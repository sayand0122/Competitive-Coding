//https : //www.codechef.com/NOV20B/problems/FEMA2
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int n, k;
    string str;
    cin >> t;
    while (t--)
    {
        int i = 0, j = 0, ans = 0, c = 0, p = 0;
        cin >> n >> k;
        cin >> str;
        p = k + 1;
        while (i < n && j < n)
        {
            if (str[i] == 'M')
            {
                if (str[j] == 'I')
                {
                    if (i > j)
                    {
                        for (int b = j; b < i; b++)
                        {
                            if (str[b] == ':')
                                c++;
                        }
                    }
                    else
                    {
                        for (int b = i; b < j; b++)
                        {
                            if (str[b] == ':')
                                c++;
                        }
                    }
                    p = p - abs(i - j) - c;
                    if (p > 0)
                    {
                        ans++;
                        i++;
                        j++;
                        c = 0;
                    }
                    else
                    {
                        c = 0;
                        if (i > j)
                            j++;
                        else
                            i++;
                    }
                }
                else if (str[j] == 'X')
                {
                    i = j;
                    i++;
                    j++;
                    c = 0;
                }
                else
                {
                    j++;
                }
            }
            else if (str[i] == 'X')
            {
                j = i;
                i++;
                j++;
                c = 0;
            }
            else
            {
                i++;
            }
        }
        cout << ans << endl;
    }
}
