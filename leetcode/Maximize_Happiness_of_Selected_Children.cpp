#include <iostream>
using namespace std;

long long maximumHappinessSum(vector<int> &happiness, int k)
{
    long long result = 0;
    long long temp = 0;
    sort(happiness.begin(), happiness.end());
    for (int i = 0; i < k; i++)
    {
        temp = happiness[happiness.size() - i - 1];
        temp -= i;
        if (temp > 0)
            result += temp;
    }
    return result;
}

int main()
{
    vector<int> v = {4, 3, 3, 2, 1};
    int k = 3;
    cout << maximumHappinessSum(v, k);
}