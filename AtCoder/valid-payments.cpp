/*
In Republic of AtCoder, N kinds of coins are used: A1-yen, A2-yen, A3-yen, …, AN-yen coins.Here, A1=1 holds, and
for each i such that 1≤i<N, Ai<Ai+1 holds and Ai+1 is a multiple of Ai.At some shop in this country, Lunlun the 
dog bought an X-yen product by giving y (≥X) yen to the clerk and receiving the change of y−X yen from the clerk.
(The change may have been 0 yen.)

Here, both Lunlun and the clerk used the minimum number of coins needed to represent those amounts of money.
Additionally, the clerk did not return any kind of coins that Lunlun gave him.

Given X, find the number of possible values for y.
*/

#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int n;
    long long X;
    cin >> n >> X;
    long long A[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    long long d[n - 1];
    for (int i = 0; i < n - 1; i++)
        d[i] = A[i + 1] / A[i];
    long long dp[2][n];
    memset(dp, 0, sizeof(dp));
    dp[0][n - 1] = dp[1][n - 1] = 1;
    long long f[n];
    for (long long x = X, i = 0; i < n - 1; i++)
    {
        f[i] = x % d[i];
        x /= d[i];
    }
    // for (int i = 0; i < n-1; i++)
    //     cerr << i << " " << d[i] << " " << f[i] << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (f[i] == 0)
            dp[0][i] = dp[0][i + 1];
        else
            dp[0][i] = dp[1][i + 1] + dp[0][i + 1];
        if (f[i] + 1 == d[i])
            dp[1][i] = dp[1][i + 1];
        else
            dp[1][i] = dp[1][i + 1] + dp[0][i + 1];
    }
    cout << dp[0][0] << endl;
}