#include <iostream>
using namespace std;

int lastDigits(int num)
{
    int lastDigit = num % 10;
    if (lastDigit < 0)
    {
        lastDigit = -lastDigit;
    }
    if (lastDigit == 0)
    {
        num = num / 10;
    }
    else
    {
        num = num - 1;
    }
    return num;
}

int main()
{
    int num;
    int k;
    cin >> num >> k;
    for (int i = 0; i < k; i++)
    {
        num = lastDigits(num);
    }
    cout << num;
}
