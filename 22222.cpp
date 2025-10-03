// * https://atcoder.jp/contests/abc394/tasks/abc394_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string number;
    cin >> number;
    for (int i = 0; i < number.size(); i++)
    {
        if (number[i] - '0' == 2)
        {
            cout << 2;
        }
    }
}