#include <iostream>
using namespace std;

int countNegatives(vector<vector<int>> &grid)
{
    int result = 0;
    for (auto i : grid)
    {
        for (auto j : i)
        {
            if (j < 0)
            {
                result++;
            }
        }
    }
    return result;
}

int main()
{
    vector<vector<int>> v = {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}};
    cout << countNegatives(v);
}