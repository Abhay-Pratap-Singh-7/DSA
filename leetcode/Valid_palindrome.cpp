#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    vector<char> t;
    for ( int i = 0; i < s.size(); i++ ){
        if ( (int)s[i] >= 65 && (int)s[i] <= 90 ) t.insert(t.end(), (char)( (int)s[i] + 32 ));
        else if ( (int)s[i] >= 97 && (int)s[i] <= 122 ) t.insert(t.end(), s[i]);
        else if ( (int)s[i] >= 48 && (int)s[i] <= 57 ) t.insert(t.end(), s[i]);
        else continue;
    }
    for ( auto i : t ) {
        cout << i << " ";
    }
    for ( int i = 0; i < t.size() / 2; i++ ){
        if ( t[i] != t[t.size() - i - 1] ) return false;
    }
    return true;
}

int main(){
    string s = "ab_a";
    cout << isPalindrome(s);
}