// https://www.codechef.com/FEB21B/problems/PRIGAME

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

const int MAX = 1000000;
int prefix[MAX + 1];

void sieve_of_eratosthenes()
{
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));

    for (int i = 2; i * i <= MAX; i++)
    {
        if (prime[i] == true)
        {
            for (int j = i * 2; j <= MAX; j += i)
            {
                prime[j] = false;
            }
        }
    }

    prefix[0] = prefix[1] = 0;
    for (int i = 2; i <= MAX; i++)
    {
        prefix[i] = prefix[i - 1];
        if (prime[i])
            prefix[i]++;
    }
}

int main()
{
    fastio;
    int t;
    cin >> t;
    sieve_of_eratosthenes();
    while (t--)
    {
        ll x, y;
        cin >> x >> y;
        if (prefix[x] > y)
            cout << "Divyam"
                 << "\n";
        else
            cout << "Chef"
                 << "\n";
    }
    return 0;
}