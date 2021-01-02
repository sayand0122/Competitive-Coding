/*

Program - Write a program to generate all possible subset of a set.

Example - {a,b,c}
            {}      -   000
            {c}     -   001
            {b}     -   010
            {b,c}   -   011
            {a}     -   100
            {a,c}   -   101
            {a,b}   -   110
            {a,b,c} -   111


To execute in bash - i) Check you are in the correct directory
                    ii) Type g++ program-name.cpp -o program-name
                   iii) Type ./program-name
                    iv) Now give whatever input's were needed


*/

#include <bits/stdc++.h>
using namespace std;

void subsets(int a[], int n)
{
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                cout << a[j] << " ";
            }
        }
        cout << endl;
    }
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
    subsets(a, n);
}