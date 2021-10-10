#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("inp.txt", "w", stdout);
    int t = (int)1e3;
    cout << t << "\n";
    srand(time(NULL));
    int N = (int)1e5, K = (int)1e5;
    while (t--)
    {
        int n = 1 + rand() % N, k = 1 + rand() % K;
        assert(n >= 1 && n <= (int)1e5);
        assert(k >= 1 && k <= (int)1e5);
        cout << n << " " << k << "\n";
    }
    return 0;
}
