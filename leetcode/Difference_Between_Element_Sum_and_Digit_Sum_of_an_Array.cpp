#include <iostream>
using namespace std;

int differenceOfSum(vector<int> &nums)
{
    int sum = 0;
    int sumDigits = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        int temp = nums[i];
        while (temp > 0)
        {
            sumDigits += temp % 10;
            temp /= 10;
        }
    }
    if (sum > sumDigits)
        return sum - sumDigits;
    else
        return sumDigits - sum;
}

int main()
{
    vector<int> nums = {1,15,6,3};
    cout << differenceOfSum(nums);
    return 0;
}
