#include <iostream>

#include <bits/stdc++.h>

using namespace std;
int main()
{
    string a;
    string b;
    cin >> a >> b;

    string s1 = a;

    // using transform() function and ::tolower in STL
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);

    string s2 = b;

    // using transform() function and ::tolower in STL
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 == s2)
    {
        int x = 0;
        cout << x;
        return 1;
    }

    int sum1 = 0;
    for (char c : s1)
        sum1 += c;

    int sum2 = 0;
    for (char c : s1)
        sum2 += c;
    if (sum1 > sum2)
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