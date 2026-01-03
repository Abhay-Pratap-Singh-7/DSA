#include <iostream>
using namespace std;

int minimumBoxes(vector<int> &apple, vector<int> &capacity)
{
    int apples = 0;
    for (int i = 0; i < apple.size(); i++)
    {
        apples += apple[i];
    }
    sort(capacity.begin(), capacity.end());
    int cap = 0;
    int count = 0;
    for (int i = 0; i < capacity.size(); i++)
    {
        cap += capacity[capacity.size() - i - 1];
        count++;
        if (cap >= apples)
        {
            break;
        }
    }
    return count;
}

int main()
{
    vector<int> apple = {1, 2, 3, 4};
    vector<int> capacity = {10, 2, 2};
    cout << minimumBoxes(apple, capacity);
}