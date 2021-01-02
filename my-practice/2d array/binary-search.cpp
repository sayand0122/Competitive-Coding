/*

For this algo to work the 2d array should be sorted.

Example  -  1 4 7 11
            2 5 8 12
            3 6 9 16
            10 13 14 17

        The starting points of this algo should either be from 11 or from 10.(according to this example but you get the feel)
             

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, key;
    cin >> n >> m;
    cin >> key;
    int mat[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    int r = 0, c = m - 1;
    bool f = false;
    while (r < n and c >= 0)
    {
        if (mat[r][c] == key)
        {
            f = true;
            break;
        }
        else if (mat[r][c] > key)
        {
            c--;
        }
        else
        {
            r++;
        }
    }
    if (f)
        cout << "Found";
    else
    {
        cout << "Not Found";
    }
}