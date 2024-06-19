// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

void vp(vector<int> v)
{
    cout << endl;
    for (int x : v)
    {
        cout << x;
    }
    cout << endl;
}

int cp(vector<int> v, int k)
{
    auto it = find(v.begin(), v.end(), k);
    if (it != v.end())
    {
        int index = it - v.begin();
        return index;
    }
    else
    {
        return -1;
    }
}

int lastApp(vector<int> v, int k)
{

    int c = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if (v[i] == k)
        {

            c = i;
        }
    }

    return c;
}

int main()
{
    int x;
    vector<int> vec;
    cin >> x;
    for (int i = 0; i < x; i++)
    {
        int p;
        cin >> p;
        vec.push_back(p);
    }

    vector<int> v2 = vec;
    sort(v2.begin(), v2.end());
    int min = v2[0];
    int max = v2[v2.size() - 1];

    int imax = cp(vec, max);

    int c = 0;
    for (int i = imax; i > 0; i--)
    {
        c++;
        int mm = vec[i];
        vec[i] = vec[i - 1];

        if (i - 1 >= 0)
        {
            vec[i - 1] = mm;
        }
        //   vp(vec);
    }

    int imin = lastApp(vec, min);

    cout << c + vec.size() - 1 - imin;
}