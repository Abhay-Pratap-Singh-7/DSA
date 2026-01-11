#include <iostream>
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int max = 0;
    int temp = 0;
    for (int i = 0; i < accounts.size(); i++)
    {
        temp = 0;
        for (int j = 0; j < accounts[i].size(); j++)
        {
            temp += accounts[i][j];
        }
        if (max < temp)
            max = temp;
    }
    return max;
}

int main()
{
    vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
    cout << maximumWealth(accounts);
    return 0;
}