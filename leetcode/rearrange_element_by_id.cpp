#include <iostream>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums)
{
    int result[nums.size()];
    int pos = 0;
    int neg = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] > 0)
        {
            result[pos] = nums[i];
            pos = pos + 2;
        }
        else
        {
            result[neg] = nums[i];
            neg = neg + 2;
        }
    }
    return vector<int>(result, result + nums.size());
}

int main()
{
    vector<int> nums = {4, 2, -3, -1, 6, -5};
    vector<int> result = rearrangeArray(nums);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}