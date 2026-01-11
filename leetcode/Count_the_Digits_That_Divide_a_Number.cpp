#include <iostream>
using namespace std;

int countDigits(int num)
{
    int temp = num;
    int digit;
    int result = 0;
    while (temp > 0)
    {
        digit = temp % 10;
        if (num % digit == 0)
            result++;
        temp /= 10;
    }
    return result;
}

int main()
{
    int num = 7;
    cout << countDigits(num);
    return 0;
}