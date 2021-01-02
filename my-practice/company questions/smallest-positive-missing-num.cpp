/*

Problem - You are given an array arr[] of N integers including 0. The task is to find the smallest positive number missing from the array.

Companies - Snapdeal, Samsung, Accolite, Amazon

Constraints - 1 <= N <= 10^6
              -10^6 <= Ai <= 10^6

Note - For those thinking how to access negative index 
       Trick - Make an array of 2x10^6 store negative numbers till 10^6-1 and tge positive after that.😁

Example - Input
                0 -9 1 3 -4 5
          Output
                2
*/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e6 + 2;

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<bool> check(N, false);

    for (int i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            check[a[i]] = 1;
        }
    }
    int ans = -1;
    for (int i = 1; i < N; i++)
    {
        if (check[i] == false)
        {
            ans = i;
            break;
        }
    }
    cout << ans;
}