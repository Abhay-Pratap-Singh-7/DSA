#include <iostream>
using namespace std;

void isPalindrome(string s, int count){
    if( count >= (s.size())/2){
        cout << s << " is a Palindrome" << endl;
        return;
    }
    else{
        if( s[count] != s[s.size()-count-1]){
            cout << s << " not a Palindrome" << endl;
            return;
        }
        else isPalindrome(s, count+1);
    }
}

int main(){

    string s;
    cout << "Enter String: ";
    getline(cin, s);

    int count = 0;
    isPalindrome(s, count);

    main();
}