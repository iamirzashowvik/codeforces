
#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string x;
    cin >> x;
    x[0] = toupper(x[0]);
    cout << x;
}