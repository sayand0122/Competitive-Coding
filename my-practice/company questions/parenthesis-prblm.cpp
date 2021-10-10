#include <bits/stdc++.h>
using namespace std;

bool checkStack(string s)
{
    stack<char> res;
    char x;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            res.push(s[i]);
            continue;
        }

        if (res.empty())
            return false;

        switch (s[i])
        {
        case ')':
            x = res.top();
            res.pop();
            if (x == '{' || x == '[')
                return false;
            break;

        case '}':
            x = res.top();
            res.pop();
            if (x == '(' || x == '[')
                return false;
            break;

        case ']':
            x = res.top();
            res.pop();
            if (x == '(' || x == '{')
                return false;
            break;
        }
    }
    return (res.empty());
}

int main()
{
    string s;
    cin >> s;
    if (checkStack(s))
        cout << "True";
    else
        cout << "False";
}
