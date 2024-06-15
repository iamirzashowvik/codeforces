#include <iostream>
using namespace std;

int main()
{
    int k;
    int w;
    int n;

    cin >> k >> n >> w;
    int price = 0;
    for (int i = 1; i <= w; i++)
    {
        price = price + k * i;
    }
    int lend = price - n;
    if (lend < 0)
    {
        lend = 0;
    }

    cout << lend;
}