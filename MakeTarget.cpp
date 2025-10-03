// * https://atcoder.jp/contests/abc395/tasks/abc395_b
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, side, count1 = 0, mid, count2 = 0;
    cin >> n;
    if (n % 2 == 1)
    {
        side = (n - 1) / 2;
    }
    else
    {
        side = (n - 2) / 2;
    }
    mid = n - (side * 2);
    count2 = n / 4;
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < count1; j++)
        {
            cout << "#.";
        }
        if (i % 2 == 0)
        {
            for (int j = 0; j < n - (count1 * 4); j++)
            {
                cout << "#";
            }
        }
        else
        {
            for (int j = 0; j < n - (count1 * 4); j++)
            {
                cout << ".";
            }
        }
        for (int j = 0; j < count1; j++)
        {
            cout << ".#";
        }
        cout << endl;
        if (i % 2 == 0)
        {
            count1++;
        }
    }
    for (int i = 0; i < mid; i++)
    {
        if (n % 2 == 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < n / 4; j++)
            {
                cout << "#.";
            }
            for (int j = 0; j < n / 4; j++)
            {
                cout << ".#";
            }
            cout << endl;
        }
    }
    for (int i = 0; i < side; i++)
    {
        if (i % 2 == 0)
        {
            count2--;
        }
        for (int j = 0; j < count2; j++)
        {
            cout << "#.";
        }
        for (int j = 0; j < n - (count2 * 4); j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                cout << ".";
            }
        }
        for (int j = 0; j < count2; j++)
        {
            cout << ".#";
        }
        cout << endl;
    }
}