#include <iostream>
using namespace std;

int divide(int dividend, int divisor)
{
    long long p = dividend;
    long long q = divisor;
    if (p / q >= 2147483648)
        return 2147483647;
    return p / q;
}

int main()
{
    int dividend = 10;
    int divisor = 3;
    cout << divide(dividend, divisor) << endl;
    return 0;
}