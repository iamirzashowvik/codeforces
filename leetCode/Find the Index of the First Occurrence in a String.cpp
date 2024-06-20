// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/description/

#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{

    if (strstr(haystack.c_str(), needle.c_str()))
    {
        int nl = needle.size();
        for (int i = 0; i < haystack.size(); i++)
        {
            string mm = haystack.substr(i, nl);
            if (mm == needle)
            {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    int x = strStr("butsadsad", "sad");
    cout << "RES " << x;
}