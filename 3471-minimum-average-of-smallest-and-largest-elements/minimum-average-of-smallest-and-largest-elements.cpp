class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double result = 1e18;
        sort(nums.begin(), nums.end());
        for ( int i = 0; i < nums.size()/2; i++ ) {
            double avg = ( nums[i] + nums[nums.size()-1-i] ) / 2.0;
            result = min(result, avg);
        }
        
        return result;
    }
};