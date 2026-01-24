#include <iostream>
using namespace std;

int uniqueMorseRepresentations(vector<string> &words)
{
    if (words.size() == 1)
        return 1;
    vector<string> temp;
    vector<string> morse = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    for (int i = 0; i < words.size(); i++)
    {
        string temp2;
        for (int j = 0; j < words[i].length(); j++)
        {
            temp2 += morse[(int)words[i][j] - 97];
        }
        temp.push_back(temp2);
    }
    for (auto i : temp)
        cout << i << endl;
    cout << endl;
    unordered_map<string, int> temp3;
    for (auto &i : temp)
    {
        temp3[i]++;
    }
    return temp3.size();
}

int main()
{
    vector<string> words = {"zocd", "gjkl", "hzqk", "hzgq", "gjkl"};
    cout << uniqueMorseRepresentations(words);
    return 0;
}