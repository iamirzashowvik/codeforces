
#include <iostream>
#include <set>
using namespace std;

int main()
{
    string x;
    cin >> x;
    set<char> uniqueChars(x.begin(), x.end());

    if (uniqueChars.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }
}