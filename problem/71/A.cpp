#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int n;
    string word;
    cin >> n;
    list<string> words;
    for (int i = 0; i < n; i++)
    {

        cin >> word;
        words.push_back(word);
    }

    for (string word : words)
    {
        if (word.size() <= 10)
        {
            cout << word << endl;
        }

        else
        {
            int len = word.size();
            cout << word.substr(0, 1) << len - 2 << word.substr(len - 1, 1) << endl;
        }
    }
}