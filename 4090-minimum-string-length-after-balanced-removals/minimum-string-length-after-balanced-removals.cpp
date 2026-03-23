class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int result = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            if ( s[i] == 'a' ) result++;
            else result--;
        }
        return abs(result);
    }
};