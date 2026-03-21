class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> result;
        bool hashA[51] = {false};
        bool hashB[51] = {false};
        int temp = 0;
        for ( int i = 0; i < A.size(); i++ ) {
            temp = 0;
            hashA[A[i]] = true;
            hashB[B[i]] = true;
            for ( int i = 1; i < 51; i++ ) {
                if ( hashA[i] && hashB[i] ) temp++;
            }
            result.push_back(temp);
        }
        return result;
    }
};