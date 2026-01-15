#include <iostream>
using namespace std;

int romanToInt(string s)
{
    int result = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'V')
        {
            if (i > 0)
            {
                if (s[i - 1] == 'I')
                {
                    result += 4;
                    i--;
                }
                else
                    result += 5;
            }
            else
                result += 5;
        }
        else if (s[i] == 'X')
        {
            if (i > 0)
            {
                if (s[i - 1] == 'I')
                {
                    result += 9;
                    i--;
                }
                else
                    result += 10;
            }
            else
                result += 10;
        }
        else if (s[i] == 'L')
        {
            if (i > 0)
            {
                if (s[i - 1] == 'X')
                {
                    result += 40;
                    i--;
                }
                else
                    result += 50;
            }
            else
                result += 50;
        }
        else if (s[i] == 'C')
        {
            if (i > 0)
            {

                if (s[i - 1] == 'X')
                {
                    result += 90;
                    i--;
                }
                else
                    result += 100;
            }
            else
                result += 100;
        }
        else if (s[i] == 'D')
        {
            if (i > 0)
            {

                if (s[i - 1] == 'C')
                {
                    result += 400;
                    i--;
                }
                else
                    result += 500;
            }
            else
                result += 500;
        }
        else if (s[i] == 'M')
        {
            if (i > 0)
            {

                if (s[i - 1] == 'C')
                {
                    result += 900;
                    i--;
                }
                else
                    result += 1000;
            }
            else
                result += 1000;
        }
        else
            result += 1;
    }
    return result;
}

int main()
{
    string roman = "MCMXCIV";
    cout << romanToInt(roman);
}