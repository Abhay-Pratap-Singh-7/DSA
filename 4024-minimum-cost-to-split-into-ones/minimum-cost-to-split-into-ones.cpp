class Solution {
public:
    int minCost(int n) {
        // vector<int> dp;
        // dp.push_back(n);
        // int i = 0;
        // int temp;
        // int result = 0;
        // while ( i < dp.size() ) {
        //     if ( dp[i] == 1 ) {
        //         i++;
        //         result++;
        //         continue;
        //     }
        //     temp = dp[i] / 2;
        //     dp.push_back(temp);
        //     dp.push_back(dp[i]-temp);
        //     result += temp * ( dp[i] - temp ); 
        //     i++;
        // }
        return n * ( n - 1 ) / 2;
    }
};