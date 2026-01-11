#include<iostream>
using namespace std;

string firstPalindrome(vector<string>& words) {
        for ( int i = 0; i < words.size(); i++ ){
            int flag = 0;
            for ( int j = 0; j < words[i].length() / 2; j++){
                if ( words[i][j] != words[i][words[i].length()-1-j] ){
                    flag = 1;
                    break;
                }
            }
            if ( flag == 0 ) return words[i];
        }
        return "\0";
    }

int main()
{
    vector<string> words = {"abc","car","ada","racecar","cool"};
    cout << firstPalindrome(words);
    return 0;
}