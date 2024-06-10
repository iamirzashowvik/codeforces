#include <iostream>
#include <list>
using namespace std;

int valueOfIndex(list<int> numbers, int index)
{
    list<int>::iterator it = numbers.begin();
    advance(it, index);
    int rn = *it;
    return rn;
}

int main()
{
    int n;
    int k;
    int num;
    list<int> numbers;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        numbers.push_back(num);
    }

    int min = valueOfIndex(numbers, k - 1);

    num = 0;
    for (int i = 0; i < n; i++)
    {
        int x = valueOfIndex(numbers, i);
        if (x >= min && x > 0)
        {
            num++;
        }
    }
    cout << num;
}
