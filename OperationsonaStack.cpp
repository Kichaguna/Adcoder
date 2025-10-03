// * https://atcoder.jp/contests/arc194/tasks/arc194_a
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum = 0;
    vector<int> number;
    cin >> n;
    int anum[n];
    for (int i = 0; i < n; i++)
    {
        cin >> anum[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (number.size() == 0)
        {
            number.push_back(anum[i]);
        }
        else
        {
            if (anum[i] < 0 && number[number.size() - 1] < 0)
            {
                number.pop_back();
            }
            else
            {
                if (anum[i] < 0 && anum[i + 1] < number[number.size() - 1] && i != n - 1 || anum[i] < 0 && anum[i + 1] < 0)
                {
                    i++;
                }
                else
                {
                    if (anum[i] < 0 && i == n - 1 && anum[i] + number[number.size() - 1] >= 0)
                    {
                        number.push_back(anum[i]);
                    }
                    else
                    {
                        if (anum[i] < 0 && i == n - 1 && anum[i] + number[number.size() - 1] < 0)
                        {
                            number.pop_back();
                        }
                        else
                        {
                            if (anum[i] >= 0)
                            {
                                number.push_back(anum[i]);
                            }
                        }
                    }
                }
            }
        }
    }
    for (long unsigned int i = 0; i < number.size(); i++)
    {
        sum += number[i];
    }
    cout << sum;
}