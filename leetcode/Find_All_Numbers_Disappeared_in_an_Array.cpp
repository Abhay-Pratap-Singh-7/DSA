#include<iostream>
#include<set>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> numSet(nums.begin(), nums.end());
        vector<int> result;
        
        for (int i = 1; i <= nums.size(); i++) {
            if (numSet.find(i) == numSet.end()) {
                result.push_back(i);
            }
        }
        
        return result;        
    }

int main()
{
    vector<int> nums = {4,3,2,7,8,2,3,1};
    vector<int> result = findDisappearedNumbers(nums);
    for ( auto i : result ) {
        cout << i;
    }
    return 0;
}