// https://leetcode.com/problems/length-of-last-word/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int rD(string str)
{
    vector<int> ans;
    // Used to split string around spaces.
    istringstream ss(str);

    string word; // for storing each word

    // Traverse through all words
    // while loop till we get
    // strings to store in string word
    while (ss >> word)
    {
        // print the read word
        // cout << word << "\n";
        ans.push_back(word.size());
    }
    return ans[ans.size() - 1];
}

int main()
{

    cout << rD("Hello World");
}