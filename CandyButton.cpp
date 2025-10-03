// *https://atcoder.jp/contests/abc376/tasks/abc376_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, base, count = 1;
    cin >> n >> c;
    int num[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    base = num[0];
    while (base <= num[n - 1])
    {
        base += c;
        for (int i = 0; i < n; i++)
        {
            if (base <= num[i])
            {
                count++;
                base = num[i];
                break;
            }
        }
    }
    cout << count;
}