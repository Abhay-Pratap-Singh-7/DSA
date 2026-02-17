class Solution {
public:
    int reverseBits(int n) {
        int sum = 0;
        for(int i = 0; i < 32; i++){
            int rem = n % 2;
            sum += rem * pow(2,(31-i));
            n /= 2;
        }
        return sum;
    }
};