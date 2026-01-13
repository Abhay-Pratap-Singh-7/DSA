#include <iostream>
using namespace std;

int calPoints(vector<string> &operations)
{
    vector<int> s;
    for (int i = 0; i < operations.size(); i++)
    {
        if (operations[i] == "+")
        {
            s.push_back(*(s.end() - 1) + *(s.end() - 2));
        }
        else if (operations[i] == "D")
        {
            s.push_back(*(s.end() - 1) * 2);
        }
        else if (operations[i] == "C")
        {
            s.erase(s.end() - 1);
        }
        else
        {
            s.push_back(stoi(operations[i]));
        }
        for ( int i = 0; i < s.size(); i++ ){
            cout << s[i] << " ";
        }
        cout << endl;
    }
    int result = 0;
    for (int i = 0; i < s.size(); i++)
    {
        result += s[i];
    }
    return result;
}

int main()
{
    vector<string> operations = {"5", "-2", "4", "C", "D", "9", "+", "+"};
    cout << calPoints(operations);
}