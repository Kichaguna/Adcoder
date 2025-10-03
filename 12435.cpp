// * https://atcoder.jp/contests/abc390/tasks/abc390_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numnor[5] = {1, 2, 3, 4, 5};
    vector<int> dif;
    int num[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        if (num[i] != numnor[i])
        {
            dif.push_back(i);
        }
    }
    if (dif.size() == 2)
    {
        sort(dif.begin(), dif.end());
        if (dif[0] + 1 == dif[1])
        {
            cout << "Yes";
        }
        else
        {
            cout << "No";
        }
    }
    else
    {
        cout << "No";
    }
}