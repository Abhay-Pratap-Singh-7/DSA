class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int result = 0;
        for ( auto i : words ) {
            int k = 0;
            int flag = 0;
            while ( k < pref.length() ) {
                if ( i[k] != pref[k] ) {flag = 1; break;};
                k++;
            }
            if ( flag == 0 ) result++;
        }
        return result;
    }
};