// * https://atcoder.jp/contests/abc398/tasks/abc398_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, keed;
    cin >> n;
    if (n % 2 == 1)
    {
        keed = n / 2;
    }
    else
    {
        keed = (n / 2) - 1;
    }
    for (int i = 0; i < keed; i++)
    {
        cout << "-";
    }
    if (n % 2 == 1)
    {
        cout << "=";
    }
    else
    {
        cout << "==";
    }
    for (int i = 0; i < keed; i++)
    {
        cout << "-";
    }
}