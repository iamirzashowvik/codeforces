#include <iostream>
#include <list>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;

    string words[n][2];

    for (int i = 0; i < n; i++)
    {
        string x;
        string y;
        cin >> x >> y;
        words[i][0] = x;
        words[i][1] = y;
    }
    for (int i = 0; i < n; i++)
    {
        string w1 = words[i][1].substr(0, 1) + words[i][0].substr(1, words[i][0].size());
        string w2 = words[i][0].substr(0, 1) + words[i][1].substr(1, words[i][1].size());
        cout << w1 << " " << w2 << endl;
    }
}