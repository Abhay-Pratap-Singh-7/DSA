#include <iostream>
using namespace std;

int lengthOfLastWord(string s)
{
    int result = 0;
    int ptr = s.length() - 1;
    while (s[ptr] == ' ')
        ptr--;
    for (ptr; ptr >= 0; ptr--)
    {
        if (s[ptr] == ' ')
            break;
        else
            result++;
    }
    return result;
}

int main()
{
    string s = "Hello World";
    cout << lengthOfLastWord(s);
    return 0;
}