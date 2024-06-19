// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(const string lhs, const string rhs)
{
    return lhs.length() < rhs.length();
}
int getIndex(vector<int> v, int K)
{
    cout << "vec" << endl;
    for (int x : v)
    {
        cout << x << endl;
    }
    cout << "vec" << endl;
    if (v.size() == 1 && v[0] == 1)
    {
        return 1;
    }

    auto it = find(v.begin(), v.end(), K);

    // If element was found
    if (it != v.end())
    {

        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    else
    {
        // If the element is not
        // present in the vector
        return -1;
    }
}

string longestCommonPrefix(vector<string> v)
{

    if (v.size() == 1)
    {
        return v[0];
    }
    sort(v.begin(), v.end(), cmp);
    string s1 = v[0];

    vector<int> ans;
    int ress = 0;
    for (int i = 0; i < s1.size(); i++)
    {
        ans.push_back(1);
        char r = s1[i];
        int matched = 1;
        for (string x : v)
        {
            if (r == x[i])
            {
                ans[i] = 1;
                ress++;
            }
            else
            {

                ans[i] = -1;
                break;
            }
        }
    }

    int m = getIndex(ans, -1);
    // cout << "index:" << m << endl;
    if (m == -1)
    {
        return s1.substr(0, ans.size());
    }
    else if (m == 0)
    {
        return "";
    }
    else
    {
        return s1.substr(0, m);
    }
}
int main()
{
    string x = longestCommonPrefix({
        // "flower","flow","flight"
        // "ab", "c"
        // "flower","flower","flower","flower"
    });
    cout << "ans:" << x;
}