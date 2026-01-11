#include <iostream>
using namespace std;

int mostWordsFound(vector<string>& sentences) {
        int max = 1;
        for ( int i = 0; i < sentences.size(); i++ ){
            int temp = 1;
            for ( int j = 0; j < sentences[i].length(); j++ ){
                if ( sentences[i][j] == ' ' ) temp++;
            }
            if ( temp > max ) max = temp;
        }
        return max;
    }

int main(){
    vector<string> sentences = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << mostWordsFound(sentences);
}