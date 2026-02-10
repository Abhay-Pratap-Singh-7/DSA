class Solution {
public:
    int findComplement(int num) {
        vector<int> hash;
        int result = 0;
        while ( num > 0 ) {
            hash.push_back(num%2);
            num /= 2;
        }
        for ( int i = 0; i < hash.size(); i++ ) {
            if ( hash[i] == 0 ) {
                result += pow(2, i);
            }
        }
        return result;
    }
};