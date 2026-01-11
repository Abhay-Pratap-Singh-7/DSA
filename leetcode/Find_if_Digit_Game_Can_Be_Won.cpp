#include <iostream>
using namespace std;

bool canAliceWin(vector<int> &nums)
{
    int s = 0;
    int d = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 9)
            d += nums[i];
        else
            s += nums[i];
    }
    if (s == d)
        return false;
    return true;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 10};
    cout << canAliceWin(nums);
    return 0;
}