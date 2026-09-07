class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        int i = 0;
        while ( n > i ) {
            if ( arr[i] == 0 ) {
                arr.insert(arr.begin() + i, 0);
                i++;
            }
            i++;
        }
        arr.resize(n);
    }
};