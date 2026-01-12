#include <iostream>
using namespace std;

int theMaximumAchievableX(int num, int t)
{
    return num + (2 * t);
}

int main()
{
    int n = 5;
    int t = 3;
    cout << theMaximumAchievableX(n, t);
}