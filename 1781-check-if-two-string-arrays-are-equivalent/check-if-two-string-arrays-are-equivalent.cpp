class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a = "";
        string b = "";
        int i = 0;
        int j = 0;
        while ( i < word1.size() && j < word2.size() ) {
            a += word1[i];
            b += word2[j];
            i++;j++;
        }
        while ( i < word1.size() ) {
            a += word1[i];
            i++;
        }
        while ( j < word2.size() ) {
            b += word2[j];
            j++;
        }
        if ( a == b ) return true;
        return false;
    }
};