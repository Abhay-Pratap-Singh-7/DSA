class Solution {
public:
    bool checkOnesSegment(string s) {
        int i = 0;
        while ( s[i] != '0' && i < s.length() ) i++;
        if ( i == s.length() - 1 ) return true;
        for ( i; i < s.length(); i++ ) {
            if ( s[i] == '1' ) return false;
        }
        return true;
    }
};