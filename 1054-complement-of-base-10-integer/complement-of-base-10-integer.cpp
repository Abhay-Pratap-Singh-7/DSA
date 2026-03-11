class Solution {
public:
    int bitwiseComplement(int n) {
        int comp = 0;
        int count = 0;
        if(n == 0) return 1;
        while( n != 0 ){
            int bit = n & 1;
            if( bit == 1) bit = 0;
            else bit = 1;
            comp += pow(2,count)*bit;
            count++;
            n = n >> 1;
        }
        return comp;
    }
};