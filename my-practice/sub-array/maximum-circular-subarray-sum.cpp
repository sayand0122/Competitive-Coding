// Max sub array sum= = Total sum of array - sum of non contributing subarray
#include <bits/stdc++.h>
using namespace std;

int kadane(int a[], int n)
{
    int currentSum = 0;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        currentSum += a[i];
        if (currentSum < 0)
            currentSum = 0;
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int wrapsum, nonwrapsum;
    nonwrapsum = kadane(a, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += a[i];
        a[i] = -a[i];
    }

    wrapsum = totalSum + kadane(a, n);

    cout << max(wrapsum, nonwrapsum);
}