#include <iostream>
using namespace std;

int findNumbers(vector<int> &nums)
{
    int temp = 0;
    int noOfDigit = 0;
    int result = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        noOfDigit = 0;
        while (nums[i] > 0)
        {
            noOfDigit++;
            nums[i] /= 10;
        }
        if (noOfDigit % 2 == 0)
            result++;
    }
    return result;
}

int main()
{
    vector<int> nums = {12, 345, 2, 6, 7896};
    cout << findNumbers(nums);
    return 0;
}