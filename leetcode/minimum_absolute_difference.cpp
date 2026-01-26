#include <iostream>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    sort(arr.begin(), arr.end());
    int min = INT_MAX;
    vector<vector<int>> result;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        if ((arr[i + 1] - arr[i]) < min)
        {
            min = arr[i + 1] - arr[i];
            result.clear();
            vector<int> temp = {arr[i], arr[i + 1]};
            result.push_back(temp);
        }
        else if ((arr[i + 1] - arr[i]) == min)
        {
            vector<int> temp = {arr[i], arr[i + 1]};
            result.push_back(temp);
        }
    }
    return result;
}

int main()
{
    vector<int> arr = {4, 3, 1, 2};
    vector<vector<int>> result = minimumAbsDifference(arr);
    for ( auto i : result ) {
        for ( auto j : i ) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}