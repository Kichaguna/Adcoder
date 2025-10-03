// * https://atcoder.jp/contests/abc397/tasks/abc397_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    if (n >= 38)
    {
        cout << 1;
    }
    else if (n < 37.5)
    {
        cout << 3;
    }
    else
    {

        cout << 2;
    }
}