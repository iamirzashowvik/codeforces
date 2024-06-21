// Online C++ compiler to run C++ program online
#include <iostream>
#include <map>

using namespace std;

int main()
{
    int x;
    cin >> x;
    map<string, int> shapes = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};

    int sum = 0;
    for (int i = 0; i < x; i++)
    {
        string m;
        cin >> m;
        sum = sum + shapes[m];
    }
    cout << sum;
}