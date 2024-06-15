
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <cctype>

using namespace std;

void checkWord(string x)
{
    int low = 0;
    int high = 0;
    for (char y : x)
    {
        if (isupper(y))
        {
            high++;
        }
        else
        {
            low++;
        }
    }
    if (high == low)
    {
        string s1 = x;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        cout << s1;
    }
    else if (low > high)
    {
        string s1 = x;
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        cout << s1;
    }
    else
    {
        string s1 = x;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        cout << s1;
    }
}

int main()
{
    string x;
    cin >> x;
    checkWord(x);
}