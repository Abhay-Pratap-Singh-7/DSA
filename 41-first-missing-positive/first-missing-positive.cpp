class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> hash;
        for ( int i = 0; i < nums.size(); i++ ) {
            if ( nums[i] > 0 ) {
                hash.insert(nums[i]);
            }
        }
        int i = 1;
        for ( auto j : hash ) {
            if ( j != i ) return i;
            i++;
        }
        return hash.size() + 1;
    }
};