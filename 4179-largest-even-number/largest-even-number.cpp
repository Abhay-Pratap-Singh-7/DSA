class Solution {
public:
    string largestEven(string s) {
        int temp;
        for ( int i = s.length() - 1; i >= 0; i-- ) {
            if ( ( s[i] - '0' ) % 2  == 0 ) {
                temp = i;
                break;
            }
        }
        return s.substr(0, temp + 1);
    }
};