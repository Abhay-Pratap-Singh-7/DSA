#include <iostream>
using namespace std;

int main()
{

    string s = "42"; 
    int temp = 0;
    cout << s[0] << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 0 || s[i] <= 9)
        {   
            //cout << s[i] << endl;
            temp = temp * 10 + s[i];
            cout << temp << endl;
        }
        else
        {
            cout << "here" << endl;
            break;
        }
    }
    // if ((int)s[0] == 45)
    // {
    //     cout << (-temp) << endl;
    // }
    // else if ((int)s[0] == 43)
    // {
    //     cout << temp << endl;
    // }
    // cout << temp << endl;
}