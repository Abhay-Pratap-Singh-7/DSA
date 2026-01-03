#include <iostream>
using namespace std;

int repeatedNTimes(vector<int> &nums)
{
    int result = 0;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        result = nums[i];
        temp = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                temp++;
            }
        }
        if (temp == nums.size() / 2)
            return nums[i];
    }
    return -1;
}

int main()
{
    vector<int> v = {1, 2, 3, 3};
    cout << repeatedNTimes(v);
}