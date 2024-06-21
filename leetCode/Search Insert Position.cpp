// https://leetcode.com/problems/search-insert-position/description/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sI(vector<int> nums, int target)
{
    int cnt = count(nums.begin(), nums.end(), target);

    int av = 0;

    if (cnt > 0)
    {
        av = 1;
    }
    int mr = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        //   cout << nums[i]<<endl;
        if (av == 1)
        {
            if (nums[i] == target)
            {
                mr = i;
                break;
            }
        }
        else
        {
            if (i + 1 < nums.size() && nums[i] < target &&
                nums[i + 1] > target)
            {
                mr = i + 1;
                break;
            }

            if (i + 1 == nums.size() && nums[i] < target)
            {
                mr = i + 1;
                break;
            }
        }
    }
    return mr;
}

int main()
{
    cout << sI({1, 3, 5, 6}, 0);
}