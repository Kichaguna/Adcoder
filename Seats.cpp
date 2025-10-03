// * https://atcoder.jp/contests/abc375/tasks/abc375_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, count = 0;
    string s;
    cin >> n >> s;
    for (int i = 2; i < n; i++)
    {
        if (s[i] == '#' && s[i - 1] == '.' && s[i - 2] == '#')
        {
            count++;
        }
    }
    cout << count;
}