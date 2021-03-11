#include <bits/stdc++.h>
using namespace std;

#define e endl
#define fastio                                                                                                         \
    ios_base::sync_with_stdio(false);                                                                                  \
    cin.tie(NULL)

#define MAX 1000

bool hashTable[MAX + 1][2];

void insert(int a[], int n)
{
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] > 0)
        {
            hashTable[a[i]][0] = 1;
        }
        else
        {
            hashTable[abs(a[i])][1] = 1;
        }
    }
}

bool search(int x)
{
    if (x > 0)
    {
        if (hashTable[x][0] == 1)
            return true;
        else
            return false;
    }
    else
    {
        if (hashTable[abs(x)][1] == 1)
            return true;
        else
            return false;
    }
}

int main()
{
    fastio;
    int arr[] = {-1, 9, 2, -5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    insert(arr, n);
    int find = 3;
    if (search(find))
    {
        cout << "Found" << e;
    }
    else
    {
        cout << "not found" << e;
    }
    return 0;
}
