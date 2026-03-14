class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        int temp, rem, flag;
        vector<int> result;
        for ( int i = left; i <= right; i++ ) {
            if ( isSelfDividing(i) ) result.push_back(i);
        }
        return result;
    }

    bool isSelfDividing( int n ) {
        int temp = n;
        while ( n > 0 ) {
            int rem = n % 10;
            n /= 10;
            if ( rem == 0 || temp % rem != 0 ) return false;
        }
        return true;
    }
};