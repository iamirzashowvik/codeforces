#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int numbers[5][5];
    int row;
    int column;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            cin >> numbers[i][j];
            if (numbers[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    int count = 0;
    count = abs(2 - row) + abs(2 - column);
    cout << count;
}