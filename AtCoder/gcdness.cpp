#include <bits/stdc++.h>
using namespace std;
#define IOS                  \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
#define ll long long
int lcm(int a, int b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    IOS;
    int n;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int count = 0;
    int prev = INT32_MIN;
    int num = 2;
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[j] % i == 0)
            {
                count++;
            }
        }
        if (count >= prev)
        {
            prev = count;
            num = i;
        }
        count = 0;
    }
    cout << num << endl;
}

/*
Given is an integer sequence A:A1,A2,A3,…,AN.Let the GCD-ness of a positive integer k be the number of elements
among A1,A2,A3,…,AN that are divisible by k. Among the integers greater than or equal to 2, find the integer
with the greatest GCD-ness. If there are multiple such integers, you may print any of them.
*/