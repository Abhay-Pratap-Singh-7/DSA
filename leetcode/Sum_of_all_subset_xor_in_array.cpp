#include <iostream>
using namespace std;

int subsetXORSum(vector<int> &nums)
{
    int n = nums.size();
    int subsetSize = 1 << n;
    int result = 0;
    int temp;
    for (int i = 0; i < subsetSize; i++)
    {
        temp = 0;
        for (int j = 0; j < n; j++)
        {
            if ((i & (1 << j)) != 0)
            {
                temp ^= nums[j];
            }
        }
        result += temp;
    }
    return result;
}

int main()
{
    vector<int> nums = {5, 1, 6};
    cout << subsetXORSum(nums);
    return 0;
}