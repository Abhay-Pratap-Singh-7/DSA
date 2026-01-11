#include<iostream>
using namespace std;

vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> result;
        for ( int i = 0; i < words.size(); i++ ){
            for ( int j = 0; j < words[i].length(); j++ ){
                if ( x == words[i][j] ) {
                    result.insert(result.end(), i );
                    break;
                }
            }
        }
        return result;
    }

int main()
{
    vector<string> words = {"leet","code"}; char x = 'e';
    vector<int> result = findWordsContaining(words, x);
    for ( auto i : result ){
        cout << i << " ";
    }
    return 0;
}