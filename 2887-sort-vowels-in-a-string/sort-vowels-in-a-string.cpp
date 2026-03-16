class Solution {
public:
    string sortVowels(string s) {
        vector<int> vowel;
        int ascii;
        for ( int i = 0; i < s.length(); i++ ) {
            ascii = (int)s[i];
            if ( ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117 ) {
                vowel.push_back(ascii);
            }
        }
        sort(vowel.begin(), vowel.end());
        int j = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            ascii = (int)s[i];
            if ( ascii == 65 || ascii == 69 || ascii == 73 || ascii == 79 || ascii == 85 || ascii == 97 || ascii == 101 || ascii == 105 || ascii == 111 || ascii == 117 ) {
                s[i] = vowel[j];
                j++;
            }
        }
        return s;
    }
};