#include <iostream>
using namespace std;

int main()
{

    int x;
    cin >> x;
    if (x % 2 == 0 && x > 2 && x <= 100)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}