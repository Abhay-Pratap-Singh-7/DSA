#include <iostream>
using namespace std;

int absDifference(vector<int> &nums, int k)
{
    if (nums.size() == k)
        return 0;
    sort(nums.begin(), nums.end());
    int result = 0;
    for (int i = 0; i < k; i++)
    {
        result += nums[nums.size() - i - 1] - nums[i];
    }
    return abs(result);
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;
    cout << absDifference(nums, k);
    return 0;
}