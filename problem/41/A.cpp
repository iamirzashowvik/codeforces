
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    string y;
    cin >> str >> y;
    reverse(str.begin(), str.end());
    if (str == y)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}