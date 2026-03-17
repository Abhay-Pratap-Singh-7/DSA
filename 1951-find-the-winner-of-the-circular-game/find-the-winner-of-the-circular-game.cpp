class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> hash;
        for ( int i = 0; i < n; i++ ) {
            hash.push_back(i+1);
        }
        int i = 0;
        while ( hash.size() != 1 ) {
            i = ( i + k -1) % hash.size();
            hash.erase(hash.begin() + i);
        }
        return hash[0];
    }
};