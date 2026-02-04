#include <iostream>
using namespace std;

int numberOfPairs(vector<int> &nums1, vector<int> &nums2, int k)
{
    int result = 0;
    for (int i = 0; i < nums1.size(); i++)
    {
        for (int j = 0; j < nums2.size(); j++)
        {
            if (nums1[i] % (nums2[j] * k) == 0)
            {
                result++;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> nums1 = {1, 2, 3, 4, 5};
    vector<int> nums2 = {1, 2, 3};
    int k = 2;
    cout << numberOfPairs(nums1, nums2, k);
    return 0;
}