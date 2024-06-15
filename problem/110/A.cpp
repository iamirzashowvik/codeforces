#include <iostream>
#include <string>

using namespace std;

int main()
{
    string val;
    cin >> val;

    bool fr = false;
    bool sn = false;
    bool ly = true;
    int c = 0;

    for (char x : val)
    {
        if (x == '4')
        {
            fr = true;
            c++;
        }
        else if (x == '7')
        {
            sn = true;
            c++;
        }
        else
        {
            ly = false;
        }
    }

    // if (ly && fr && sn) {
    //     cout << "YES";
    // } else
    if (c == 4 || c == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
