class Solution {
public:
    bool hasSameDigits(string s) {
        int temp = s.length() - 1;
        for ( int i = 0; i < s.length() - 2; i++ ) {
            for ( int i = 0; i < temp; i++ ) {
                s[i] = ( ( s[i] - '0' ) + ( s[i+1] - '0' ) ) % 10;
            }
            temp--;
        }
        return s[0] == s[1];
    }
};