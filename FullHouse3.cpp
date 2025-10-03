// * https://atcoder.jp/contests/abc398/tasks/abc398_b
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int card[7];
    long unsigned int check = 0, where;
    vector<int> newcard;
    vector<int> corcard;
    for (int i = 0; i < 7; i++)
    {
        cin >> card[i];
        for (int j = 0; j < newcard.size(); j++)
        {
            if (card[i] == newcard[j])
            {
                where = j;
                check = 1;
                break;
            }
        }
        if (check == 0)
        {
            newcard.push_back(card[i]);
            corcard.push_back(1);
        }
        else
        {
            corcard[where]++;
        }
        check = 0;
    }
    sort(corcard.begin(), corcard.end());
    if (corcard[corcard.size() - 1] >= 3 && corcard[corcard.size() - 2] >= 2 && corcard.size() >= 2)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}