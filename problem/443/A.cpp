#include <iostream>
#include <string>
#include <set>
#include <algorithm> // For std::remove

using namespace std;

int main() {
    string input;
    set<char> charSet;

    // Take input as a complete string
    getline(cin, input);

    // Remove the curly braces and spaces from the string
    input.erase(remove(input.begin(), input.end(), '{'), input.end());
    input.erase(remove(input.begin(), input.end(), '}'), input.end());
    input.erase(remove(input.begin(), input.end(), ' '), input.end());

    // Split the string by commas and add characters to the set
    for (char c : input) {
        if (c != ',') {
            charSet.insert(c);
        }
    }

    // Output the set
   cout<<charSet.size();

    return 0;
}
