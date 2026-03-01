class Solution {
public:
    int minPartitions(string n) {
        int max = n[0] - '0';
        for ( int i = 1; i < n.length(); i++ ) {
            if ( ( n[i] - '0' ) > max ) max = n[i] - '0';
        }
        return max;
    }
};