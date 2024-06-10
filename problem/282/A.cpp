#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    string word;
    int n;
    cin >> n;
    if (n < 1 || n > 150)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> word;
        if (word == "++X" || word == "X++")
        {
            x = x + 1;
        }
        else
        {
            x = x - 1;
        }
    }
    cout << x;
}