class Solution {
public:
    int countBinarySubstrings(string s) {
        int result = 0;
        int i = 0;
        while ( i < s.length() ) {
            int num0 = 0;
            int num1 = 0;
            if ( s[i] == '0' ) {
                while ( s[i] != '1' && i < s.length() ) {
                    i++;
                    num0++;
                }
                int j = i;
                while ( s[j] != '0' && j < s.length() ) {
                    j++;
                    num1++;
                }
                result += min(num0, num1);
            }
            else {
                while ( s[i] != '0' && i < s.length() ) {
                    i++;
                    num1++;
                }
                int j = i;
                while ( s[j] != '1' && j < s.length() ) {
                    j++;
                    num0++;
                }
                result += min(num0, num1);
            }
        }
        return result;
    }
};