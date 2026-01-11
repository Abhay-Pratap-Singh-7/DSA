#include <iostream>
using namespace std;

bool checkIfPangram(string sentence) {
        int arr[26] = {0};
        for ( int i = 0; i < sentence.length(); i++ ){
            arr[(int)sentence[i]-97]++;
        }
        for ( int i = 0; i < 26; i++ ){
            if ( arr[i] < 1 ) return false;
        }
        return true;
    }

int main(){
    string s = "thequickbrownfoxjumpsoverthelazydog";
    cout << checkIfPangram(s);
}