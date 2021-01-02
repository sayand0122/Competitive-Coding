/*

Problem - Given two 2D array of sizes n1Xn2 and n2Xn3. Task is to multiply matrices

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2;
    cin >> n3 >> n4;
    int m1[n1][n2], m2[n3][n4];

    //2d vector int declaration and filling it with 0
    vector<vector<int>> mult(n1, vector<int>(n4, 0));
    if (n2 != n3)
    {
        cout << "Multiplication not possible";
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                cin >> m1[i][j];
            }
        }
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n4; j++)
            {
                cin >> m2[i][j];
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {
                for (int k = 0; k < n2; k++)
                {
                    mult[i][j] += m1[i][k] * m2[k][j];
                }
            }
        }
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n4; j++)
            {
                cout << mult[i][j] << " ";
            }
            cout << endl;
        }
    }
}