// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void pV(vector<int> v)
{
    for (int num : v)
    {
        cout << num << " ";
    }
    cout << endl;
}
int main()
{

    int n;
    cin >> n;

    vector<int> x;

    vector<int> m;
    int c1;
    int c2;
    cin >> c1;

    for (int i = 0; i < n; i++)
    {
        m.push_back(i + 1);
    }
    for (int i = 0; i < c1; i++)
    {

        int p;

        cin >> p;
        if (find(x.begin(), x.end(), p) != x.end())
        {
        }
        else if (p <= 0)
        {
        }
        else
        {
            x.push_back(p);
        }
    }

    cin >> c2;
    for (int i = 0; i < c2; i++)
    {
        int p;

        cin >> p;
        if (find(x.begin(), x.end(), p) != x.end())
        {
        }
        else if (p <= 0)
        {
        }
        else
        {
            x.push_back(p);
        }
    }

    sort(x.begin(), x.end());

    if (m == x)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}