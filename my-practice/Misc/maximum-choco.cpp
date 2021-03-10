#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, k1;
    cin >> n;
    int w = n, sum = n;
    while (w > 2)
    {
        k = w / 3;
        sum += k;
        k1 = w % 3;
        w = k + k1;
    }
    cout << sum << endl;
}
