#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long double sum = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        sum = sum + x;
    }
    long double x = sum / n;
    cout << fixed << setprecision(12);
    cout << x;
}
