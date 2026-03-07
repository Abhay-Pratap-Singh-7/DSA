class Solution {
public:

    // ye kaam to kar raha hai lekin time complexity chud ja rahi hai !!

    // int minFlips(string s) {
    //     int n = s.length();
    //     s += s;
    //     int minimum = INT_MAX;
    //     for ( int i = 0; i < n; i++ ) {
    //         minimum = min(minimum, comparison(s.substr(i, n)));
    //     }
    //     return minimum;
    // }

    // int comparison(string s) {
    //     int count1 = 0;
    //     int count2 = 0;
    //     char a;
    //     char b;
    //     for ( int i = 0; i < s.length(); i++ ) {
    //         char a = ( i % 2 == 0 ) ? '1' : '0';
    //         char b = ( i % 2 == 0 ) ? '0' : '1';

    //         if ( s[i] != a ) count1++;
    //         if ( s[i] != b ) count2++;
    //     }
    //     return min(count1, count2);
    // }

    int minFlips(string s) {
        int n = s.length();
        string doubled = s + s;

        int diff1 = 0;
        int diff2 = 0;
        int minimum = INT_MAX;

        for (int i = 0; i < 2 * n; i++) {
            if (doubled[i] != (i % 2 == 0 ? '0' : '1'))
                diff1++;
            if (doubled[i] != (i % 2 == 0 ? '1' : '0'))
                diff2++;

            if (i >= n) {
                int left = i - n;
                if (doubled[left] != (left % 2 == 0 ? '0' : '1'))
                    diff1--;
                if (doubled[left] != (left % 2 == 0 ? '1' : '0'))
                    diff2--;
            }

            if (i >= n - 1) {
                minimum = min({minimum, diff1, diff2});
            }
        }

        return minimum;
    }
};