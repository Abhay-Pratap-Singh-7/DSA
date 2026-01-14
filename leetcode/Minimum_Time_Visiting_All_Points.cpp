#include <iostream>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int result = 0;
    int start_x = 0;
    int start_y = 0;
    int end_x = 0;
    int end_y = 0;
    int time = 0;
    for (int i = 1; i < points.size(); i++)
    {
        start_x = points[i - 1][0];
        start_y = points[i - 1][1];
        end_x = points[i][0];
        end_y = points[i][1];
        time = 0;
        while (start_x != end_x && start_y != end_y)
        {
            time++;
            if (end_x < start_x)
                start_x--;
            else
                start_x++;
            if (end_y < start_y)
                start_y--;
            else
                start_y++;
        }
        while (start_x != end_x)
        {
            time++;
            if (end_x < start_x)
                start_x--;
            else
                start_x++;
        }
        while (start_y != end_y)
        {
            time++;
            if (end_y < start_y)
                start_y--;
            else
                start_y++;
        }
        result += time;
    }
    return result;
}

int main()
{
    vector<vector<int>> points = {{1, 1}, {3, 4}, {-1, 0}};
    cout << minTimeToVisitAllPoints(points);
    return 0;
}