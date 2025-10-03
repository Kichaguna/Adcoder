// * https://atcoder.jp/contests/abc392/tasks/abc392_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int number[3];
    cin >> number[0] >> number[1] >> number[2];
    sort(number, number + 3);
    if (number[0] * number[1] == number[2])
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}