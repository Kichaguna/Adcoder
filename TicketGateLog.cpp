// * https://atcoder.jp/contests/abc397/tasks/abc397_b
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    vector<char> c;
    for (int i = 0; i < s.size(); i++)
    {
        c.push_back(s[i]);
    }
    for (int i = 0; i < c.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (c[i] != 'i')
            {
                c.insert(c.begin() + i, 'i');
                count++;
            }
        }
        else
        {
            if (c[i] != 'o')
            {
                c.insert(c.begin() + i, 'o');
                count++;
            }
        }
    }
    if (c.size() % 2 != 0)
    {
        cout << count + 1;
    }
    else
    {
        cout << count;
    }
}