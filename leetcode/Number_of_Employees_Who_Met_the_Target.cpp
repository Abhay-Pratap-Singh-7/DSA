#include <iostream>
using namespace std;

int numberOfEmployeesWhoMetTarget(vector<int> &hours, int target)
{
    int result = 0;
    for (int i = 0; i < hours.size(); i++)
    {
        if (hours[i] >= target)
            result++;
    }
    return result;
}

int main()
{
    vector<int> s = {1,2,3,2,5,3,2,5,3};
    int target = 2;
    cout << numberOfEmployeesWhoMetTarget(s, target);
    return 0;
}