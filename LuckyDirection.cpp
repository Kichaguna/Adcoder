// * https://atcoder.jp/contests/abc391/tasks/abc391_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string d;
    cin >> d;
    if (d == "NW")
    {
        cout << "SE";
        return 0;
    }
    if (d == "SW")
    {
        cout << "NE";
        return 0;
    }
    if (d == "SE")
    {
        cout << "NW";
        return 0;
    }
    if (d == "NE")
    {
        cout << "SW";
        return 0;
    }
    if (d[0] == 'N')
    {
        cout << 'S';
        return 0;
    }

    if (d[0] == 'E')
    {
        cout << 'W';
        return 0;
    }

    if (d[0] == 'S')
    {
        cout << 'N';
        return 0;
    }

    if (d[0] == 'W')
    {
        cout << 'E';
        return 0;
    }
}