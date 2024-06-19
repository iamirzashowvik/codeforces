// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string check(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 97; i <= 122; i++)
    {
        char x = char(i);
        string r(1, x);
        if (strstr(s.c_str(), r.c_str()))
        {
        }
        else
        {
            return "NO";
        }
    }
    return "YES";
}

int main()
{
    int x;
    string r;
    cin >> x;
    cin >> r;

    cout << check(r);
}