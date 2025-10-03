// * https://atcoder.jp/contests/abc395/tasks/abc395_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, check = 0;
    cin >> n;
    int number[n];
    for (int i = 0; i < n; i++)
    {
        cin >> number[i];
        if (number[i] <= number[i - 1] && i != 0)
        {
            check = 1;
        }
    }
    if (check == 1)
    {
        cout << "No";
    }
    else
    {
        cout << "Yes";
    }
}