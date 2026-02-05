#include <iostream>
using namespace std;

vector<int> constructTransformedArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> result(n, 0);
    for (int i = 0; i < n; i++)
    {
        int newIndex = ((i + nums[i]) % n + n) % n;
        result[i] = nums[newIndex];
    }
    return result;
}

int main()
{
    vector<int> nums = {0, 2, 1, 5, 3};
    vector<int> transformed = constructTransformedArray(nums);
    for (int num : transformed)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}