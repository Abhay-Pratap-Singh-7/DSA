class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        string s = to_string(x);
        int sum = 0;
        for ( int i = 0; i < s.length(); i++ ) {
            sum += (int)s[i] - (int)'0';
        }
        if ( x % sum == 0 ) return sum;
        return -1;
    }
};