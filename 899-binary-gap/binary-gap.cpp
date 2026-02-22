class Solution {
public:
    int binaryGap(int n) {
        if ( __builtin_popcount(n) <= 1 ) return 0;
        int result = 1;
        int temp = 1;
        while ( ( n & 1 ) != 1 && n > 0 ) n >>= 1;
        while ( n > 0 ) {
            if ( ( n & 1 ) == 1 ) temp = 1;
            else {
                temp++;
                result = max(temp, result);
            }
            n >>= 1;
        }
        return result;
    }
};