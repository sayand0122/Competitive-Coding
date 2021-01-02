/*

Note - For power of 2 n has only 1 set bit and n-1 will have all the set bits after that position.

To execute in bash - i) Check you are in the correct directory
                    ii) Type g++ program-name.cpp -o program-name
                   iii) Type ./program-name
                    iv) Now give whatever input's were needed
                    
*/
#include <bits/stdc++.h>
using namespace std;

bool ispowerof2(int n)
{
    return (n && !(n & n - 1));
}
int main()
{
    int n;
    cin >> n;
    cout << ispowerof2(n);
}