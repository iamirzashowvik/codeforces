#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x = n % 3;
    if (x == 1)
    {
        cout << "I hate it";
    }
    else if (x == 0)
    {
        cout << "I hate that I love that I hate it";
    }
    // int y=n%2;
    // if(y==0)
    else
    {
        cout << "I hate that I love it";
    }
}
