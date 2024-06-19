// https://leetcode.com/problems/valid-parentheses/description/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int ch(char m, char n)
{
    if (m == '(' && n == ')')
    {
        return 1;
    }
    else if (m == '{' && n == '}')
    {
        return 1;
    }
    else if (m == '[' && n == ']')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string st(string s)
{
    for (int i = 0; i <= s.size(); i++)
    {
        cout << i << ": " << s << endl;
        if (ch(s[i], s[i + 1]))
        {
            s.erase(i, 2);
        }
    }

    return s;
}
bool isValid(string s)
{

    s = st(s);
    if (s.size() == 0)
    {
        return true;
    }

    cout << s << endl;
    while (s.size() > 0)
    {
        s = st(s);
        if (s.size() == 0)
        {
            return true;
        }
        cout << endl
             << s << " while";
        char a0 = s[0];
        char a1 = s[1];
        char al = s[s.size() - 1];
        cout << endl
             << a0 << a1 << al;
        if (ch(a0, a1))
        {

            s.erase(0, 2);
        }
        else if (ch(a0, al))
        {
            s.erase(0, 1);
            s.erase(s.size() - 1, 1);
        }
        else
        {
            return false;
        }
    }
    if (s == "")
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool x = isValid("()[]{}");
    cout << x;
}