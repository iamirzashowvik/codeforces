#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> splitAndConvertToInt(string str, char del)
{
    vector<int> numbers;
    string temp;

    for (int i = 0; i < str.size(); i++)
    {

        if (str[i] != del)
        {
            string y = to_string(str[i]);
            int x = stoi(y);
            numbers.push_back(x - 48);
        }
    }

    return numbers;
}

int main()
{
    string s;
    cin >> s;
    char del = '+';
    vector<int> arr = splitAndConvertToInt(s, del);

    // Sort the vector
    sort(arr.begin(), arr.end());

    // Print the sorted vector
    for (size_t i = 0; i < arr.size(); i++)
    {
        if (i > 0)
        {
            cout << "+";
        }
        cout << arr[i];
    }
}
