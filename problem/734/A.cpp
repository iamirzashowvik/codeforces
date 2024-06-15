
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    int n;
    cin >> n >> x;
    int a = 0;
    int d = 0;
    for (char p : x)
    {
        if (p == 'A')
        {
            a++;
        }
        if (p == 'D')
        {
            d++;
        }
    }

    if (a > d)
    {
        cout << "Anton";
    }
    else if (a == d)
    {
        cout << "Friendship";
    }
    else
    {
        cout << "Danik";
    }
}