#include <iostream>
using namespace std;

int main()
{
    int c;
    cin >> c;
    int step = c / 5;
    int rem = c % 5;
    if (rem != 0)
    {
        step++;
    }
    cout << step;
}