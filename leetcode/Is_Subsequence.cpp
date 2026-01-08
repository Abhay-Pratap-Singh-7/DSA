#include <iostream>
using namespace std;

bool isSubsequence(string s, string t)
{
    if (s.length() == 0)
        return true;
    int temp = 0;
    int j = 0;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[j])
        {
            temp++;
            j++;
        }
    }
    if (temp == s.length())
        return true;
    return false;
}

int main()
{
    string s = "abc";
    string t = "ahbgdc";
    cout << isSubsequence(s, t);
}