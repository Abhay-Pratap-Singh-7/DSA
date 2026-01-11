#include<iostream>
using namespace std;

int arraySign(vector<int>& nums) {
        double sum = 1;
        for ( int i = 0; i < nums.size(); i++ ){
            sum *= nums[i];
        }
        if ( sum > 0 ) return 1;
        else if ( sum < 0 ) return -1;
        else return 0;
    }

int main()
{
    vector<int> nums = {-1,-2,-3,-4,3,2,1};
    cout << arraySign(nums);
    return 0;
}