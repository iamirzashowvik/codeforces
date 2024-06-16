#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int hard = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            hard = 1;
            break;
        }
    }
    if (hard == 0)
    {
        cout << "EASY";
    }
    else
    {
        cout << "HARD";
    }
}