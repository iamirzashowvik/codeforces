#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool cD(int n)
{

    string v = to_string(n);

    vector<char> vc;
    for (char x : v)
    {
        vc.push_back(x);
    }

    for (char x : v)
    {
        int cnt = count(vc.begin(), vc.end(), x);

        if (cnt > 1)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    cin >> n;

    for (int i = 1;; i++)
    {

        bool x = cD(n + i);

        if (x == 1)
        {
            cout << n + i;
            break;
        }
    }
}