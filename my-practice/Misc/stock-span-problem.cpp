//https://youtu.be/XlD5VsOZsyA

// Brute Force Approach

// for (int i = 0; i < n; i++)
// {
//     int days = 0;
//     for (int j = i; j >= 0; j--)
//     {
//         if (prices[i] >= prices[j])
//         {
//             days++;
//         }
//         else
//         {
//             break;
//         }
//     }
// }

// STACK APPROACH

#include <bits/stdc++.h>
using namespace std;

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

vector<int> stockspan(vector<int> prices)
{
    vector<int> ans;
    stack<pair<int, int>> s;
    for (auto price : prices)
    {
        int days = 1;
        while (!s.empty() and s.top().first <= price)
        {
            days += s.top().second;
            s.pop();
        }
        s.push({price, days});
        ans.push_back(days);
    }
    return ans;
}

int main()
{
    fastio;
    vector<int> prices = {100, 80, 60, 70, 60, 75, 85};
    vector<int> res = stockspan(prices);
    for (auto i : res)
        cout << i << " ";
    cout << endl;
    return 0;
}
