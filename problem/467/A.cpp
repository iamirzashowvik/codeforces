#include <iostream>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int avr = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        int y;
        cin >> x >> y;
        if (y - x >= 2)
        {
            avr++;
        }
    }
    cout << avr;
}