#include <iostream>
using namespace std;

int minimumCost(vector<int> &nums)
{
    sort(nums.begin() + 1, nums.end());
    return nums[0] + nums[1] + nums[2];
}

int main()
{
    vector<int> nums = {1, 2, 3, 12};
    cout << minimumCost(nums);
    return 0;
}