// https://www.codechef.com/DEC20B/problems/VACCINE1/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int d1, v1, d2, v2, p, i, sum = 0;
    cin >> d1 >> v1 >> d2 >> v2 >> p;
    for (i = 1; i < 1e4; i++)
    {
        if (d1 <= i)
            sum += v1;
        if (d2 <= i)
            sum += v2;
        if (sum >= p)
            break;
    }
    cout << i << endl;
}
