// * https://atcoder.jp/contests/abc393/tasks/abc393_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == "fine" && s2 == "fine")
    {
        cout << 4;
    }
    if (s1 == "fine" && s2 == "sick")
    {
        cout << 3;
    }
    if (s1 == "sick" && s2 == "fine")
    {
        cout << 2;
    }
    if (s1 == "sick" && s2 == "sick")
    {
        cout << 1;
    }
}