#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    string b;
    cin >> a >> b;

    string s1 = a;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    string s2 = b;
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 == s2)
    {
        int x = 0;
        cout << x;
    }
    else if (s1 > s2)
    {
        int x = 1;
        cout << x;
    }
    else
    {
        int x = -1;
        cout << x;
    }
}