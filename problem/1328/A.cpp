#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int x;
    cin >> x;

    vector<int> results(x);

    for (int i = 0; i < x; ++i)
    {
        int m, n;
        cin >> m >> n;

        int remainder = m % n;
        if (remainder == 0)
        {
            results[i] = 0;
        }
        else
        {
            results[i] = n - remainder;
        }
    }

    for (int i = 0; i < x; ++i)
    {
        cout << results[i] << endl;
    }

    return 0;
}
