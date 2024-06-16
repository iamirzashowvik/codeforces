#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<int> out;
    vector<int> ins;
    vector<int> sums;
    int total = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        out.push_back(x);
        ins.push_back(y);
        if (i == 0)
        {
            total = x + y;
            sums.push_back(total);
        }
        else
        {
            total = total - x + y;
            sums.push_back(total);
        }
    }

    sort(sums.begin(), sums.end(), greater<int>());
    cout << sums[0];
}