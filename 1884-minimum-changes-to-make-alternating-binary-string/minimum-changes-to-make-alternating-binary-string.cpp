class Solution {
public:
    int minOperations(string s) {
        int stepsAtEven = 0;
        int stepsAtOdd = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            if ( ( i % 2 == 0 && s[i] != '1' ) || ( i % 2 != 0 && s[i] != '0' ) ) stepsAtEven++;
            else if ( ( i % 2 != 0 && s[i] != '1' ) || ( i % 2 == 0 && s[i] != '0' ) ) stepsAtOdd++;
        }
        if ( stepsAtEven >= stepsAtOdd ) return stepsAtOdd;
        else return stepsAtEven;
    }
};