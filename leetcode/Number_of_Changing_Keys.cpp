#include<iostream>
using namespace std;

int countKeyChanges(string s) {
        int result = 0;
        for ( int i = 1; i < s.length(); i++ ){
            if ( s[i-1] == s[i] || (int)s[i-1] == (int)s[i] + 32 || (int)s[i-1] == (int)s[i] - 32 ){
                continue;
            }
            else result++;
        }
        return result;
    }

int main()
{
    string s = "aAbBcCCCdddDadb";
    cout << countKeyChanges(s);
    return 0;
}