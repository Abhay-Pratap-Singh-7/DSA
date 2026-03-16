class Solution {
public:
    string stringHash(string s, int k) {
        string result = "";
        int n = s.length();
        int i = 0;
        int sum;
        for ( int temp = 0; temp < n/k; temp++ ) {
            sum = 0;
            for ( int j = 0; j < k; j++ ) {
                sum += s[i] - 'a' ;
                i++;
            }
            result += (char)((sum%26)+97);
        }
        return result;
    }
};