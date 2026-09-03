class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> hash(nums.size()+1, 0);
        for ( int i = 0; i < nums.size() ; i++ ) {
            hash[nums[i]]++;
        }
        int rows = INT_MIN;
        for ( int i = 0; i < hash.size(); i++ ) {
            rows = max(rows, hash[i]);
        }
        vector<vector<int>> result(rows);
        for ( int i = 0; i < rows; i++ ) {
            for ( int j = 0; j < hash.size(); j++ ) {
                if ( hash[j] > 0 ) {
                    result[i].push_back(j);
                    hash[j]--;
                }
            }
        }
        return result;
    }
};