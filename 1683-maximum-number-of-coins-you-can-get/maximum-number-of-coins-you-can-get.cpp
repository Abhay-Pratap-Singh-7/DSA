class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int right = piles.size() - 1;
        sort(piles.begin(), piles.end());
        int result = 0;
        for ( int i = 0; i < piles.size()/3; i++ ) {
            right--;
            result += piles[right];
            right--;
        }
        return result;
    }
};