#include <string>
#include <iostream>

using namespace std;

int main()
{
    string a;
    int p;
    cin >> p;
    cin >> a;
    char y;
    int count = 0;
    for (char x : a)
    {
        if (y == x)
        {
            count++;
        }
        else
        {
            y = x;
        }
    }
    cout << count;
}