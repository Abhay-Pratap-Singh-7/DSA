class Solution {
public:
    int minOperations(string s) {
        int count1 = 0;
        int count2 = 0;
        char a;
        char b;
        for ( int i = 0; i < s.length(); i++ ) {
            char a = ( i % 2 == 0 ) ? '1' : '0';
            char b = ( i % 2 == 0 ) ? '0' : '1';
            
            if ( a != s[i] ) count1++;
            if ( b != s[i] ) count2++;
        }
        return min( count1, count2 );
    }
};