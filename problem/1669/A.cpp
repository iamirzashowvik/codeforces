// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x = 0;
    vector<int> m;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
        int p;
        cin >> p;
        m.push_back(p);
    }

    for (int i = 0; i < x; i++)
    {
        if (m[i] <= 1399)
        {
            cout << "Division 4" << endl;
        }
        else if (1400 <= m[i] && m[i] <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (1600 <= m[i] && m[i] <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else
        {
            cout << "Division 1" << endl;
        }
    }
}