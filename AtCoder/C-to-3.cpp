#include <bits/stdc++.h>
using namespace std;

// int divisible(string num)
// {
//     int n = num.length();
//     int sum = accumulate(begin(num), end(num), 0) - '0' * 1;
//     if (sum % 3 == 0)
//         return 0;
//     if (n == 1)
//         return -1;
//     for (int i = 0; i < n; i++)
//         if (sum % 3 == (num[i] - '0') % 3)
//             return 1;
//     if (n == 2)
//         return -1;
//     return 2;
// }
int main()
{
    string num;
    int ans = 0, sum = 0;
    cin >> num;
    int n = num.length();
    sum = accumulate(begin(num), end(num), sum) - '0' * 1;
    //cout << sum << "\n";
    //cout << '0' * 1 << "\n";
    if (sum % 3 == 0)
    {
        ans = 0;
        cout << ans;
        exit(0);
    }
    if (n == 1)
    {
        ans = -1;
        cout << ans;
        exit(0);
    }
    for (int i = 0; i < n; i++)
        if (sum % 3 == (num[i] - '0') % 3)
        {
            ans = 1;
            cout << ans;
            exit(0);
        }
    if (n == 2)
    {
        ans = -1;
        cout << ans;
        exit(0);
    }
    return 0;
}

/*
Given is a positive integer N, where none of the digits is 0. Let k be the number of digits in N. We want to make
a multiple of 3 by erasing at least 0 and at most k−1 digits from N and concatenating the remaining digits
without changing the order. Determine whether it is possible to make a multiple of 3 in this way.
 If it is possible, find the minimum number of digits that must be erased to make such a number.
 */
