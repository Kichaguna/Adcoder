// * https://atcoder.jp/contests/abc395/tasks/abc395_d
#include <bits/stdc++.h>
using namespace std;

void moveab(int num[][], int y, int z)
{
    num[0][y] = 0;
    num[1][z] = y;
}

void swapab(int num[][], int y, int z)
{
    int keep[2];
    keep[0] = num[0][y - 1];
    keep[1] = num[1][y - 1];
    num[0][y - 1] = num[0][z - 1];
    num[1][y - 1] = num[1][z - 1];
    num[0][z - 1] = keep[0];
    num[1][z - 1] = keep[1];
}

void findnum(int num[][], int y, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (num[0][i] == y || num[1][i] == y)
        {
            cout << i + 1 << endl;
            break;
        }
    }
}

int main()
{
    int n, q, x, y, z;
    cin >> n;
    int num[2][n];
    for (int i = 0; i < n; i++)
    {
        num[0][i] = i + 1;
        num[1][i] = 0;
    }
    for (int i = 0; i < q; i++)
    {
        cin >> x;
        if (x == 1)
        {
            cin >> y >> z;
            moveab(num, y, z);
        }
        if (x == 2)
        {
            cin >> y >> z;
            swapab(num, y, z);
        }
        if (x == 3)
        {
            cin >> y;
            findnum(num, y, n);
        }
    }
}