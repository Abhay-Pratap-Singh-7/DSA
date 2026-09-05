class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> suffix(nums.size(), nums[nums.size() - 1]);
        int minc = suffix[nums.size() - 1];
        for (int i = nums.size() - 1; i >= 0; i--) {
            minc = min(minc, nums[i]);
            suffix[i] = minc;
        }
        int prefix = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            prefix = max(prefix, nums[i]);
            if ((prefix - suffix[i]) <= k) {
                return i;
            }
        }
        return -1;
    }
};