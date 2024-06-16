#include <iostream>
using namespace std;

int main()
{
    int n;
    int h;
    cin >> n >> h;

    int wd = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        int w = x / h;
        int m = x % h;

        if (x <= h)
        {
            wd++;
        }
        else if (m == 0)
        {
            wd = wd + w;
        }
        else
        {
            wd = wd + w + 1;
        }
    }
    cout << wd;
}