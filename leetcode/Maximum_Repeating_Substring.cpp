#include <iostream>
using namespace std;

int maxRepeating(string sequence, string word)
{
    int result = 0;
    string temp = word;
    while ( sequence.find(temp) != string::npos ) {
        result++;
        temp += word;
    }
    return result;
}

int main()
{
    string sequence = "aaabaaaabaaabaaaabaaaabaaaabaaaaba";
    string word = "aaaba";
    cout << maxRepeating(sequence, word);
    return 0;
}