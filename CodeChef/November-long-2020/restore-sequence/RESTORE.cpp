//https://www.codechef.com/NOV20B/problems/RESTORE
#include <bits/stdc++.h>
using namespace std;

#define MAX 4000001
vector<int> primes;
static bool prime[MAX];
#define godspeed cin.tie(0)->sync_with_stdio(0)

int main()
{
    godspeed;
    //int pos = 0;
    int t, n, inp;
    vector<int> a;
    vector<int> b;
    vector<int> c;

    for (int i = 0; i < MAX; i++) //This prime no. algo is sieve of eratosthenes 😁
    {
        prime[i] = true;
    }
    for (int p = 2; p * p < MAX; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i < MAX; i += p)
            {
                prime[i] = false;
            }
        }
    }
    for (int i = 2; i < MAX; i++)
    {
        if (prime[i])
        {
            primes.push_back(i);
        }
    }

    cin >> t;
    while (t--)
    {
        a.clear();
        b.clear();
        c.clear();
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> inp;
            b.push_back(inp);
        }
        for (int i = 0; i < b.size(); i++)
        {
            a.push_back(primes[b[i]]);
        }
        for (int i : a)
        {
            cout << i << " ";
        }
        cout << "\n";
    }
}