// https://www.codechef.com/JAN21C/problems/WIPL

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
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
        int tmp, k, n, count = 0, sum = 0, person = 0;
        cin >> n >> k;
        int box_height[n];
        for (int i = 0; i < n; i++)
        {
            cin >> box_height[i];
        }

        // sort(box_height, box_height + n, greater<int>());
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            if (box_height[i] > k)
            {
                count++;
                person++;
                box_height[i] = -1;
                // for (int j = 0; j < n; j++)
                // {
                //     cout << box_height[j] << " ";
                // }
            }
            if (person == 2)
            {
                cout << count << endl;
                exit(0);
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (box_height[i] > 0)
            {
                sum += box_height[i];
                count += 1;
                if (sum >= k)
                {
                    person++;
                    sum = 0;
                }
                if (person == 2)
                {
                    cout << count << endl;
                    exit(0);
                }
            }
        }
        if (person <= 0)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}