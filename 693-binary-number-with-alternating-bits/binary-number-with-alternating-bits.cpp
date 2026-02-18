class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev = n & 1;
        n >>= 1;
        int current = 0;
        while ( n > 0 ) {
            current = n & 1;
            n >>= 1;
            if ( current == prev ) return false;
            prev = current;
        }
        return true;
    }
};