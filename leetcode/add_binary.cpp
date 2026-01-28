#include <iostream>
using namespace std;
string addBinary(string a, string b)
{
    int i = a.length() - 1;
    int j = b.length() - 1;
    int sum = 0;
    int carry = 0;
    int x;
    int y;
    string result = "";
    while (i >= 0 && j >= 0)
    {
        x = (int)a[i] - (int)'0';
        y = (int)b[j] - (int)'0';
        sum = x ^ y ^ carry;
        carry = (x & y) | (carry & (x ^ y));
        result = to_string(sum) + result;
        i--;
        j--;
    }
    while (i >= 0)
    {
        x = (int)a[i] - (int)'0';
        sum = x ^ carry;
        carry = x & carry;
        result = to_string(sum) + result;
        i--;
    }
    while (j >= 0)
    {
        y = (int)b[j] - (int)'0';
        sum = y ^ carry;
        carry = y & carry;
        result = to_string(sum) + result;
        j--;
    }
    while (carry != 0)
    {
        result = to_string(carry) + result;
        carry -= 1;
    }
    return result;
}

int main()
{
    string a = "1100";
    string b = "110";
    cout << addBinary(a, b);
    return 0;
}