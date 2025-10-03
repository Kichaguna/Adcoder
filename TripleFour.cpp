// * https://atcoder.jp/contests/abc396/tasks/abc396_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, check = 0, a;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        x.push_back(a);
        if (x[i] == x[i - 1] && x[i - 1] == x[i - 2] && x.size() >= 3 && check == 0)
        {
            cout << "Yes";
            check = 1;
        }
    }
    if (check == 0)
    {
        cout << "No";
    }
}