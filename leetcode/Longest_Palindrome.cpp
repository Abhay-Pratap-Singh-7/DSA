#include <iostream>
using namespace std;

int longestPalindrome(string s)
{
    int lowerCase[26] = {0};
    int upperCase[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if ((int)s[i] >= 65 && (int)s[i] <= 90)
        {
            upperCase[(int)s[i] - 65]++;
        }
        else
        {
            lowerCase[(int)s[i] - 97]++;
        }
    }
    int flag = 0;
    int result = 0;
    for (int i = 0; i < 26; i++)
    {
        if (lowerCase[i] % 2 == 0)
        {
            result += lowerCase[i];
        }
        else
        {
            result += (lowerCase[i] / 2) * 2;
            if (flag == 0)
            {
                result++;
                flag = 1;
            }
        }
        if (upperCase[i] % 2 == 0)
        {
            result += upperCase[i];
        }
        else
        {
            result += (upperCase[i] / 2) * 2;
            if (flag == 0)
            {
                result++;
                flag = 1;
            }
        }
    }
    return result;
}

int main()
{
    string s = "abccccdd";
    cout << longestPalindrome(s);
    return 0;
}