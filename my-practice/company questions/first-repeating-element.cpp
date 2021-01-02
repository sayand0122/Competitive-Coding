/*
Problem - Given an array arr[] of size N. The task is to find the 1st repeating element in the array of integers, i.e.
          an element that occurs more than once and whose index of first occuerence is smallest.

Comapnies - Amazon, Oracle

Contraints - 1 <= N <= 10^6
             0 <= Ai <= 10^6

Example : - 
    Input
            7
            1 5 3 4 3 5 6
    Output 
            2
            (As 5 is apperaing twice and it's index is smallest)

*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int n, i;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    const int N = 1e5 + 2;
    int idx[N];
    for (i = 0; i < N; i++)
    {
        idx[i] = -1;
    }

    int minindex = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (idx[a[i]] != -1)
        {
            minindex = min(minindex, idx[a[i]]);
        }
        else
        {
            idx[a[i]] = i;
        }
    }
    if (minindex == INT_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << minindex + 1 << endl;
    }
}