#include <iostream>
using namespace std;

int numberOfSteps(int num)
{
    int result = 0;
    while (num > 0)
    {
        if (num % 2 == 0)
        {
            num /= 2;
            result++;
        }
        else
        {
            num--;
            result++;
        }
    }
    return result;
}

int main()
{
    int num = 14;
    cout << numberOfSteps(num) << endl;
    return 0;
}