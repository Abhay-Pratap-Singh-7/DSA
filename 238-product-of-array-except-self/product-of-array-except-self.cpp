class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> preProd(n, 1);
        vector<int> postProd(n, 1);
        vector<int> result(n); 

        preProd[0] = nums[0];
        for (int i = 1; i < n; i++) {
            preProd[i] = preProd[i-1] * nums[i];
        }

        postProd[n-1] = nums[n-1];
        for (int i = n-2; i >= 0; i--) {
            postProd[i] = postProd[i+1] * nums[i];
        }

        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[i] = postProd[1];
            } else if (i == n - 1) {
                result[i] = preProd[n-2];
            } else {
                result[i] = preProd[i-1] * postProd[i+1];
            }
        }
        
        return result;
    }
};