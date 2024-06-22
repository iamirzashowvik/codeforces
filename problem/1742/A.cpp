// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a + b == c)
        {
            ans.push_back(1);
        }
        else if (a + c == b)
        {
            ans.push_back(1);
        }
        else if (b + c == a)
        {
            ans.push_back(1);
        }
        else
        {

            ans.push_back(0);
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (ans[i] == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}