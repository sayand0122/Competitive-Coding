/*

Program - Count the number of 1's in the binary representation of a number

Logic - (n & n-1) has same bits as n except the rightmost set bit

To execute in bash - i) Check you are in the correct directory
                    ii) Type g++ program-name.cpp -o program-name
                   iii) Type ./program-name
                    iv) Now give whatever input's were needed

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    cout << count << endl;
}