#include<iostream>
using namespace std;

int minimumDifference(vector<int>& nums, int k) {
        if ( nums.size() == 1 ) return 0;
        sort(nums.begin(), nums.end());
        int result = INT_MAX;
        for ( int i = 0; i < nums.size()-k+1; i++ ) {
            if ( nums[i+k-1] - nums[i] < result ) result = nums[i+k-1] - nums[i];
        }
        return result;
    }

int main()
{
    vector<int> nums = {9,4,1,7}; int k = 2;
    cout << minimumDifference(nums, k);
    return 0;
}