
//Question Source - https://www.youtube.com/watch?v=WEpLyOc0bCE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=35

/*
Realted to - Bit Maniputlation

Question - Find the unique number in an array where all the numbers except one, are present twice

Example - {2,4,6,3,6,4,2}         Output - 3

Logic - XOR 
        We will do XOR of all the numbers, the duplicate number XOR will give 0, but as that one number is unique, it's value wont be 0 so 
        print it.
*/

// #include <bits/stdc++.h>
// using namespace std;

// int unique(int a[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ a[i];
//     }
//     return xorsum;
// }

// int main()
// {
//     int a[] = {1, 2, 3, 4, 1, 2, 3};
//     cout << unique(a, 7) << endl;
// }

/*
Realted to - Bit Maniputlation

Question - Find 2 unique number in an array where all the numbers except them, are present twice

Example - {2,4,6,7,4,5,6,2}         Output - 7 5

Logic - XOR 
        We will do XOR of all the numbers, the duplicate number XOR will give 0, but as that one number is unique, it's value wont be 0 so 
        print it.
*/

// #include <bits/stdc++.h>
// using namespace std;

// int setBit(int n, int pos)
// {
//     return (n & (1 << pos));
// }

// void unique(int a[], int n)
// {
//     int xorsum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         xorsum = xorsum ^ a[i];
//     }

//     int setbit = 0, pos = 0;
//     int tempxor = xorsum;
//     while (setbit != 1)
//     {
//         setbit = xorsum & 1; //I will get the last bit
//         pos++;
//         xorsum = xorsum >> 1;
//     }

//     int newxor = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (setBit(a[i], pos - 1))
//         {
//             newxor = newxor ^ a[i];
//         }
//     }
//     cout << newxor << endl;
//     cout << (tempxor ^ newxor) << endl;
// }

// int main()
// {
//     int a[] = {2, 4, 6, 7, 4, 5, 6, 2};
//     unique(a, 8);
// }

/*

Realted to - Bit Maniputlation

Question - Find 2 unique number in an array where all the numbers except one, are present thrice

Example - {1,3,2,3,4,2,1,1,3,2}         Output - 4

Logic - XOR 
        We will do XOR of all the numbers, the duplicate number XOR will give 0, but as that one number is unique, it's value wont be 0 so 
        print it.

*/

#include <bits/stdc++.h>
using namespace std;

bool getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << pos));
}

int unique(int a[], int n)
{
    int result = 0;

    for (int i = 0; i < 64; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (getBit(a[j], i))
            {
                sum++;
            }
        }
        if (sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }
    return result;
}

int main()
{
    int a[] = {1, 3, 2, 3, 4, 2, 1, 1, 3, 2};
    cout << unique(a, 10) << endl;
}