class Solution {
public:
    string finalString(string s) {
        string result = "";
        for ( int i = 0; i < s.length(); i++ ) {
            if ( s[i] == 'i' ) result = reverseString(result);
            else result += s[i];
        }
        return result;
    }

    string reverseString(string s) {
        string reversed = "";
        for ( int i  = s.length() - 1; i >= 0; i-- ) {
            reversed += s[i];
        }
        return reversed;
    }
};