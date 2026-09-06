class Solution {
public:

    // void rotateNums(vector<int>& nums) {
    //     int temp = nums[0];
    //     int n = nums.size();
    //     for ( int i = 1; i < n; i++ ) {
    //         nums[i-1] = nums[i];
    //     } 
    //     nums[n-1] = temp;
    // }

    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        long long prefix = 0;
        long long suffix = 0;
        int good = 0;


        // for ( int i = 0; i < n; i++ ) {
        //     prefix = 0;
        //     suffix = 0;
        //     for ( int j = 0; j < n / 2; j++ ) {
        //         prefix += nums[j];
        //         suffix += nums[n / 2 + j];
        //     }
        //     good += prefix > suffix ? 1 : 0;
        //     rotateNums(nums);
        // }

        long long sum = 0;
        for ( int i = 0; i < n; i++ ) {
            sum += nums[i];
        }
        for ( int i = 0; i < n / 2; i++ ) {
            prefix += nums[i];
        }
        for ( int i = 0; i < n; i++ ) {
            suffix = sum - prefix;
            if ( prefix > suffix ) good++;

            prefix -= nums[i];
            prefix += nums[ ( i + ( n / 2 ) ) % n ];
        }

        return good;
    }
};