// * https://atcoder.jp/contests/abc377/tasks/abc377_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int check1 = 0, check2 = 0, check3 = 0;
    cin >> s;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'A')
        {
            check1 = 1;
        }
        if (s[i] == 'B')
        {
            check2 = 1;
        }
        if (s[i] == 'C')
        {
            check3 = 1;
        }
    }
    if (check1 == 1 && check2 == 1 && check3 == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}