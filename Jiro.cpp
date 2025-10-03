// * https://atcoder.jp/contests/abc371/tasks/abc371_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ab, ac, bc;
    int num[3] = {0, 0, 0};
    int numcheck[3];
    int temp;
    cin >> ab >> ac >> bc;
    if (ab == '>')
    {
        num[0] += 2;
        num[1] -= 1;
    }
    else
    {
        num[1] += 2;
        num[0] -= 1;
    }
    if (ac == '>')
    {
        num[0] += 2;
        num[2] -= 1;
    }
    else
    {
        num[2] += 2;
        num[0] -= 1;
    }
    if (bc == '>')
    {
        num[1] += 2;
        num[2] -= 1;
    }
    else
    {
        num[2] += 2;
        num[1] -= 1;
    }
    numcheck[0] = num[0];
    numcheck[1] = num[1];
    numcheck[2] = num[2];
    sort(num, num + 3);
    for (int i = 0; i < 3; i++)
    {
        if (numcheck[i] == num[1])
        {
            if (i == 0)
            {
                cout << "A";
            }
            else if (i == 1)
            {
                cout << "B";
            }
            else
            {
                cout << "C";
            }
        }
    }
}