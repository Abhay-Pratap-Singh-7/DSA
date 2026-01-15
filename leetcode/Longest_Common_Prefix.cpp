#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    sort(strs.begin(), strs.end());
    int result = 0;
    int flag = 0;
    for (int i = 0; i < strs[0].length(); i++)
    {
        flag = 0;
        for (int j = 0; j < strs.size() - 1; j++)
        {
            if (strs[j][i] != strs[j + 1][i])
                flag = 1;
        }
        if (flag == 0)
            result++;
        else
            break;
    }
    return strs[0].substr(0, result);
}

int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    cout << longestCommonPrefix(strs);
    return 0;
}