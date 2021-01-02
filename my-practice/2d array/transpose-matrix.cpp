/*

Problem - Given a square matrix A and it's number of rows/columns N. Return the TRANSPOSE of A.

Constraints - 1 <= N <= 1000

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            //swap
            swap(mat[i][j], mat[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
}