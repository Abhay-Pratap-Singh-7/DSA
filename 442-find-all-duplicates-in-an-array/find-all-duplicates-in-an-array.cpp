class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> hash;
        for ( int i = 0; i < nums.size(); i++ ) {
            hash[nums[i]]++;
        }
        vector<int> result;
        for ( auto [k,v] : hash ) {
            if ( v > 1 ) result.push_back(k);
        }
        return result;
    }
};