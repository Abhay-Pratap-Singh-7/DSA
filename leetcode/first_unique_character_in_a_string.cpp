#include <iostream>
using namespace std;

int firstUniqChar(string s) {
        if ( s.length() == 1 ) return 0;
        for ( int i = 0; i < s.length(); i++ ){
            int flag = 0;
            for ( int j = 0; j < s.length(); j++ ){
                if ( s[i] == s[j] && i != j ) {
                    flag++;
                    break;
                }
            }
            if ( flag == 0 ) return i;
        }
        return -1;
    }

int main(){
    string s = "abhay";
    cout << firstUniqChar(s);
}